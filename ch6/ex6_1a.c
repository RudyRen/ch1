#include<stdio.h>
#include<stdlib.h>
void output(void);  /*��ƭ쫬���i*/
void ex6_1a()
{
	printf("�I�soutput���!!\n");
	output();      /*�I�soutput()���*/
	printf("�I�s����,over!!\n");
	system("pause");
	return 0;
}
/*output()��ƪ��w�q*/
void output(void)
{
	printf("�ڳ��wiPhone 6s\n");
	printf("�]���wApple watch\n");
}

