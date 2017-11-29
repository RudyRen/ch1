#include<stdio.h>
#include<stdlib.h>
#include"c.h"
void ex10_1a();
void ex10_1b();
void ex10_1c();
void ex10_1d();
void ex10_2a();
void ex10_2b();
void ex10_2c();
void ex10_2d();
void 作業();

void main() {
	int input;
	_Bool flag = 1;

	while (flag) {
		printf("1.字元輸出入(一)\n");
		printf("2.字元輸出入(二)\n");
		printf("3.字元輸出入(三)\n");
		printf("4.字元輸出入(四)\n");
		printf("5.字元庫存函數(一)\n");
		printf("6.字元庫存函數(二)\n");
		printf("7.字元庫存函數(三)\n");
		printf("8.字元庫存函數(四)\n");
		printf("9.Howework:利用函數大小寫轉換\n");

		
		printf("-------------------------------------\n");
		
		printf("-------------------------------------\n");
		printf("請輸入要執行的範例? 1~10,按'0' 則結束執行!    ?   ");
		scanf("%d", &input);

		//ex10_1a();
		while (getchar() != '\n')
			;
		switch (input)
		{
		case 1:
			ex10_1a();
			break;
		case 2:
			ex10_1b();
			break;
		case 3:
			ex10_1c();
			break;
		case 4:
			ex10_1d();
			break;
		case 5:
			ex10_2a();
			break;
		case 6:
			ex10_2b();
			break;
		case 7:
			ex10_2c();
			break;
		case 8:
			ex10_2d();
			break;
		case 9:
			作業();
			break;
		case 0:
			flag = 0;
			break;
		default:
			break;
		}

		system("pause");
		system("cls");

	}
}