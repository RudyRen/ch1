#include<stdio.h>
#include<stdlib.h>
int x = 17, y = 5;
int mod(int x, int y);
void ex5()
{
	int answer;
	answer = mod(x, y);
	printf("%d°£%dªº¾l¼Æ=%d\n",x,y,answer);
	//system("pause");
	//return 0;
}
int mod(int x, int y)
{
	int sum;
	sum = x%y;
	return sum;
}