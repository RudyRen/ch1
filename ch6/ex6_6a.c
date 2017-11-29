#include<stdio.h>
#include<stdlib.h>
void increase();
void ex6_6a()
{

	int count;
	printf("Testing storage class << auto >>\n");

	for (count = 1; count <= 5; count++)
	{
		printf("# %d call: ", count);
		increase();
	}
	printf("Testing end!!\n");
	//system("pause");
	//return 0;
}

	void increase()
	{
		auto int ai = 100;
		printf("ai=%d\n", ++ai);
	}
