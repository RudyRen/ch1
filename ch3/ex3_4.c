#include<stdio.h>
#include<stdlib.h>

void ex3_4(){
	int a, b;
	char oper;

	printf("Please ��J�[��: ");   scanf("%d", &a);
	printf("Please ��J�Q�[��: "); scanf("%d", &b);
	printf("Please ��J�B��Ÿ� +,-,*,/: "); scanf(" %c", &oper);

	switch (oper)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b);
		break;
	case '-':
		printf("%d-%d=%d\n", a, b, a - b);
		break;
	case'*':
		printf("%d*%d=%d\n", a, b, a*b);
		break;
	case'/':
		printf("%d/%d=%d\n", a, b, a / b);
		break;
	default:
		printf("input error!!\n");
	}

	//system("pause");
	//return 0;
}
		

			