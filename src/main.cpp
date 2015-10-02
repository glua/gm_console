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
	// ud->data = *(((void **)g_GameConsole) + 2);
	ud->data = g_GameConsoleDialog;
	ud->type = 420;

	LUA->CreateMetaTableType("Console", 420);

	LUA->SetMetaTable(-2);

	return 1;
}

int CONSOLE_SetParent(lua_State *state) {
	LUA->CheckType(1, Lua::Type::PANEL);

	vgui::Panel *pPanel = *(vgui::Panel **)LUA->GetUserdata(1);

	g_GameConsoleDialog->SetParent(pPanel*);

	return 0;
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
			LUA->PushCFunction(CONSOLE_SetParent);
			LUA->SetField(-2, "SetParent");
		LUA->SetField(-2, "__index");
	LUA->Pop();

	return 0;
}
