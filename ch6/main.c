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
void 絤策1();
void 絤策2();
void 絤策3();
void 絤策4();
void 絤策5();
void 絤策6();
void 絤策7();
void 穨材肈();
void 穨材肈();
void 穨材肈();
void 穨材肈();
void 穨材き肈();


void main() {
	int input;
	_Bool flag = 1;

	while (flag) {
		printf("1.孔ㄧ计\n");
		printf("2.ㄧ计肚\n");
		printf("3.return痹瓃\n");
		printf("4.ㄧ计肚患把计1\n");
		printf("5.ㄧ计肚患把计2\n");
		printf("6.ㄧ计肚患把计3\n");
		printf("7.办跑计籔跋办跑计1\n");
		printf("8.办跑计籔跋办跑计2\n");
		printf("9.办跑计籔跋办跑计3\n");
		printf("10.患癹ㄧ计1 \n");
		printf("11.患癹ㄧ计2\n");
		printf("12.auto纗摸\n");
		printf("13.static纗摸\n");
		printf("14.register纗摸\n");
		printf("15.extern纗摸\n");
		printf("16.ㄧ计絤策1\n");
		printf("17.ㄧ计絤策2\n");
		printf("18.ㄧ计絤策3\n");
		printf("19.ㄧ计絤策4\n");
		printf("20.ㄧ计絤策5\n");
		printf("21.ㄧ计絤策6\n");
		printf("22.ㄧ计絤策7\n");
		printf("-------------------------------------\n");
		printf("23.穨材肈:ノ患癹㎝獶患癹ㄧ计―ㄢ计 gcd(程そ计)\n");
		printf("24.穨材肈:砞璸瞦计笴栏\n");
		printf("25.穨材肈:ㄏ﹚竡ㄧ计, 俱计程, 俱计程\n");
		printf("26.穨材肈:禣ん计砏玥琘兜ㄤ玡兜㎝, 安砞 F0=1, F1=1, 玥禣ん计:1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...刚患癹ㄧ计㎝獶患癹ㄧ计磅︽ぇ.\n");
		printf("27.穨材き肈:刚 static 纗摸ㄧ计い砞璸璸计竟, –讽㊣赣ㄧ计, 璸计竟常璶笆仓, 程块赣ㄧ计砆㊣Ω计\n");
		printf("-------------------------------------\n");
		printf("叫块璶磅︽絛ㄒ? 1~27,'0' 玥挡磅︽!    ?   ");
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
			絤策1();
			break;
		case 17:
			絤策2();
			break;
		case 18:
			絤策3();
			break;
		case 19:
			絤策4();
			break;
		case 20:
			絤策5();
			break;
		case 21:
			絤策6();
			break;
		case 22:
			絤策7();
			break;
		case 23:
			穨材肈();
			break;
		case 24:
			穨材肈();
			break;
		case 25:
			穨材肈();
			break;
		case 26:
			穨材肈();
			break;
		case 27:
			穨材き肈();
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