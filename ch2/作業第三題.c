#include<stdio.h>
#include<stdlib.h>

void �@�~�ĤT�D()
{
	int temperature;
	printf("Please Enter temperature: ");
	scanf("%d", &temperature);

	if ((temperature<23) && (temperature>19))
		printf("�Х[�@�����~�M!\n");
	if ((temperature<20) && (temperature>15))
		printf("�Ѯ�N�A�Ь�W�~�M!: ");
	//system("pause");
	//return 0;
}
