#include<stdio.h>
#include<stdlib.h>
int num;
int cube();
void 練習6()
{
	printf("請輸入一整數: ");
	scanf("%d", &num);
	printf("此程式在計算整數的立方和為:%d\n", cube());
	//system("pause");
	//return 0;
}

int cube()
{
	return num*num*num;
}



	