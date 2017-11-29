#include <stdio.h>
#include <stdlib.h>

enum STATE { RIGHT = 1, BIG_FOUR, BIG_FIVE, SMALL_FOUR, SMALL_FIVE };

void �@�~�ĤG�D()
{
	int answer = time(NULL);
	int guess;
	int diff;
	int state = 0;

	answer %= 25;
	if (answer == 0) {
		answer = 25;
	}

	printf("�вq�@�ӼƦr 1 �� 25�G ");
	scanf("%d", &guess);
	diff = guess - answer;
	diff = (int)fabs(diff);

	if (guess == answer) {
		state = RIGHT;
	}
	else {
		if (guess > answer) {
			if (diff > 5) {
				state = BIG_FIVE;
			}
			else {
				state = BIG_FOUR;
			}
		}
		else {
			if (diff > 5) {
				state = SMALL_FIVE;
			}
			else {
				state = SMALL_FOUR;
			}
		}
	}

	if (state == RIGHT) {
		printf("�q���o�I\n");
	}
	else if (state == BIG_FIVE) {
		printf("�q���Ʀr�񵪮פj....�٫ܻ��A�A�[��l�I\n");
	}
	else if (state == BIG_FOUR) {
		printf("�q���Ʀr�񵪮פj....������I�ܱ���F\n");
	}
	else if (state == SMALL_FIVE) {
		printf("�q���Ʀr�񵪮פp....�٫ܻ��A�A�[��l�I\n");
	}
	else if (state == SMALL_FOUR) {
		printf("�q���Ʀr�񵪮פp....������I�ܱ���F\n");
	}
	else {
		printf("�q���o�I\n");
	}

	return 0;
}