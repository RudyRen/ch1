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
		printf("�п�ܱz�n���ӫ~(1..3)��q����: ");
		option = _getche();

		switch (option)
		{
		case '1':printf("\n�z��ܪ��ӫ~�OiPod nano\n");
			break;
		case '2':printf("\n�z��ܪ��ӫ~�OiPhone\n");
			break;
		case '3':printf("\n�z��ܪ��ӫ~�OiMac\n");
			break;
		case 'q':exit(0);
		default:printf("\n�S���o�˰ӫ~,�Э���J!!!\n");
		}
	} while (option = 'q');
	//system("pause");
	//return 0;
}

