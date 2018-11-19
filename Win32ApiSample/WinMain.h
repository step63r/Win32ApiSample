#pragma once
#include<windows.h>

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// メッセージボックス (MessageBox.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
int ShowMessageBox1();
int ShowMessageBox2();
int ReturnValue();
int StringFormat(HINSTANCE hInstance);
int StringFunc1();
int StringFunc2();
int StringFunc3();

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// コマンドライン引数 (CmdArgument.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
int StartUpArgument(LPSTR lpCmdLine);
int FuncArgument();

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// ウィンドウを作る (WindowCreate.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
int WindowCreate(HINSTANCE hInstance);
int WindowCreateEx(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// ウィンドウクラスの登録 (RegisterWindowClass.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
int RegisterWindowClass(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// メッセージ (MessageLoop.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
int MessageLoop(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// 終了処理 (ExitProc.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
LRESULT CALLBACK WndExitProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
int ExitProc(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// 閉じないウィンドウ (ExitProcNoDestroy.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
LRESULT CALLBACK WndExitProcNoDestroy(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
int ExitProcNoDestroy(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// ウィンドウ生成拒否 (RefuseWindowCreate.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
LRESULT CALLBACK WndRefuseWindowCreate(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
int RefuseWindowCreate(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// ウィンドウ初期位置 (SetDefaultPosition.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
LRESULT CALLBACK WndSetDefaultPosition(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
int SetDefaultPosition(HINSTANCE hInstance);