//����:�H�U�{��,������debug�@�U
//#include<stdio.h>
//#include<stdlib.h>
//void ex8_3()
//{
	//int a = 100;
	//int*p = a;
	//int**pp = p;
	//printf("a=%d,*p=%d,**pp=%d\n", a, *p, **pp);
	//system("pause");
	//return 0;
//}

#include<stdio.h>
#include<stdlib.h>
void ex8_3()
{
	int a = 100;
	int*p = &a;
	int**pp = &p;
	printf("a=%d,*p=%d,**pp=%d\n", a, *p, **pp);
	//system("pause");
	//return 0;
}