#include<stdio.h>
#include<stdlib.h>
void dash();
void output5(void);
void 練習1()
{
	printf("呼叫output函數!!\n");
	dash();
	output();
	dash();
	printf("呼叫結束,over!!\n");
	system("pause");
	return 0;
}

void output5(void)
{
	printf("我喜歡iPhone 6s\n");
	printf("也喜歡Apple watch\n");
}

void dash()
{
	int i;
	for (i = 1; i <= 50; i++)
	{
		printf("*");
	}
	printf("\n");
}

