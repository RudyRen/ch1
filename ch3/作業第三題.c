#include<stdio.h>
#include<stdlib.h>
void 作業第三題()
{
	int season;
	printf("請輸入1~4: ");
	scanf("%d", &season);

	switch(season)
	{
	  case 1:
		printf("春天\n");
		break;
	  case 2:
		printf("夏天\n");
		break;
	  case 3:
		printf("秋天\n");
		break;
	  case 4:
		printf("冬天\n");
		break;
	  default:
		printf("輸入錯誤\n");
	}

	//system("pause");
	//return 0;
}
