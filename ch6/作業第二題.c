#include <stdio.h>
#include <stdlib.h>

enum STATE { RIGHT = 1, BIG_FOUR, BIG_FIVE, SMALL_FOUR, SMALL_FIVE };

void 作業第二題()
{
	int answer = time(NULL);
	int guess;
	int diff;
	int state = 0;

	answer %= 25;
	if (answer == 0) {
		answer = 25;
	}

	printf("請猜一個數字 1 到 25： ");
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
		printf("猜對囉！\n");
	}
	else if (state == BIG_FIVE) {
		printf("猜的數字比答案大....還很遠，再加把勁！\n");
	}
	else if (state == BIG_FOUR) {
		printf("猜的數字比答案大....不錯喔！很接近了\n");
	}
	else if (state == SMALL_FIVE) {
		printf("猜的數字比答案小....還很遠，再加把勁！\n");
	}
	else if (state == SMALL_FOUR) {
		printf("猜的數字比答案小....不錯喔！很接近了\n");
	}
	else {
		printf("猜錯囉！\n");
	}

	return 0;
}