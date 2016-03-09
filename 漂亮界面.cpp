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
"£ï£ï£ï£ï£ïÌÇÌÇÌÇÌÇÌÇÌÇÌÇ£ï£ï£ï£ï£ï",  
"£ï£ï£ï£ïÌÇ£ï£ï£ï£ï£ï£ï£ï£ï£ï£ï£ï£ï",  
"£ï£ï£ïÌÇ£ï£ïÌÇÌÇÌÇÌÇÌÇÌÇÌÇÌÇ£ï£ï£ï",  
"£ï£ïÌÇ£ï£ïÌÇ£ï£ï£ï£ï£ï£ï£ï£ïÌÇ£ï£ï",  
"£ïÌÇ£ï£ïÌÇ£ï£ïÌÇÌÇÌÇÌÇÌÇÌÇ£ï£ïÌÇ£ï",  
"£ïÌÇ£ïÌÇ£ï£ïÌÇ£ï£ï£ï£ï£ï£ïÌÇ£ïÌÇ£ï",  
"£ïÌÇ£ïÌÇ£ïÌÇ£ï£ïÌÇÌÇ£ï£ï£ïÌÇ£ïÌÇ£ï",  
"£ïÌÇ£ïÌÇ£ï£ïÌÇ£ï£ï£ïÌÇ£ï£ïÌÇ£ïÌÇ£ï",  
"£ïÌÇ£ï£ïÌÇ£ï£ïÌÇÌÇÌÇ£ï£ïÌÇ£ï£ïÌÇ£ï",  
"£ï£ïÌÇ£ï£ïÌÇ£ï£ï£ï£ï£ïÌÇ£ï£ïÌÇ£ï£ï",  
"£ï£ï£ïÌÇ£ï£ïÌÇÌÇÌÇÌÇÌÇ£ï£ïÌÇ£ï£ï£ï",  
"£ï£ï£ï£ïÌÇ£ï£ï£ï£ï£ï£ï£ïÌÇ£ï£ï£ï£ï",  
"£ï£ï£ï£ï£ïÌÇÌÇÌÇÌÇÌÇÌÇÌÇ£ï£ï£ï£ï£ï",  
"£ï£ï£ï£ï£ï£ï£ï°ô£ï£ï£ï£ï£ï£ï£ï£ï£ï",  
"£ï£ï£ï£ï£ï£ï£ï°ô£ï£ï£ï£ï£ï£ï£ï£ï£ï",  
"£ï£ï£ï£ï£ï£ï£ï°ô£ï£ï£ï£ï£ï£ï£ï£ï£ï",  
"£ï£ï£ï£ï£ï£ï£ï°ô£ï£ï£ï£ï³ÔÍÚ£ï£ï£ï",  
"£ï£ï£ï£ï£ï£ï£ï£ï£ï£ï£ï£ï£ï£ï£ï£ï£ï",
"                                  ",
"",
	};

const char *chOutput2[] =
{
"                                           ",
"£®£®£®£®£®¹à£®£®£®£®£®£®£®£®¹à£®£®£®£®£®£® ",
"£®£®£®£®¹à£®£®¹à£®£®£®£®£®¹à£®¹à£®£®£®£®£® ",
"£®£®£®£®£®¹à£®£®¹à£®£®£®£®¹à£®£®¹à£®£®£®£® ",
"£®£®£®£®£®£®¹à£®£®¹à£®£®¹à£®¹à£®¹à£®£®£®£® ",
"£®£®£®£®£®¹à£®£®£®£®£®£®£®£®£® ¹à£®£®£®£®  ",
"£®£®£®¹à£®£®£®£®£®£®£®£®£®£®£®£®£®¹à£®£®£® ",
"£®£®¹à£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®¹à£®£® ",
"£®¹à£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®¹à£® ",
"¹à£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®¹à ",
"¹à£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®¹à ",
"¹à£®£®£®£®£®¡É£®£®£®£®£®£®£®¡É£®£®£®£®£®¹à ",
"¹à£® £®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®¹à",
"¹à£® £®£®£®¡ò£®£®£®£®U£®£®£®£®¡ò£®£®£®£®¹à ",
"£®¹à£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®£®¹à£® ",
"£®£®¹à¹à£®£®£®£®£®£®£®£®£®£®£®£®£®¹à¹à£®£® ",
"£®£®£®£®¹à£®¹à£®¹à£®¹à£®¹à£®¹à£®¹à£®£®£®   ",
"                                           ",
"",
	};

const char *chOutput3[] =
	{
"                                             ",
"¨¨€¨€¨€¨€¨€¨€¨Ž¡¡¡¡¡¡¡¡¡¡¡¡ ¨¨€¨€¨€¨€¨Ž    ",
"¨¨¡¡¡¡¡¡¡¡¡¡¡¡¨¨Ž¡¡¡¡¡¡¡¡¨¨¡¡¡¡¡¡¡¡ ¨¨Ž",
"¨¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¨¨Ž¡¡¡¡¨¨¡¡¡¡¡¡¡¡¡¡¡¡ ¨€",
"¨†¡¡¡¡¡¡¨ ¨Ž¡¡¡¡¡¡¨¨Ž¨¨¡¡¡¡ ¨¨€¡¡¡¡¡¡¨€ ",
"¨Ž¡¡¡¡¨¨¡¡¨¨Ž¡¡¡¡¡¡¡¡¡¡¡¡ ¨¨Ž¨¨Ž¨¨    ",
"¨¨€¨€¨¡¡¡¡¨¨¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¨¨Ž       ",
"¡¡¡¡¡¡¡¡¡¡¡¡¨€¡¡¡ñ¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡ñ¡¡ ¨€      ",
"¡¡¡¡¡¡¡¡¡¡¡¡¨€¡¡¡¨¡¡¡¡¡¡¨{¡¡¡¡¡¡¡¨¡¡¨€       ",
"¡¡¡¡¡¡¡¡¡¡¡¡¨¨Ž¡¡¡¡¡¡¨^¨m¨a¡¡¡¡¡¡¨¨       ",
"¡¡¡¡¡¡¡¡¡¡¡¡¡¡¨¨€¨|¨z¨z¡¡¨z¨z¨|¨€¨         ",
"¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¨¨¡¡¡¡¡¡¨¨Ž             ",
"¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¨€¡¡¡¡¡¡¡¡¡¡¨€             ",
"¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¨¨¨Š¡¡¡¡¡¡¨†¨¨Ž           ",
"¡¡¡¡¡¡¡¡¡¡¡¡¡¡ ¨z¨Ž¨¨|¨|¨|¨Ž¨¨z            ",
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
