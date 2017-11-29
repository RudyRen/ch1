#include<stdio.h>
#include<stdlib.h>
float Abs(void);

void 練習4() {
	float num;
	num = Abs();
	printf("其數值之絕對值為 %f\n", num);
	system("pause");
	return 0;
}
float Abs(void)
{
	float num;
	printf("請輸入一數值: ");
	scanf("%f", &num);
	return(num > 0) ? num : -num;
}
