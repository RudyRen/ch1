#include<stdio.h>
#include<stdlib.h>
void ex10_1b()
{
	char ch;
	int i;
	for (i = 1; i <= 3; i++)
	{
		printf("#%d ����J��Ƭ�: ", i);
		scanf("%c", &ch);
		printf("#%d ����X��Ƭ�: %c\n\n", i, ch);
		/*�k�@:
			while (getchar() != '\n')
				continue;
		}*/

	�k�G:
		while (getchar() != '\n')
			;
	}
	//system("pause");
	//return 0;
}