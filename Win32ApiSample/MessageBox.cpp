#include<windows.h>

int ShowMessageBox1()
{
	MessageBox(NULL, TEXT("Kitty on your lap"), TEXT("���b�Z�[�W�{�b�N�X"), MB_OK);
	return 0;
}

int ShowMessageBox2()
{
	MessageBox(NULL, TEXT("Kitty on your lap"), TEXT("���b�Z�[�W�{�b�N�X"), MB_OK | MB_ICONINFORMATION);
	return 0;
}

int ReturnValue()
{
	int on_button;
	on_button = MessageBox(NULL, TEXT("Do you like Nekomimi?"),
		TEXT("���₵�Ă��܂�"), MB_YESNO | MB_ICONQUESTION);

	if (on_button == IDYES)
		MessageBox(NULL, TEXT("You are nice!"),
			TEXT("���b�Z�[�W�{�b�N�X"), MB_OK);
	else MessageBox(NULL, TEXT("Be Killed!"),
		TEXT("���b�Z�[�W�{�b�N�X"), MB_OK);

	return 0;
}

int StringFormat(HINSTANCE hInstance)
{
	CHAR chStr[128];
	wsprintf(chStr, "�C���X�^���X�n���h�� : %d", hInstance);
	MessageBox(NULL, chStr, TEXT("Kitty on your lap"), MB_OK);
	return 0;
}

int StringFunc1()
{
	const char * str1 = TEXT("Kitty on your lap");
	TCHAR str2[32];
	lstrcpy(str2, str1);
	MessageBox(NULL, str2, str2, MB_OK);
	return 0;
}

int StringFunc2()
{
	const char * str1 = TEXT("Kitty on your lap");
	TCHAR str2[32];
	lstrcpyn(str2, str1, lstrlen(str1) + 1);
	MessageBox(NULL, str2, str2, MB_OK);
	return 0;
}

int StringFunc3()
{
	TCHAR str1[128] = TEXT("Kitty on your lap\n");
	const char * str2 = TEXT("Tokyo mew mew");
	lstrcat(str1, str2);
	MessageBox(NULL, str1, str2, MB_OK);
	return 0;
}