#include<stdio.h>
#include<stdlib.h>
int Fib(int n);
void �@�~�ĥ|�D()
{
	int i, n;
	printf("�п�J�Q��X�ĴX�ӶO��ƦC\n");
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
