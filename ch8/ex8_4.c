//����:��J123.456�@����,�i���ܦ�123.46
//#include<stdio.h>
//#include<stdlib.h>
//void ex8_4()
//{
	//double d;
	//double*p = &d;
	//double**p = p;
	//printf("�п�Jdouble��: ");
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
printf("�п�J�@double��: ");
scanf("%lf", &d);
printf("d=%.2f,*p=%.2f,and**pp=%.2f\n", d, *p, **pp);
//system("pause");
//return 0;
}
