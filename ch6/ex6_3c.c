#include <stdio.h>
#include <stdlib.h>
int squAdd(int, int);
void printstar1();
void ex6_3c()
{
	int num1, num2, sum;
	printf("���{���b�p����ƪ�����M\n\n");
		printf("�п�J��Ӿ��: ");
	scanf("%d %d", &num1, &num2);
	/*�ǻ�����ܼ�num1�Bnum2��squAdd( )���*/
	/* �ϥ��ܼơ@sum�@������ƶǦ^�� */
	sum = squAdd(num1, num2);
	printstar1();
	printf("%d ������[�@%d �����謰 %d\n",num1, num2, sum);
	printstar1();
	system("pause");
	return 0;
}
/* �w�qsquAdd( )�A��ƫ��A��int�A�ѼƬ�a�Bb */
/* �p��a�Bb������M��^�� */
int squAdd(int a, int b)
{
	int ans;
	ans = a * a + b * b;
	return ans;
}
void printstar1()
{
	int i;
	for (i = 1; i <= 30; i++)
		printf("*");
	printf("\n");
}