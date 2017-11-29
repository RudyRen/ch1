#include<stdio.h>
#include<stdlib.h>

void 作業第六_四題(void) {
	int i, j, n = 7;
	for (i = n; i >= 1; i--) {
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
