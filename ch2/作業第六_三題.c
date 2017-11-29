#include<stdio.h>
#include<stdlib.h>

void 作業第六_三題() {

	int i, j, n = 7;
	for (i = n; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	//system("pause");
	//return 0;
}