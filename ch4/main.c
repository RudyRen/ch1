#include<stdio.h>
#include<stdlib.h>
#include"c.h"
void ex4_1();
void ex4_2();
void ex4_3();
void ex4_4();
void �}�C�m��1();
void �}�C�m��2();
void �}�C�m��3();
void �}�C�m��4();
void �}�C�m��5();

void main(){
	int input;
	_Bool flag = 1;

	while (flag){
		printf("1.do while�j��\n");
		printf("2.�}�C���d��\n");
		printf("3.�}�C�����Ρг̤j�P�̤p��\n");
		printf("4.�}�C�ɽu���ˬd \n");
		printf("5.�}�C�m��1\n");
		printf("6.�}�C�m��2\n");
		printf("7.�}�C�m��3\n");
		printf("8.�}�C�m��4\n");
		printf("9.�}�C�m��5\n");
		printf("-------------------------------------\n");

		printf("-------------------------------------\n");
		printf("�п�J�n���檺�d��? 1~10,��'0' �h��������!    ?   ");
		scanf("%d", &input);

		//ex4_1();
		switch (input)
		{
		case 1:
			ex4_1();
			break;
		case 2:
			ex4_2();
			break;
		case 3:
			ex4_3();
			break;
		case 4:
			ex4_4();
			break;
		case 5:
			�}�C�m��1();
			break;
		case 6:
			�}�C�m��2();
			break;
		case 7:
			�}�C�m��3();
			break;
		case 8:
			�}�C�m��4();
			break;
		case 9:
			�}�C�m��5();
			break;
		case0:
			flag = 0;
			break;
		default:
			break;
		}

		system("pause");
		system("cls");

	}
}