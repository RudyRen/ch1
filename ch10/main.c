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
void �@�~();

void main() {
	int input;
	_Bool flag = 1;

	while (flag) {
		printf("1.�r����X�J(�@)\n");
		printf("2.�r����X�J(�G)\n");
		printf("3.�r����X�J(�T)\n");
		printf("4.�r����X�J(�|)\n");
		printf("5.�r���w�s���(�@)\n");
		printf("6.�r���w�s���(�G)\n");
		printf("7.�r���w�s���(�T)\n");
		printf("8.�r���w�s���(�|)\n");
		printf("9.Howework:�Q�Ψ�Ƥj�p�g�ഫ\n");

		
		printf("-------------------------------------\n");
		
		printf("-------------------------------------\n");
		printf("�п�J�n���檺�d��? 1~10,��'0' �h��������!    ?   ");
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
			�@�~();
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