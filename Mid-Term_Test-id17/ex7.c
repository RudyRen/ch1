#include<stdio.h>
#include<stdlib.h>
double x1 = -3.2, x2 = -2.1, x3 = 0, x4 = 2.1;
double f(double x);
void ex7() {
	int sum;
	sum = f(x1, x2, x3, x4);
	printf("f(-3.2)=%.3f,f(-2.1)=%.3f,f(0)=%.3f,f(2.1)=%.3f\n", sum, sum, sum, sum);
	//system("pause");
	//return 0;
}

double f(double x)
{
	x1 = 3 * (-3.2)*(-3.2)*(-3.2) + 2 * (-3.2) - 1;
	x2 = 3 * (-2.1)*(-2.1)*(-2.1) + 2 * (-2.1) - 1;
	x3 = 3 * 0 * 0 * 0 + 2 * 0 - 1;
	x4 = 3 * (2.1)*(2.1)*(2.1) + 2 * (2.1) - 1;
	return x1, x2, x3, x4;
}

