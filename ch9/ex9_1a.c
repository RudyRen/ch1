#include<stdio.h>
#include<stdlib.h>
void ex9_1a()
{
	/* 宣告學生成績的結構型態 */
	struct student
	{
		char num[20];/* 學生姓名 */
		int score;/* 學生成績*/
	}rect1;/* 定義結構變數rec1 */
	struct student rect2;/* 定義結構變數rec2 */
	/* 以sizeof( )計算結構變數rec1與rec2所佔記憶體空間 */
	printf("rect1 結構佔 %d bytes\n", sizeof(rect1));
	printf("rect2 結構佔 %d bytes\n", sizeof(rect2));

	//system("pause");
	//return 0;
}

