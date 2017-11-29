
#include < stdio.h >
#include < stdlib.h >
int gcd(int x, int y);
void 作業第一題()
{
	int xin = 15, yin = 20;
	int x, y;
	if (xin < yin) {
		x = yin;
		y = xin;
	}
	else {
		x = xin;
		y = yin;
	}
	printf("xin=15,yin=20,求最大公因數:");
	printf("GCD=%d \n", gcd(x, y));
	//system("pause");
	//return 0;
}

int gcd(int x, int y) {
	if (y == 0)  
		return x;
	else
		return gcd(y, x % y);  
}