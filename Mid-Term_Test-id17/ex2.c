#include<stdio.h>
#include<stdlib.h>
void square(int *arr);
void ex2() {
	int i;
	int arr[2] = { 5,10 };
	square(&arr[2]);
	for (i = 0; i < 2; i++)
	{
		printf("arr[%d]=%d*%d=%d\n", i, arr[i] , arr[i],arr[i]*arr[i]);
	}
	//system("pause");
	//return 0;
}
void square(int *arr)
{
	*arr = arr[2] * arr[2];
}