#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void ex6_1a();
void ex6_2a();
void ex6_2b();
void ex6_3a();
void ex6_3b();
void ex6_3c();
void ex6_4a();
void ex6_4b();
void ex6_4c();
void ex6_5a();
void ex6_5b();
void ex6_6a();
void ex6_6b();
void ex6_6c();
void ex6_6d();
void �m��1();
void �m��2();
void �m��3();
void �m��4();
void �m��5();
void �m��6();
void �m��7();
void �@�~�Ĥ@�D();
void �@�~�ĤG�D();
void �@�~�ĤT�D();
void �@�~�ĥ|�D();
void �@�~�Ĥ��D();


void main() {
	int input;
	_Bool flag = 1;

	while (flag) {
		printf("1.��ר��\n");
		printf("2.��ƪ��^�ǭ�\n");
		printf("3.return�ԭz\n");
		printf("4.��Ʀp��ǻ��Ѽ�1\n");
		printf("5.��Ʀp��ǻ��Ѽ�2\n");
		printf("6.��Ʀp��ǻ��Ѽ�3\n");
		printf("7.�����ܼƻP�ϰ��ܼ�1\n");
		printf("8.�����ܼƻP�ϰ��ܼ�2\n");
		printf("9.�����ܼƻP�ϰ��ܼ�3\n");
		printf("10.���j���1 \n");
		printf("11.���j���2\n");
		printf("12.auto�x�s���O\n");
		printf("13.static�x�s���O\n");
		printf("14.register�x�s���O\n");
		printf("15.extern�x�s���O\n");
		printf("16.��ƽm��1\n");
		printf("17.��ƽm��2\n");
		printf("18.��ƽm��3\n");
		printf("19.��ƽm��4\n");
		printf("20.��ƽm��5\n");
		printf("21.��ƽm��6\n");
		printf("22.��ƽm��7\n");
		printf("-------------------------------------\n");
		printf("23.�@�~�Ĥ@�D:�Q�λ��j�M�D���j��ƨD��ƪ� gcd(�̤j���]��)\n");
		printf("24.�@�~�ĤG�D:�]�p�@�q�Ʀr�C��\n");
		printf("25.�@�~�ĤT�D:�ϩw�q�G�Ө��, �@���L�X�T�Ӿ�ƪ��̤j��, �G���L�X�T�Ӿ�ƪ��̤p��\n");
		printf("26.�@�~�ĥ|�D:�O��ƦC���W�h���Y�@�����Ȭ���e�G�����M, ���] F0=1, F1=1, �h�O��ƦC��:1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...�եH���j��ƩM�D���j��ư��椧.\n");
		printf("27.�@�~�Ĥ��D:�եH static �x�s���O���Ƥ��]�p�@�p�ƾ�, �C��I�s�Ө��, �p�ƾ����ȳ��n�۰ʲ֥[, �̫��X�Ө�ƳQ�I�s������\n");
		printf("-------------------------------------\n");
		printf("�п�J�n���檺�d��? 1~27,��'0' �h��������!    ?   ");
		scanf("%d", &input);

		//ex6_1();
		switch (input)
		{
		case 1:
			ex6_1a();
			break;
		case 2:
			ex6_2a();
			break;
		case 3:
			ex6_2b();
			break;
		case 4:
			ex6_3a();
			break;
		case 5:
			ex6_3b();
			break;
		case 6:
			ex6_3c();
			break;
		case 7:
			ex6_4a();
			break;
		case 8:
			ex6_4b();
			break;
		case 9:
			ex6_4c();
			break;
		case 10:
			ex6_5a();
			break;
		case 11:
			ex6_5b();
			break;
		case 12:
			ex6_6a();
			break;
		case 13:
			ex6_6b();
			break;
		case 14:
			ex6_6c();
			break;
		case 15:
			ex6_6d();
			break;
		case 16:
			�m��1();
			break;
		case 17:
			�m��2();
			break;
		case 18:
			�m��3();
			break;
		case 19:
			�m��4();
			break;
		case 20:
			�m��5();
			break;
		case 21:
			�m��6();
			break;
		case 22:
			�m��7();
			break;
		case 23:
			�@�~�Ĥ@�D();
			break;
		case 24:
			�@�~�ĤG�D();
			break;
		case 25:
			�@�~�ĤT�D();
			break;
		case 26:
			�@�~�ĥ|�D();
			break;
		case 27:
			�@�~�Ĥ��D();
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