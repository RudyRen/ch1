#include<stdio.h>
#include<stdlib.h>
int sum();
int i = 100, j = 200;
void ex6_6d()
{
	int total;
	total = sum();
	printf("total=%d\n", total);
	//system("pause");
	//return 0;
}

int sum()
{
	extern int i, j;
	return(i + j);
}
