#include<stdio.h>
#include<stdlib.h>

void �@�~�Ĥ��D() {

	printf("�å�:45��/�Q�s:55��\n\n");
	int nb1, nb2, total;
	printf("�ȤH�n�X�~�å�: ");
	scanf("%d", &nb1);
	printf("�ȤH�n�X�~�Q�s: ");
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
	printf("�`�B:%d\n", total);
	//system("pause");
	//retern 0;
}