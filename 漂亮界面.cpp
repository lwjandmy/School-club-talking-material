#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>


void ChangeColor()
{
	static iIndex;
	WORD wAttributes[] =
	{
		BACKGROUND_GREEN | BACKGROUND_INTENSITY,
		BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY,
		BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY,
		BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_INTENSITY,
		BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
		BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY,
	};

	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);  
  
    SetConsoleTextAttribute(hOut, wAttributes[iIndex]);  
    
	if (++iIndex == sizeof(wAttributes) / sizeof(WORD))
		iIndex = 0;
}

int main()
{
	int iIndex;
	const char *chOutput1[] =
	{
"                                  ",
"�������������������ǣ�����",  
"������ǣ������������",  
"�����ǣ�����������������ǣ���",  
"����ǣ���ǣ���������ǣ��",  
"���ǣ���ǣ�������������ǣ���ǣ�",  
"���ǣ��ǣ���ǣ�������ǣ��ǣ�",  
"���ǣ��ǣ��ǣ�����ǣ����ǣ��ǣ�",  
"���ǣ��ǣ���ǣ����ǣ���ǣ��ǣ�",  
"���ǣ���ǣ�������ǣ���ǣ���ǣ�",  
"����ǣ���ǣ������ǣ���ǣ��",  
"�����ǣ�����������ǣ���ǣ���",  
"������ǣ��������ǣ����",  
"�������������������ǣ�����",  
"�������������������",  
"�������������������",  
"�������������������",  
"����������������ڣ���",  
"������������������",
"                                  ",
"",
	};

const char *chOutput2[] =
{
"                                           ",
"�����������࣮���������������࣮���������� ",
"���������࣮���࣮���������࣮�࣮�������� ",
"�����������࣮���࣮�������࣮���࣮������ ",
"�������������࣮���࣮���࣮�࣮�࣮������ ",
"�����������࣮���������������� �࣮������  ",
"�������࣮�������������������������࣮���� ",
"�����࣮�����������������������������࣮�� ",
"���࣮���������������������������������࣮ ",
"�࣮�������������������������������������� ",
"�࣮�������������������������������������� ",
"�࣮���������ɣ��������������ɣ����������� ",
"�࣮ ��������������������������������������",
"�࣮ �������򣮣�����U���������򣮣������� ",
"���࣮���������������������������������࣮ ",
"������࣮��������������������������࣮�� ",
"���������࣮�࣮�࣮�࣮�࣮�࣮�࣮����   ",
"                                           ",
"",
	};

const char *chOutput3[] =
	{
"                                             ",
"���������������������������� ������������    ",
"���������������������������������������� ����",
"������������������������������������������ ��",
"���������� �������������������� ������������ ",
"���������������������������� ������������    ",
"��������������������������������������       ",
"�����������������񡡡������������� ��      ",
"�������������������������{������������       ",
"�����������������������^�m�a����������       ",
"�������������������|�z�z���z�z�|����         ",
"��������������������������������             ",
"��������������������������������             ",
"����������������������������������           ",
"�������������� �z�����|�|�|�����z            ",
"                                             ",
"",
	};

	ChangeColor();
	for (iIndex = 0; iIndex != sizeof(chOutput1) / sizeof(const char *); ++iIndex)
	{
		printf("%s\n", chOutput1[iIndex]);
		Sleep(50);
	}

	Sleep(3000);
	ChangeColor();
	for (iIndex = 0; iIndex != sizeof(chOutput2) / sizeof(const char *); ++iIndex)
	{
		printf("%s\n", chOutput2[iIndex]);
		Sleep(50);
	}


	Sleep(3000);
	ChangeColor();
	for (iIndex = 0; iIndex != sizeof(chOutput3) / sizeof(const char *); ++iIndex)
	{
		printf("%s\n", chOutput3[iIndex]);
		Sleep(50);
	}


	_getch();

	return 0;
}
