#include<stdio.h>
#include<stdlib.h>

void calculate();

void 練習2() {
	calculate();
	system("pause");
	return 0;
}

void calculate()
{
	int num;
	printf("請輸入分數:");
	scanf("%d", &num);
	if (num >= 60)
		printf("pass\n");
	else
		printf("down\n");
}


