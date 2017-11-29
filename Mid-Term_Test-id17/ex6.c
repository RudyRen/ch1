#include<stdio.h>
#include<stdlib.h>
int xy = 5;
int cub(int x);
void ex6()
{
	int sum;
	sum = cub(xy);
	printf("%dªº6¦¸¤è=%d\n",xy,sum);
	//system("pause");
	//return 0;
}
int cub(int xy)
{
	int total;
	total = xy*xy*xy*xy*xy*xy;
	return total;
}