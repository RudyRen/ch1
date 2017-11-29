#include<stdio.h>
#include<stdlib.h>
int number = 100;
void output4(void);
void ex6_4c()
{

	printf("number is %d\n", number);
	output4();
	//system("pause")
	//return 0;
}

void output4(void)
{
	int number = 200;
	printf("number is %d\n", number);
}