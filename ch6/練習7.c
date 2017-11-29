#include<stdio.h>
#include<stdlib.h>
int input2();
void 練習7()
{
	int data;
	data = input();
	printf("輸入一整數:");
	printf("此整數為:%d\n", data);
	//system("pause");
	//return 0;
}

int input2()
{
	int num;
	printf("輸入一整數");
	scanf("%d", &num);
	return num;
}