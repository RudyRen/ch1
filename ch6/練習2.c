#include<stdio.h>
#include<stdlib.h>

void calculate();

void �m��2() {
	calculate();
	system("pause");
	return 0;
}

void calculate()
{
	int num;
	printf("�п�J����:");
	scanf("%d", &num);
	if (num >= 60)
		printf("pass\n");
	else
		printf("down\n");
}


