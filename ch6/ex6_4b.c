#include<stdio.h>
#include<stdlib.h>
void input(void);
void output3(void);
void ex6_4b()
{
	printf("���{���b���ե����ܼ�\n");
	input();
	output3();
	//system("pause");
	//return 0;
}

int array[5];
void input(void)
{
	int index;
	for (index = 0; index < 5; index++)
	{
		printf("�п�J #%d ���: ", index + 1);
		scanf("%d", &array[index]);
	}
}

void output3(void)
{
	int index;
	printf("\n");
	for (index = 0; index < 5; index++)

		printf("array[%d] is %d\n", index, array[index]);
}