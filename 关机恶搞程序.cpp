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
			printf("�ش���ȷ\n");
			break;
		}
		else
		{
			printf("�ش����������\n");
		}

	}
}

int main()
{
	printf("��ã���ӭ�򿪱����򡣸��������ʱ�����������Ŀ��\n");
	system("shutdown -s -t 300");

	PutQuestion("��ʲôʱ��1+2������3��", "�����ʱ��");

	PutQuestion("ʲôʱ��ʱ�ӻ���13�£�", "����ʱ��");

	printf("��ð����Զ��ػ�ȡ����\n");
	system("shutdown -a");

	_getch();
	return 0;
}