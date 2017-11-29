#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void insert();
void list2();

struct student5
{
	int id5;	               /* ID���X */
	char name5[10];	       /* �ǥͩm�W */
	double score5;	       /* �ǥͤ��� */
	struct student5 *next;  /* ���V�U�@���쵲 */
};

/* �w�q���c���СAhead���V�Ĥ@���쵲 */
struct student5 *head, *ptr;

void ex9_4c()
{
	char option;
	head = (struct student5 *) malloc(sizeof(struct student5));
	//���]�쵲��C�� head �ҫ��V���`�I���s����,�ҥH�t�m�O���餧��, �u�N NULL ���w�� head->next 
	head->next = NULL;    /* head���V���`�I���s������ */

	do
	{
		/* �ϥοﶵ���ϥΪ̿�ܷs�W�B�C�L�ε��� */
		printf("\n1 => �s�W�@�`�I\n");
		printf("2 => �C�L��C���Ҧ��`�I\n");
		printf("3 => ����\n");
		printf("�п�ܤ@����: ");
		option = getchar();  /* ��J�ﶵ */
		switch (option)
		{
		case '1':	insert();
			break;
		case '2':	list2();
			break;
		case '3':	printf("Bye bye!!");
			break;
		default:	printf("Option error!!\n");
		}
	} while (option != '3');  /* ��ܬ�3�h���X�j�� */
	//system("pause");
	//return 0;
}

/* �w�qinsert( )�A����Ƥ���������ѼơA�B���Ǧ^����� */
/* �s�W�@����Ʃ��쵲��C���e�� */
void insert()
{
	/* �Hmalloc( )��ưt�m�A��O���鵹 ptr �����ܼ� */
	ptr = (struct student5 *) malloc(sizeof(struct student5));

	printf("\n<< Creating student data >>\n");
	printf("Student ID <int> : ");
	//�ϥΪ̿�J��� 
	scanf("%d", &ptr->id5);

	printf("Student name <string> : ");
	scanf("%s", ptr->name5);

	printf("Student score <double> : ");
	scanf("%lf", &ptr->score5);

	/* �[���쵲��C���e�ݪ��B�J */
	ptr->next = head->next;
	head->next = ptr;
}

/* �w�qlist( )�A����Ƥ���������ѼơA�B���Ǧ^����� */
/* �C�L��Ʃ�ù� */
void list2()
{
	struct student5 *current;
	if (head->next == NULL)
		printf("The linked list is empty\n");
	else
	{
		current = head->next;       /* �Nnode���Vhead */
		printf("\n<< Listing student data >>\n");

		while (current != NULL)     /* �C�L��ƪ���current���ū��� */
		{
			printf("%-10d %-10s %-10.2f\n", current->id5, current->name5, current->score5);
			current = current->next;
		}
	}
}