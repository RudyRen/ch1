#include<stdio.h>
#include<stdlib.h>
float Abs(void);

void �m��4() {
	float num;
	num = Abs();
	printf("��ƭȤ�����Ȭ� %f\n", num);
	system("pause");
	return 0;
}
float Abs(void)
{
	float num;
	printf("�п�J�@�ƭ�: ");
	scanf("%f", &num);
	return(num > 0) ? num : -num;
}
