#include<stdio.h>
#include<stdlib.h>
int Fib(int n);
void 作業第四題()
{
	int i, n;
	printf("請輸入想算出第幾個費氏數列\n");
	scanf("%d", &n);
	for (i = 1; i <=n; i++)
	{
		printf("%d,", Fib(i));
	}
	//system("pause");
	//return 0;
}

int f;
int Fib(int n)
{
	if (n == 0)f = 0;
	else if (n == 1)f = 1;
	else if (n >= 2)
	{
		f = Fib(n - 2) + Fib(n - 1);
	}
	return f;
}
