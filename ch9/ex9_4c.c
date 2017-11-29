#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void insert();
void list2();

struct student5
{
	int id5;	               /* ID號碼 */
	char name5[10];	       /* 學生姓名 */
	double score5;	       /* 學生分數 */
	struct student5 *next;  /* 指向下一個鏈結 */
};

/* 定義結構指標，head指向第一個鏈結 */
struct student5 *head, *ptr;

void ex9_4c()
{
	char option;
	head = (struct student5 *) malloc(sizeof(struct student5));
	//假設鏈結串列的 head 所指向的節點不存放資料,所以配置記憶體之後, 只將 NULL 指定給 head->next 
	head->next = NULL;    /* head指向的節點不存任何資料 */

	do
	{
		/* 使用選項讓使用者選擇新增、列印或結束 */
		printf("\n1 => 新增一節點\n");
		printf("2 => 列印串列的所有節點\n");
		printf("3 => 結束\n");
		printf("請選擇一項目: ");
		option = getchar();  /* 輸入選項 */
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
	} while (option != '3');  /* 選擇為3則跳出迴圈 */
	//system("pause");
	//return 0;
}

/* 定義insert( )，此函數不接受任何參數，且不傳回任何值 */
/* 新增一筆資料於鏈結串列的前端 */
void insert()
{
	/* 以malloc( )函數配置適當記憶體給 ptr 指標變數 */
	ptr = (struct student5 *) malloc(sizeof(struct student5));

	printf("\n<< Creating student data >>\n");
	printf("Student ID <int> : ");
	//使用者輸入資料 
	scanf("%d", &ptr->id5);

	printf("Student name <string> : ");
	scanf("%s", ptr->name5);

	printf("Student score <double> : ");
	scanf("%lf", &ptr->score5);

	/* 加到鏈結串列的前端的步驟 */
	ptr->next = head->next;
	head->next = ptr;
}

/* 定義list( )，此函數不接受任何參數，且不傳回任何值 */
/* 列印資料於螢幕 */
void list2()
{
	struct student5 *current;
	if (head->next == NULL)
		printf("The linked list is empty\n");
	else
	{
		current = head->next;       /* 將node指向head */
		printf("\n<< Listing student data >>\n");

		while (current != NULL)     /* 列印資料直到current為空指標 */
		{
			printf("%-10d %-10s %-10.2f\n", current->id5, current->name5, current->score5);
			current = current->next;
		}
	}
}