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
		printf("1.������ex1:�}�C�̨C�@�Ӥ������ȥ[�W10\n");
		printf("2.������ex2:�Q�Ψ��,�N�}�C�C�@�Ӥ����ҥ���\n");
		printf("3.������ex3:��ʿ�J10�ӼƦr��,�A�C�X�}�C�����e�P��������}\n");
		printf("4.������ex4:�Q�Ϋ����ܼ�,��ʿ�J2��ƫ�,�̫��X�洫�᪺���G\n");
		printf("5.������ex5:�p��17/5���l��\n");
		printf("6.������ex6:�Q�Ψ�ƭp��5^6�����G\n");
		printf("7.������ex7:�]f(x)=3x^3+2x-1,�Ψ�ƨӶǦ^f(x)����,���O�p��f(-3.2),f(-2.1),f(0)�Pf(2.1)\n");
		printf("8.������ex8:�Q�ΤT���}�C�p��1~24���`�M\n");
		printf("9.������ex9:�N�r�ꤤ�Ҧ��j�g�r���ഫ�p�g�r��\n");
		printf("10.������ex10:�p��r��a,e,i,o,u�X�{�X��\n");
		printf("-------------------------------------\n");
		printf("�п�J�n���檺�d��? 1~10,��'0' �h��������!    ?   ");
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