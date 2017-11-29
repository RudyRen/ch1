//除錯:輸入123.456作測試,進位變成123.46
//#include<stdio.h>
//#include<stdlib.h>
//void ex8_4()
//{
	//double d;
	//double*p = &d;
	//double**p = p;
	//printf("請輸入double數: ");
	//scanf("%f", d);
	//printf("a=%d,*p=%d,and**pp=%d\n", d, *p, **pp);
	//system("pause");
	//return 0;
//}


#include<stdio.h>
#include<stdlib.h>
void ex8_4()
{
double d;
double*p = &d;
double**pp = &p;
printf("請輸入一double數: ");
scanf("%lf", &d);
printf("d=%.2f,*p=%.2f,and**pp=%.2f\n", d, *p, **pp);
//system("pause");
//return 0;
}
