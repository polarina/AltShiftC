#include "stdafx.h"

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	RegisterHotKey(NULL, 1, MOD_SHIFT | MOD_ALT, 0x43);
	RegisterHotKey(NULL, 1, MOD_SHIFT | MOD_ALT, 0x4A); // Alt+Shift+J for Dvorak users

	MSG msg = { 0 };

	while (GetMessage(&msg, NULL, WM_HOTKEY, WM_HOTKEY) != 0)
		SendMessage(GetForegroundWindow(), WM_SYSCOMMAND, SC_CLOSE, 0);

	return WM_QUIT;
}