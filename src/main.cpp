#ifdef _LINUX
	#define GAMEUI_LIB "GameUI.so"
#else
	#define GAMEUI_LIB "GameUI.dll"
#endif

#include "GarrysMod/Lua/Interface.h"

#include "interface.h"
#include "vgui/VGUI.h"

#include "IGameConsole.h"
#include "CGameConsoleDialog.h"

using namespace GarrysMod;

IGameConsole *g_GameConsole = NULL;
CGameConsoleDialog *g_GameConsoleDialog = NULL;

int console_Activate(lua_State *state) {
	g_GameConsole->Activate();

	return 0;
}

int console_Initialize(lua_State *state) {
	g_GameConsole->Initialize();

	return 0;
}

int console_Hide(lua_State *state) {
	g_GameConsole->Hide();

	return 0;
}

int console_Clear(lua_State *state) {
	g_GameConsole->Clear();

	return 0;
}

int console_IsConsoleVisible(lua_State *state) {
	LUA->PushBool(g_GameConsole->IsConsoleVisible());

	return 1;
}

int console_Get(lua_State *state) {
	Lua::UserData *ud = (Lua::UserData *)LUA->NewUserdata(sizeof(Lua::UserData));
	ud->data = g_GameConsoleDialog;
	ud->type = 420; // Lua::Type::PANEL

	LUA->CreateMetaTableType("Console", 420);
	LUA->SetMetaTable(-2);

	return 1;
}

int CONSOLE_tostring(lua_State *state) {
	LUA->PushString("Console instance");

	return 1;
}

int CONSOLE_SetParent(lua_State *state) {
	LUA->CheckType(2, Lua::Type::PANEL);

	vgui::Panel *pPanel = (vgui::Panel *)((GarrysMod::Lua::UserData *)LUA->GetUserdata(2))->data;

	g_GameConsoleDialog->SetParent(pPanel);

	return 0;
}

int CONSOLE_GetParent(lua_State *state) {
	vgui::Panel *pPanel = g_GameConsoleDialog->GetParent();

	Lua::UserData *ud = (Lua::UserData *)LUA->NewUserdata(sizeof(Lua::UserData));
	ud->data = pPanel;
	ud->type = Lua::Type::PANEL;

	LUA->CreateMetaTableType("Panel", Lua::Type::PANEL);
	LUA->SetMetaTable(-2);

	return 1;
}

int CONSOLE_SetVisible(lua_State *state) {
	LUA->CheckType(2, Lua::Type::BOOL);

	g_GameConsoleDialog->SetVisible(LUA->GetBool());

	return 0;
}

int CONSOLE_IsVisible(lua_State *state) {
	LUA->PushBool(g_GameConsoleDialog->IsVisible());

	return 1;
}

int CONSOLE_IsOpaque(lua_State *state) {
	LUA->PushBool(g_GameConsoleDialog->IsOpaque());

	return 1;
}

int CONSOLE_SetTitle(lua_State *state) {
	LUA->CheckType(2, Lua::Type::STRING);

	g_GameConsoleDialog->SetTitle(LUA->GetString(2), true);

	return 0;
}

int CONSOLE_GetName(lua_State *state) {
	LUA->PushString(g_GameConsoleDialog->GetName());

	return 1;
}

int CONSOLE_GetClassName(lua_State *state) {
	LUA->PushString(g_GameConsoleDialog->GetClassName());

	return 1;
}

GMOD_MODULE_OPEN() {
	CreateInterfaceFn GameUIFactory = Sys_GetFactory(GAMEUI_LIB);
	g_GameConsole = (IGameConsole*)GameUIFactory(GAMECONSOLE_INTERFACE_VERSION, NULL);

	if (g_GameConsole == NULL) {
		LUA->ThrowError("gm_console: Error getting IGameConsole interface.");

		return 0;
	}

	g_GameConsoleDialog = *((CGameConsoleDialog **)(g_GameConsole) + 2);

	LUA->PushSpecial(Lua::SPECIAL_GLOB);
		LUA->CreateTable();
			LUA->PushCFunction(console_Activate);
			LUA->SetField(-2, "Activate");

			LUA->PushCFunction(console_Initialize);
			LUA->SetField(-2, "Initialize");

			LUA->PushCFunction(console_Hide);
			LUA->SetField(-2, "Hide");

			LUA->PushCFunction(console_Clear);
			LUA->SetField(-2, "Clear");

			LUA->PushCFunction(console_IsConsoleVisible);
			LUA->SetField(-2, "IsConsoleVisible");

			LUA->PushCFunction(console_Get);
			LUA->SetField(-2, "Get");
		LUA->SetField(-2, "console");
	LUA->Pop();

	LUA->CreateMetaTableType("Console", 420);
		LUA->CreateTable();
			// LUA->PushCFunction(CONSOLE_SetParent); Broken (Meep says it has to do with things being across .dlls)
			// LUA->SetField(-2, "SetParent");

			LUA->PushCFunction(CONSOLE_GetParent);
			LUA->SetField(-2, "GetParent");

			LUA->PushCFunction(CONSOLE_SetVisible);
			LUA->SetField(-2, "SetVisible");

			LUA->PushCFunction(CONSOLE_IsVisible);
			LUA->SetField(-2, "IsVisible");

			LUA->PushCFunction(CONSOLE_IsOpaque);
			LUA->SetField(-2, "IsOpaque");

			LUA->PushCFunction(CONSOLE_SetTitle);
			LUA->SetField(-2, "SetTitle");

			LUA->PushCFunction(CONSOLE_GetName);
			LUA->SetField(-2, "GetName");

			LUA->PushCFunction(CONSOLE_GetClassName);
			LUA->SetField(-2, "GetClassName");
		LUA->SetField(-2, "__index");

		LUA->PushString("Console");
		LUA->SetField(-2, "__type");

		LUA->PushCFunction(CONSOLE_tostring);
		LUA->SetField(-2, "__tostring");
	LUA->Pop();

	return 0;
}

GMOD_MODULE_CLOSE() {
	return 0;
}
