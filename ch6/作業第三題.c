#include<stdio.h>
#include<stdlib.h>
int integer1(int, int, int);
int integer2(int, int, int);

void �@�~�ĤT�D()
{
	int num1, num2, num3, max, min;
	printf("�п�J�T�Ӿ��: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	max = integer1(num1, num2, num3);
	min = integer2(num1, num2, num3);
	printf("�̤j�Ȭ�%d\n", max);
	printf("�̤p�Ȭ�%d\n", min);
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



