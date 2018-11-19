#include<windows.h>

/// <summary>
/// Win32アプリケーションの初期エントリポイント
/// </summary>
/// <param name="hInstance">現在のインスタンスのハンドル</param>
/// <param name="hPrevInstance">以前のインスタンスのハンドル</param>
/// <param name="lpCmdLine">コマンドライン</param>
/// <param name="nCmdShow">表示状態</param>
/// <returns>終了コード</returns>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	MessageBox(NULL, TEXT("Kitty on your lap"), TEXT("メッセージボックス"), MB_OK);
	return 0;
}