#include <stdio.h>
#include <stdlib.h>

void 作業第二題()
{
	float temperature;
	printf("Please Enter 攝氏溫度: ");
	scanf("%f", &temperature);
	temperature = 1.8* temperature + 32;
	printf("華氏溫度 = %f\n", temperature);
	//system("pause");
	//return 0;    
}