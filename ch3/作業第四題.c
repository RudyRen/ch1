#include<stdio.h>
#include<stdlib.h>
void 作業第四題()
{
	int  i = 5, sum = 0;
	while (i <= 5)
	{
		sum = sum + i*i;
		i++;
		printf("5~20之間的平方和=%d", sum);
	}
	//system("pause");
	//return 0;
}