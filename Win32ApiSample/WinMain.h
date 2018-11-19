#pragma once
#include<windows.h>

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// ���b�Z�[�W�{�b�N�X (MessageBox.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
int ShowMessageBox1();
int ShowMessageBox2();
int ReturnValue();
int StringFormat(HINSTANCE hInstance);
int StringFunc1();
int StringFunc2();
int StringFunc3();

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// �R�}���h���C������ (CmdArgument.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
int StartUpArgument(LPSTR lpCmdLine);
int FuncArgument();

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// �E�B���h�E����� (WindowCreate.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
int WindowCreate(HINSTANCE hInstance);
int WindowCreateEx(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// �E�B���h�E�N���X�̓o�^ (RegisterWindowClass.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
int RegisterWindowClass(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// ���b�Z�[�W (MessageLoop.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
int MessageLoop(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// �I������ (ExitProc.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
LRESULT CALLBACK WndExitProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
int ExitProc(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// ���Ȃ��E�B���h�E (ExitProcNoDestroy.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
LRESULT CALLBACK WndExitProcNoDestroy(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
int ExitProcNoDestroy(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// �E�B���h�E�������� (RefuseWindowCreate.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
LRESULT CALLBACK WndRefuseWindowCreate(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
int RefuseWindowCreate(HINSTANCE hInstance);

// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
// �E�B���h�E�����ʒu (SetDefaultPosition.cpp)
// ===== ===== ===== ===== ===== ===== ===== ===== ===== =====
LRESULT CALLBACK WndSetDefaultPosition(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
int SetDefaultPosition(HINSTANCE hInstance);