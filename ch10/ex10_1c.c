#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void output(char);
void ex10_1c()
{
	char ch;
	printf("\n\n...�ϥ� getch()...\n");
	printf("�п�J�@�r��: ");
	ch = _getch();
	output(ch);
	printf("\n\n...�ϥ� getche()...\n");
	printf("�п�J�@�r��: ");
	ch = _getche();
	output(ch);
	printf("\n\n...�ϥ� getchar()...\n");
	printf("�п�J�@�r��: ");
	ch = getchar();
	output(ch);
	printf("\n");
	//system("pause");
	//return 0;
}

void output(char c)
{
	printf("\n�ϥ�putchar()��X�r��: ");
	putchar(c);
}
