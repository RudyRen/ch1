#include<stdio.h>
#include<stdlib.h>
void 作業第五題()
{
  int sum = 0, i= 1;
  while (sum < 1000)
  {
	sum = sum + i;
	i++;
  }
  printf("1+2+3+...%d=%d\n", i, sum);
  //system("pause");
  //return 0;
}


