#include<stdio.h>
#include<stdlib.h>
int input2();
void �m��7()
{
	int data;
	data = input();
	printf("��J�@���:");
	printf("����Ƭ�:%d\n", data);
	//system("pause");
	//return 0;
}

int input2()
{
	int num;
	printf("��J�@���");
	scanf("%d", &num);
	return num;
}