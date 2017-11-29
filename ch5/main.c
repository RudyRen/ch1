#include<stdio.h>
#include<stdlib.h>
#include"c.h"
void ex5_1();
void ex5_2();
void ex5_3();
void ex5_4();
void ex5_5();
void ex7_3c();
void ex7_3d();
void ex7_3e();
void ex7_4a();
void ex7_4b();
void ex7_4c();
void ex7_4d();
void 絤策肈1();
void 絤策肈2();
void 絤策肈3();
void ex5_ex1();
void ex5_ex2();



void main() {
	int input;
	_Bool flag = 1;

	while (flag) {
		printf("1.蝴皚じ\n");
		printf("2.蝴皚莱ノ-程籔程\n");
		printf("3.じ籔﹃ぇゑ耕絛ㄒ\n");
		printf("4.虏虫ㄧ计絛ㄒ \n");
		printf("5.祘Α柑㊣ㄧ计  \n");
		printf("6.ex7_3c\n");
		printf("7.ex7_3d\n");
		printf("8.ex7_3e\n");
		printf("9.ec7_4a\n");
		printf("10.ec7_4b\n");
		printf("11.ec7_4c\n");
		printf("12.ec7_4d\n");
		printf("13.絤策肈1\n");
		printf("14.絤策肈2\n");
		printf("15.絤策肈3\n");
		printf("16.ex5_ex1\n");
		printf("17.ex5_ex2\n");
		printf("-------------------------------------\n");


		printf("-------------------------------------\n");
		printf("叫块璶磅︽絛ㄒ? 1~17,'0' 玥挡磅︽!    ?   ");
		scanf("%d", &input);

		//ex5_1();
		switch (input)
		{
		case 1:
			ex5_1();
			break;
		case 2:
			ex5_2();
			break;
		case 3:
			ex5_3();
			break;
		case 4:
			ex5_4();
			break;
		case 5:
			ex5_5();
			break;
		case 6:
			ex7_3c();
			break;
		case 7:
			ex7_3d();
			break;
		case 8:
			ex7_3e();
			break;
		case 9:
			ex7_4a();
			break;
		case 10:
			ex7_4b();
			break;
		case 11:
			ex7_4c();
			break;
		case 12:
			ex7_4d();
			break;
		case 13:
			絤策肈1();
			break;
		case 14:
			絤策肈2();
			break;
		case 15:
			絤策肈3();
			break;
		case 16:
			ex5_ex1();
			break;
		case 17:
			ex5_ex2();
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