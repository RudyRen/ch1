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
	printf("�п�J�ǥͪ��m�W: ");
	scanf("%s", &ptr->name);
	printf("�п�J�ǥͪ����Z: ");
	scanf("%d", &ptr->score);
	printf("\n�ǥͪ��m�W�O%s\n", ptr->name);
	printf("���Z��%d\n", ptr->score);

	//system("PAUSE");
	//return 0;
}