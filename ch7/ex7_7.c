#include<stdio.h>
#include<stdlib.h>
void swap(int, int);/* swap()函數的原型 */
void ex7_7() {
	int a = 5, b = 20;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);
	swap(a, b);
	printf("After swap...");
	printf("a=%d,b=%d\n", a, b);
	//system("pause");
	//return 0;
}

void swap(int x, int y)/* 定義swap()函數 */
{
	int tmp = x;
	x = y;
	y = tmp;
}