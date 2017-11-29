#include<stdio.h>
#include<stdlib.h>

void 作業第三題()
{
	int temperature;
	printf("Please Enter temperature: ");
	scanf("%d", &temperature);

	if ((temperature<23) && (temperature>19))
		printf("請加一件薄外套!\n");
	if ((temperature<20) && (temperature>15))
		printf("天氣冷，請穿上外套!: ");
	//system("pause");
	//return 0;
}
