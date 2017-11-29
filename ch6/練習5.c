#include<stdio.h>
#include<stdlib.h>
float cubAdd(float, float, float);
void printstar2();
void 練習5()
{
	float num1, num2, num3, sum;
	printf("此程式在計算三個浮點數的立方和\n\n");
	printf("請輸入三個浮點數: ");
	scanf("%f %f %f", &num1, &num2, &num3);


	sum = cubAdd(num1, num2, num3);
	printstar2();
	printf("%f 的立方加  %f的立方加  %f的立方為%f\n", num1, num2, num3, sum);
	printstar2();
	system("pause");
	return 0;
}


float cubAdd(float a, float b, float c)
{
	float ans;
	ans = a*a*a + b*b*b + c*c*c;
	return ans;
}
void printstar2()
{
	int i;
	for (i = 1; i <= 30; i++)
		printf("*");
	printf("\n");
}




