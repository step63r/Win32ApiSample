#include<windows.h>

/// <summary>
/// Win32�A�v���P�[�V�����̏����G���g���|�C���g
/// </summary>
/// <param name="hInstance">���݂̃C���X�^���X�̃n���h��</param>
/// <param name="hPrevInstance">�ȑO�̃C���X�^���X�̃n���h��</param>
/// <param name="lpCmdLine">�R�}���h���C��</param>
/// <param name="nCmdShow">�\�����</param>
/// <returns>�I���R�[�h</returns>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	MessageBox(NULL, TEXT("Kitty on your lap"), TEXT("���b�Z�[�W�{�b�N�X"), MB_OK);
	return 0;
}