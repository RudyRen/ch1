#include<stdio.h>
#include<stdlib.h>
#include"c.h"
void ex1_1();
void ex1_2();
void ex1_3();
void ex1_4();
void �@�~�Ĥ@�D();
void �@�~�ĤG�D();
void �@�~�ĤT�D();
void �@�~�ĥ|�D();

void main(){
	int input;
	_Bool flag = 1;

	while (flag){
		printf("1.�Ĥ@��C�{���y��\n");
		printf("2.����(overflow) (1/2)\n");
		printf("3.�����X��쪺�e��\n");
		printf("4.��J���scanf()\n");
		printf("-------------------------------------\n");
		printf("5.�@�~�Ĥ@�D\n");
		printf("6.�@�~�ĤG�D\n");
		printf("7.�@�~�ĤT�D\n");
		printf("8.�@�~�ĥ|�D\n");
		printf("-------------------------------------\n");
		printf("�п�J�n���檺�d��? 1~8,��'0' �h��������!    ?   ");
		scanf("%d", &input);

		//ex1_1();
		switch (input)
		{
		case 1:
			ex1_1();
			break;
		case 2:
			ex1_2();
			break;
		case 3:
			ex1_3();
			break;
		case 4:
			ex1_4();
			break;
		case 5:
			�@�~�Ĥ@�D();
			break;
		case 6:
			�@�~�ĤG�D();
			break;
		case 7:
			�@�~�ĤT�D();
			break; 
		case 8:
			�@�~�ĥ|�D();
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