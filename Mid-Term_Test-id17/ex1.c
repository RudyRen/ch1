#include<stdio.h>
#include<stdlib.h>
void ex1()
{
	int i;
	int arr[5] = { 34,76,33,42,76 };
	printf("��ư}�Carr�ŧi��: \n");
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d]=%d+10\n", i, arr[i] );
	}
	printf("*****�̫ᵲ�G*****\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n",arr[i]+10);
	}
	//system("pause");
	//return 0;
}