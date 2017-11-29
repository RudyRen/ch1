#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void output(char);
void ex10_1c()
{
	char ch;
	printf("\n\n...使用 getch()...\n");
	printf("請輸入一字元: ");
	ch = _getch();
	output(ch);
	printf("\n\n...使用 getche()...\n");
	printf("請輸入一字元: ");
	ch = _getche();
	output(ch);
	printf("\n\n...使用 getchar()...\n");
	printf("請輸入一字元: ");
	ch = getchar();
	output(ch);
	printf("\n");
	//system("pause");
	//return 0;
}

void output(char c)
{
	printf("\n使用putchar()輸出字元: ");
	putchar(c);
}
