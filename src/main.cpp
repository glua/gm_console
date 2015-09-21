#include "GarrysMod/Lua/Interface.h"

#include "IGameConsole.h"

IGameConsole *g_GameConsole = NULL;

using namespace GarrysMod;

int ClearConsole(lua_State *state) {
	g_GameConsole->Clear();

	return 0;
}

GMOD_MODULE_OPEN() {
	CreateInterfaceFn gameUIFactory = Sys_GetFactory("gameui.dll");
	g_GameConsole = (IGameConsole*)gameUIFactory(GAMECONSOLE_INTERFACE_VERSION, NULL);

	if (g_GameConsole == NULL) {
		LUA->ThrowError("gm_console: Error getting IGameConsole interface.");

		return 0;
	}

	return 0;
}
