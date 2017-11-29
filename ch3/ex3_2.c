#include<stdio.h>
#include<stdlib.h>
void ex3_2()
{
	int num1, num2, larger;
	printf("Please input two integers::\n");
	printf("Please input first integer::");
	scanf("%d", &num1);
	printf("Please input second integer::");
    scanf("%d", &num2);

	num1 > num2 ? (larger = num1) : (larger = num2);/* 條件運算子 */
	printf("%d greater value\n", larger);

	//system("pause");
	//return 0;
}