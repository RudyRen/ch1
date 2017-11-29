#include<stdio.h>
#include<stdlib.h>
void ex10()
{
	int i, j;
	char x1 = 'a', x2 = 'e', x3 = 'i', x4 = 'o', x5 = 'u';
	printf("%c %c %c %c %c出現幾次: ", x1, x2, x3, x4, x5);
	scanf("%d", &j);
	printf("\n出現的結果\n");
	for (i = 1; i <= j; i++) {
		printf("a e i o u\n");
	}
	//system("pause");
	//return 0;
}