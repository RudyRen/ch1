#include<stdio.h>
#include<stdlib.h>

void 作業第四題() {

	printf("珍奶:45元/烏龍:55元\n\n");
	int nb1, nb2, total;
	printf("客人要幾瓶珍奶: ");
	scanf("%d", &nb1);
	printf("客人要幾瓶烏龍: ");
	scanf("%d", &nb2);

	if (nb1 + nb2 >= 15) {
		if (45 * nb1 + 55 * nb2 <= 800) {
			total = (45 * nb1 + 55 * nb2);
		}
		if (45 * nb1 + 55 * nb2 >= 800) {
			total = (45 * nb1 + 55 * nb2)*0.9;
		}
	}
	if (nb1 + nb2 <= 15) {
		total = (45 * nb1 + 55 * nb2);
	}
	printf("總額:%d\n", total);
	//system("pause");
	//return 0;
}