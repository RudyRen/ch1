#include<stdio.h>
#include<stdlib.h>

void 作業第一題()
{
	int number;
	printf("Please Enter Number: ");
	scanf("%d", &number);
	if (!(number % 2))
		printf("判斷它是偶數%d\n", number);
	else
		printf("判斷它是奇數%d\n", number);
	//system("pause");
	//return 0;
}