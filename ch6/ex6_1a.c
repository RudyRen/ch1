#include<stdio.h>
#include<stdlib.h>
void output(void);  /*函數原型公告*/
void ex6_1a()
{
	printf("呼叫output函數!!\n");
	output();      /*呼叫output()函數*/
	printf("呼叫結束,over!!\n");
	system("pause");
	return 0;
}
/*output()函數的定義*/
void output(void)
{
	printf("我喜歡iPhone 6s\n");
	printf("也喜歡Apple watch\n");
}

