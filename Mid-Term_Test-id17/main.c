#include<stdio.h>
#include<stdlib.h>
#include"c.h"
void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex9();
void ex10();

void main() {
	int input;
	_Bool flag = 1;

	while (flag) {
		printf("-------------------------------------\n");
		printf("1.期中考ex1:陣列裡每一個元素的值加上10\n");
		printf("2.期中考ex2:利用函數,將陣列每一個元素皆平方\n");
		printf("3.期中考ex3:手動輸入10個數字後,再列出陣列的內容與元素的位址\n");
		printf("4.期中考ex4:利用指標變數,手動輸入2資料後,最後輸出交換後的結果\n");
		printf("5.期中考ex5:計算17/5的餘數\n");
		printf("6.期中考ex6:利用函數計算5^6的結果\n");
		printf("7.期中考ex7:設f(x)=3x^3+2x-1,用函數來傳回f(x)的值,分別計算f(-3.2),f(-2.1),f(0)與f(2.1)\n");
		printf("8.期中考ex8:利用三維陣列計算1~24的總和\n");
		printf("9.期中考ex9:將字串中所有大寫字母轉換小寫字母\n");
		printf("10.期中考ex10:計算字串a,e,i,o,u出現幾次\n");
		printf("-------------------------------------\n");
		printf("請輸入要執行的範例? 1~10,按'0' 則結束執行!    ?   ");
		scanf("%d", &input);

		//ex1();
		switch (input)
		{
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
		case 6:
			ex6();
			break;
		case 7:
			ex7();
			break;
		case 8:
			ex8();
			break;
		case 9:
			ex9();
			break;
		case 10:
			ex10();
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