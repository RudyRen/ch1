#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void ex10_2a()
{
	char ch;
	printf("�п�J�@�r��: ");
	ch = _getche();
	if (isalnum(ch))
		printf("\n%c �O�@�^��r���μƦr\n", ch);
	else
		printf("\n%c ���O�@�^��r���μƦr\n", ch);
	//system("pause");
	//return 0;
}