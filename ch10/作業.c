#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

char comment(char);

void �@�~()
{
	char ch;
	printf("---�^��j�p�g�ഫ---\n");
	printf("��J�^��: ");
	ch = getchar();
	ch = comment(ch);
	printf("\n���r���ഫ��%c\n", ch);

	//syetem("pause");
	//return 0;
}

char comment(char ch)
{
	if (ch >= 97 && ch <= 122)
		return (ch > 91) ? ch - 32 : ch;
	else if (ch >= 65 && ch <= 90)
		return (ch < 91) ? ch + 32 : ch;
}