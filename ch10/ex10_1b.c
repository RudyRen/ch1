#include<stdio.h>
#include<stdlib.h>
void ex10_1b()
{
	char ch;
	int i;
	for (i = 1; i <= 3; i++)
	{
		printf("#%d 的輸入資料為: ", i);
		scanf("%c", &ch);
		printf("#%d 的輸出資料為: %c\n\n", i, ch);
		/*法一:
			while (getchar() != '\n')
				continue;
		}*/

	法二:
		while (getchar() != '\n')
			;
	}
	//system("pause");
	//return 0;
}