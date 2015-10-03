# gm_console
Lua access to the GMod console.

## Description
This will allow you to interact with the console in Lua, with a new module, console, and a new type, Console, containing methods for controlling the console panel itself. Read the wiki for more information.

## Building/installation
1. Clone the repo
2. Run build-windows.bat
3. Move ./bin/gm_console.dll/so to GarrysMod/garrysmod/lua/bin/gmsv_console.dll
4. require("console") from menu state to test

## Credit
- MetaMan (danielga) - VTable dump of CGameConsoleDialog; much C++ help
- Meep - C++ help
- Willox - C++ help
