#include<stdio.h>
#include<stdlib.h>
int square(); /*square()���쫬�ŧi*/
void ex6_2a()
{
	int ans;
	printf("�p��Y�@��ƪ�����\n\n");
	ans = square(); /*��ans����square()���Ǧ^��*/
	printf("��������O%d\n", ans);
	system("pause");
	return 0;
}
/*�w�qsquare(),��ƫ��A��int*/
/*�n�D��J�@��,�ñN���ƥ������^*/
int square()
{
	int num, total;
	printf("�п�J�@���: ");
	scanf("%d", &num);
	total = num*num;
	return total; /*�Ntatal�Ǧ^�I�s���*/
}