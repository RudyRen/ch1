#include<stdio.h>
#include<stdlib.h>
void increase3();
void �@�~�Ĥ��D()
{
	int count;
	printf("Testing storage class << static >>\n");

	for (count = 1; count <= 5; count++)
	{
		printf("#%d call: ", count);
		increase();
	}
	printf("Testing end!!\n");
	//system("pause");
	//return 0;
}

void increase3(void)
{
	static int si = 100;
	printf("si = %d\n", ++si);
}

