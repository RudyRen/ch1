#include<stdio.h>
#include<stdlib.h>

void �@�~�Ĥ�_�@�D() {
	int i, j, n = 7;
	for (i = 1; i <= n; i++) {
		for (j = n; j>i; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	//system("pause") ;
	//return 0 ;
}