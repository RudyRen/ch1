#include<stdio.h>
#include<stdlib.h>
#include"c.h"
void ex8_1();
void ex8_2();
void ex8_3();
void ex8_4();
void ex8_5();
void ex8_6();
void ex8_7();
void ex8_8();

void main() {
	int input;
	_Bool flag = 1;

	while (flag) {
		printf("1.雙重指標使用範例\n");
		printf("2.三重指標使用範例\n");
		printf("3.指標變數除錯(一)\n");
		printf("4.指標變數除錯(二)\n");
		printf("5.練習修改ex8_1.c指標程式,改成字元型態\n");
		printf("6.指標陣列與二維陣列(一)\n");
		printf("7.指標陣列與二維陣列(二)\n");
		printf("8.指標陣列練習1\n");

		printf("-------------------------------------\n");

		printf("-------------------------------------\n");
		printf("請輸入要執行的範例? 1~11,按'0' 則結束執行!    ?   ");
		scanf("%d", &input);

		//ex8_1();
		switch (input)
		{
		case 1:
			ex8_1();
			break;
		case 2:
			ex8_2();
			break;
		case 3:
			ex8_3();
			break;
		case 4:
			ex8_4();
			break;
		case 5:
			ex8_5();
			break;
		case 6:
			ex8_6();
			break;
		case 7:
			ex8_7();
			break;
		case 8:
			ex8_8();
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