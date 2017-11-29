#include<stdio.h>
#include<stdlib.h>
void increase2();
void ex6_6b()
{

	int count;
	printf("Testing storage class <<static >>\n");

	for (count = 1; count <=5; count++)
	{
		printf("#%d call: ", count);
			increase();
	}
	//system("pause");
	//return 0;
}

void increase2(void)
{
	static int si = 100;
	printf("si=%d\n", ++si);
}

