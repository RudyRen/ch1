#include<stdio.h>
#include<stdlib.h>
int number;/* number是一個全域變數 */
void output2(void);/* output( )的原型宣告 */
void ex6_4a()
{
	printf("Please enter a number:  ");
	scanf("%d", &number);
	output2();
	//system("pause");
	//return 0;
}
/* 定義output( ) */
void output2(void)
{
	printf("Number is %d\n", number);
}