#include<stdio.h>
#include<stdlib.h>
float Area(void);

void �m��3() {
	float area;
	area = Area();
	printf("����Ϊ����n�� %.2f\n",area);
	system("pause");
	return 0;
}

float Area(void)
{
	float num1, num2;
	printf("�п�J����Ϊ����M�e: ");
	scanf("%1f %1f",&num1,&num2);
	return (num1*num2);
}