#include<stdio.h>
#include<stdlib.h>
float cubAdd(float, float, float);
void printstar2();
void �m��5()
{
	float num1, num2, num3, sum;
	printf("���{���b�p��T�ӯB�I�ƪ��ߤ�M\n\n");
	printf("�п�J�T�ӯB�I��: ");
	scanf("%f %f %f", &num1, &num2, &num3);


	sum = cubAdd(num1, num2, num3);
	printstar2();
	printf("%f ���ߤ�[  %f���ߤ�[  %f���ߤ謰%f\n", num1, num2, num3, sum);
	printstar2();
	system("pause");
	return 0;
}


float cubAdd(float a, float b, float c)
{
	float ans;
	ans = a*a*a + b*b*b + c*c*c;
	return ans;
}
void printstar2()
{
	int i;
	for (i = 1; i <= 30; i++)
		printf("*");
	printf("\n");
}




