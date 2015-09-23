#include "GarrysMod/Lua/Interface.h"

#include "interface.h"
#include "vgui/VGUI.h"

#include "vgui/IVGui.h"
#include "vgui_controls/Panel.h"

#include "IGameConsole.h"

IGameConsole *g_GameConsole = NULL;

using namespace GarrysMod;

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

int lmao(lua_State *state) {
	Lua::UserData *ud = (Lua::UserData *)LUA->NewUserdata(sizeof(Lua::UserData));
	ud->data = *(((void **)g_GameConsole) + 2);
	ud->type = Lua::Type::PANEL;

	return 1;
}

int console_SetParent(lua_State *state) {
	LUA->CheckType(1, Lua::Type::PANEL);

	vgui::Panel *pPanel = *(vgui::Panel **)LUA->GetUserdata(1);
	vgui::VPANEL pVPanel = pPanel->GetVPanel();

	g_GameConsole->SetParent(pVPanel);

	return 0;
}

GMOD_MODULE_OPEN() {
	CreateInterfaceFn gameUIFactory = Sys_GetFactory("gameui.dll");
	g_GameConsole = (IGameConsole*)gameUIFactory(GAMECONSOLE_INTERFACE_VERSION, NULL);

	if (g_GameConsole == NULL) {
		LUA->ThrowError("gm_console: Error getting IGameConsole interface.");

		return 0;
	}

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

			// LUA->PushCFunction(console_SetParent); Broken
			// LUA->SetField(-2, "SetParent");

			LUA->PushCFunction(lmao);
			LUA->SetField(-2, "Get");
		LUA->SetField(-2, "console");
	LUA->Pop();

	return 0;
}
