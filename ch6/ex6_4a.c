#include<stdio.h>
#include<stdlib.h>
int number;/* number�O�@�ӥ����ܼ� */
void output2(void);/* output( )���쫬�ŧi */
void ex6_4a()
{
	printf("Please enter a number:  ");
	scanf("%d", &number);
	output2();
	//system("pause");
	//return 0;
}
/* �w�qoutput( ) */
void output2(void)
{
	printf("Number is %d\n", number);
}