#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

char comment(char);

void 作業()
{
	char ch;
	printf("---英文大小寫轉換---\n");
	printf("輸入英文: ");
	ch = getchar();
	ch = comment(ch);
	printf("\n此字母轉換為%c\n", ch);

	//syetem("pause");
	//return 0;
}

char comment(char ch)
{
	if (ch >= 97 && ch <= 122)
		return (ch > 91) ? ch - 32 : ch;
	else if (ch >= 65 && ch <= 90)
		return (ch < 91) ? ch + 32 : ch;
}