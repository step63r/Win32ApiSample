#include<windows.h>

LRESULT CALLBACK WndRefuseWindowCreate(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp)
{
	int nYesNo;
	LPCREATESTRUCT lpcsWnd;

	switch (msg) {
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	case WM_CREATE:
		lpcsWnd = (LPCREATESTRUCT)lp;
		nYesNo = MessageBox(hwnd, TEXT("�E�B���h�E�𐶐����܂���?"),
			TEXT(lpcsWnd->lpszName), MB_YESNO | MB_ICONQUESTION);
		if (nYesNo == IDYES) return 0;
		else return -1;
	}
	return DefWindowProc(hwnd, msg, wp, lp);
}

int RefuseWindowCreate(HINSTANCE hInstance)
{
	HWND hwnd;
	WNDCLASS winc;
	MSG msg;

	winc.style = CS_HREDRAW | CS_VREDRAW;
	winc.lpfnWndProc = WndRefuseWindowCreate;
	winc.cbClsExtra = winc.cbWndExtra = 0;
	winc.hInstance = hInstance;
	winc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	winc.hCursor = LoadCursor(NULL, IDC_ARROW);
	winc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	winc.lpszMenuName = NULL;
	winc.lpszClassName = TEXT("KITTY");

	if (!RegisterClass(&winc)) return 0;

	hwnd = CreateWindow(
		TEXT("KITTY"), TEXT("Kitty on your lap"),
		WS_OVERLAPPEDWINDOW | WS_VISIBLE,
		100, 100, 200, 200, NULL, NULL,
		hInstance, NULL
	);

	if (hwnd == NULL) return 0;

	while (GetMessage(&msg, NULL, 0, 0)) DispatchMessage(&msg);
	return msg.wParam;
}