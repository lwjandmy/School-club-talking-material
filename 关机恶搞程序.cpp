#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void PutQuestion(const char *chQuestion, const char *chAnswer)
{
	char chInput[100];

	for (;;)
	{
		printf(chQuestion);

		scanf("%s", &chInput);

		if (strcmp(chInput, chAnswer) == 0)
		{
			printf("回答正确\n");
			break;
		}
		else
		{
			printf("回答错误，请重试\n");
		}

	}
}

int main()
{
	printf("你好，欢迎打开本程序。给你五分钟时间完成以下题目。\n");
	system("shutdown -s -t 300");

	PutQuestion("在什么时候1+2不等于3？", "做错的时候");

	PutQuestion("什么时候时钟会响13下？", "坏的时候");

	printf("你好棒！自动关机取消。\n");
	system("shutdown -a");

	_getch();
	return 0;
}