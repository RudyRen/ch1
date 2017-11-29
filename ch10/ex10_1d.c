#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void ex10_1d()
{
	char option;
	do
	{
		printf("\n");
		printf("1) iPod nano\n");
		printf("2) iPhone \n");
		printf("3) iMac\n");
		printf("請選擇您要的商品(1..3)或q結束: ");
		option = _getche();

		switch (option)
		{
		case '1':printf("\n您選擇的商品是iPod nano\n");
			break;
		case '2':printf("\n您選擇的商品是iPhone\n");
			break;
		case '3':printf("\n您選擇的商品是iMac\n");
			break;
		case 'q':exit(0);
		default:printf("\n沒有這樣商品,請重輸入!!!\n");
		}
	} while (option = 'q');
	//system("pause");
	//return 0;
}

