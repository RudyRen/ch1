#include<stdio.h>
#include<stdlib.h>
void ex9() {
	int i = 0;
	char str[50];

	printf("�п�J�@�Ӧr��: ");
	scanf("%s",&str);

	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	printf("�j�p�g�ഫ�᪺�s�r��= %s", str);

	//system("pause");
	//return 0;
}

