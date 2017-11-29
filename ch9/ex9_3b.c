#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student3
{
	int id;
	char name[10];
	double score;
};
//定義一結構陣列,此陣列可存10筆資料
struct student3 classes[10];
int index = 0;
void create();
void list();
void ex9_3b()
{
	char option;
	do
	{
		printf("\n1 => create student data\n");
		printf("2 => list student data\n");
		printf("3 = > quit\n");
		printf("Please enter your choices: ");
		option = getchar();
		puts("");
		switch (option)
		{
		case '1': create();
			break;
		case '2': list();
			break;
		case '3': printf("Bye bye!!\n");
			break;
		default: printf("Option error!!\n");
		}
	} while (option != '3');
	//system("pause");
	//return 0;
}

void create()
{
	if (index >= 10) {
		printf("The array is full\n");
		return;
	}

	printf("\n<< Creating student data >>\n");
	printf("Student ID: ");
	scanf("%d", &classes[index].id);
	while (getchar() != '\n')
		continue;

	printf("Stduent name: ");
	scanf("%s", &classes[index].name);

	printf("Stduent score: ");
	scanf("%1f", &classes[index].score);
	index++;
}

void list()
{
	int i;
	printf("\n<< Listing student data >>\n");
	for (i = 0; i < index; i++)
		printf("%-10d %-10s %5.1f\n", classes[i].id, classes[i].name, classes[i].score );
}




