#include<windows.h>

int StartUpArgument(LPSTR lpCmdLine)
{
	MessageBox(NULL, lpCmdLine, TEXT("Kitty"), MB_ICONINFORMATION);
	return 0;
}

int FuncArgument()
{
	MessageBox(NULL, GetCommandLine(), TEXT("Kitty"), MB_ICONINFORMATION);
	return 0;
}