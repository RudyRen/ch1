#include <stdio.h>
#include <stdlib.h>

void �}�C�m��2()
{
	/* ��X�}�C�C�@��������} */
	int num[10], i;
	for (i = 0; i < 10; i++)
	{
		printf("&num[%d]=%p, num+%d=%p\n", i, &num[i], i, num + i);
	}
	//system("pause");
	//return 0;
}