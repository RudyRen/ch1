#include<stdio.h>
#include<stdlib.h>
void ex9_4a()
{
	struct student4
	{
		char name[20];
		int score;
	};
	struct student4 *ptr;
	ptr = (struct student4 *) malloc(sizeof(struct student4));
	printf("請輸入學生的姓名: ");
	scanf("%s", &ptr->name);
	printf("請輸入學生的成績: ");
	scanf("%d", &ptr->score);
	printf("\n學生的姓名是%s\n", ptr->name);
	printf("成績為%d\n", ptr->score);

	//system("PAUSE");
	//return 0;
}