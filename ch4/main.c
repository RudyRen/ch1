#include<stdio.h>
#include<stdlib.h>
#include"c.h"
void ex4_1();
void ex4_2();
void ex4_3();
void ex4_4();
void 皚絤策1();
void 皚絤策2();
void 皚絤策3();
void 皚絤策4();
void 皚絤策5();

void main(){
	int input;
	_Bool flag = 1;

	while (flag){
		printf("1.do while癹伴\n");
		printf("2.皚絛ㄒ\n");
		printf("3.皚莱ノ⌒程籔程\n");
		printf("4.皚絬浪琩 \n");
		printf("5.皚絤策1\n");
		printf("6.皚絤策2\n");
		printf("7.皚絤策3\n");
		printf("8.皚絤策4\n");
		printf("9.皚絤策5\n");
		printf("-------------------------------------\n");

		printf("-------------------------------------\n");
		printf("叫块璶磅︽絛ㄒ? 1~10,'0' 玥挡磅︽!    ?   ");
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
			皚絤策1();
			break;
		case 6:
			皚絤策2();
			break;
		case 7:
			皚絤策3();
			break;
		case 8:
			皚絤策4();
			break;
		case 9:
			皚絤策5();
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