#include "WinMain.h"

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
	// �߂�l��C�ӂ̊֐��ɂ��邱�Ƃŋ������ς��܂�
	return SetDefaultPosition(hInstance);
}