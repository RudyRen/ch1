#include<stdio.h>
#include<stdlib.h>
void swap1(int *, int *);/* 函數swap()原型的宣告 */
void ex7_8(){
	int a = 5, b = 20;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);
	swap1(&a, &b);
	printf("After swap...");
	printf("a=%d,b=%d\n", a, b);
	//system("pause");
	//return 0;
}
void swap1(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}