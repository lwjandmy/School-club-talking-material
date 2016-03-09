#define _WIN32_WINNT	0x0501
#include <windows.h>
#include <stdio.h>

void KeyDown(unsigned short usVirtualKey)
{
	INPUT input = { 0 };

	input.type = INPUT_KEYBOARD;
	input.ki.wVk = usVirtualKey;

	SendInput(1, &input, sizeof(INPUT));

	Sleep(100);
}

void KeyUp(unsigned short usVirtualKey)
{
	INPUT input = { 0 };

	input.type = INPUT_KEYBOARD;
	input.ki.wVk = usVirtualKey;
	input.ki.dwFlags = KEYEVENTF_KEYUP;

	SendInput(1, &input, sizeof(INPUT));

	Sleep(100);
}

void KeyClick(unsigned short usVirtualKey)
{
	KeyDown(usVirtualKey);
	KeyUp(usVirtualKey);
}

void InputString(const char *chString)
{
	while (*chString != 0)
	{
		KeyClick(*chString);
		++chString;
	}
}


int main()
{
	// WIN + R
	printf("WIN + R\n");
	KeyDown(VK_LWIN);
	KeyDown('R');
	KeyUp('R');
	KeyUp(VK_LWIN);
	Sleep(1000);


	// "notepad"
	printf("notepad\n");
	InputString("NOTEPAD");

	// 回车
	KeyClick(VK_RETURN);
	Sleep(1000);

	// 在记事本里输入"hello"
	printf("hello\n");
	InputString("HELLO!");
	Sleep(1000);

	// Alt + F4, 关闭记事本
	printf("ALT + F4\n");
	KeyDown(VK_MENU);
	KeyDown(VK_F4);
	KeyUp(VK_F4);
	KeyUp(VK_MENU);
	Sleep(1000);

	// 'n', 不保存
	printf("n\n");
	KeyClick('N');


	return 0;
}