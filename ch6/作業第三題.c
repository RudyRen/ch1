#include<stdio.h>
#include<stdlib.h>
int integer1(int, int, int);
int integer2(int, int, int);

void 作業第三題()
{
	int num1, num2, num3, max, min;
	printf("請輸入三個整數: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	max = integer1(num1, num2, num3);
	min = integer2(num1, num2, num3);
	printf("最大值為%d\n", max);
	printf("最小值為%d\n", min);
	//system("pause");
	//return 0;
}

	int integer1(int num1,int num2,int num3)
	{
		int  max;
		if ((num1 > num2) && (num1 > num3))
			max = num1;
		else if ((num2 > num1) && (num2 > num3))
			max = num2;
		else
			max = num3;
		return max;
	}

	int integer2(int num1, int num2, int num3)
	{
		int min;
		if ((num1 < num2) && (num1 < num3))
			min = num1;
		else if ((num2 < num1) && (num2 < num3))
			min = num2;
		else
			min = num3;
		return min;
	}



