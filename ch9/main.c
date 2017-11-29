#include<stdio.h>
#include<stdlib.h>
#include"c.h"
void ex9_1a();
void ex9_1b();
void ex9_1c();
void ex9_2a();
void ex9_2b();
void ex9_3a();
void ex9_3b();
void ex9_4a();
void ex9_4b();
void ex9_4c();
void ex9_4d();

void main() {
	int input;
	_Bool flag = 1;

	while (flag) {
		printf("1.結構變數的定義與使用(一)\n");
		printf("2.結構變數的定義與使用(二)\n");
		printf("3.結構成員的初值設定\n");
		printf("4.定義一指向結構變數的指標\n");
		printf("5.結構指標變數與函數\n");
		printf("6.結構陣列(一)\n");
		printf("7.結構陣列(二)\n");
		printf("8.鏈結串列(一)\n");
		printf("9.鏈結串列(二)\n");
		printf("10.鏈結串列(三)\n");
		printf("11.鏈結串列(四)\n");
		
		printf("-------------------------------------\n");
		
		printf("-------------------------------------\n");
		printf("請輸入要執行的範例? 1~11,按'0' 則結束執行!    ?   ");
		scanf("%d", &input);

		//ex9_1a();
		switch (input)
		{
		case 1:
			ex9_1a();
			break;
		case 2:
			ex9_1b();
			break;
		case 3:
			ex9_1c();
			break;
		case 4:
			ex9_2a();
			break;
		case 5:
			ex9_2b();
			break;
		case 6:
			ex9_3a();
			break;
		case 7:
			ex9_3b();
			break;
		case 8:
			ex9_4a();
			break;
		case 9:
			ex9_4b();
			break;
		case 10:
			ex9_4c();
			break;
		case 11:
			ex9_4d();
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