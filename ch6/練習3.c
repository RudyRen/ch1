#include<stdio.h>
#include<stdlib.h>
float Area(void);

void 練習3() {
	float area;
	area = Area();
	printf("長方形的面積為 %.2f\n",area);
	system("pause");
	return 0;
}

float Area(void)
{
	float num1, num2;
	printf("請輸入長方形的長和寬: ");
	scanf("%1f %1f",&num1,&num2);
	return (num1*num2);
}