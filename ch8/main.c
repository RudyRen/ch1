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
		printf("1.�������Шϥνd��\n");
		printf("2.�T�����Шϥνd��\n");
		printf("3.�����ܼư���(�@)\n");
		printf("4.�����ܼư���(�G)\n");
		printf("5.�m�߭ק�ex8_1.c���е{��,�令�r�����A\n");
		printf("6.���а}�C�P�G���}�C(�@)\n");
		printf("7.���а}�C�P�G���}�C(�G)\n");
		printf("8.���а}�C�m��1\n");

		printf("-------------------------------------\n");

		printf("-------------------------------------\n");
		printf("�п�J�n���檺�d��? 1~11,��'0' �h��������!    ?   ");
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