#include<stdio.h>
#include<stdlib.h>
void ex3()
{
	int i, num[10];
	for (i = 0; i < 10; i++)
	{
		printf("num[%d]: ", i);
		scanf("%d", &num[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("num[%d]=%d,&num[%d]=%p\n", i, num[i], i, &num[i]);
	}
	//system("pause");
	//return 0;
}