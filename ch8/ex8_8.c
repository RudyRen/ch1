#include<stdio.h>
#include<stdlib.h>
void ex8_8()
{
	int j,k;
	char *str[13] = { "ab","cd","ef","gh","ij","kl","mn","op","qr","st","uv","wx","yz" };
	for (j = 0; j < 13; j++) {
		for (k = 0; k < 2; k++)
			printf("%c", *(*(str+j)+k));
	}
	//system("pause");
	//return 0;
}
