#include<stdio.h>
#include<stdlib.h>

void 作業第五題() {

	printf("珍奶:45元/烏龍:55元\n\n");
	int nb1, nb2, total;
	printf("客人要幾瓶珍奶: ");
	scanf("%d", &nb1);
	printf("客人要幾瓶烏龍: ");
	scanf("%d", &nb2);

	if (nb1 + nb2 >= 12) {
		total = (45 * nb1 + 55 * nb2)*0.95;
	}
	if (nb1 + nb2<12) {
		total = 45 * nb1 + 55 * nb2;
	}
	if (45 * nb1 + 55 * nb2 >= 700) {
		total = (45 * nb1 + 55 * nb2)*0.95;
	}
	if (45 * nb1 + 55 * nb2<700) {
		total = 45 * nb1 + 55 * nb2;
	}
	if (nb1 >= 10) {
		total = (45 * nb1 + 55 * nb2)*0.95;
	}
	printf("總額:%d\n", total);
	//system("pause");
	//retern 0;
}