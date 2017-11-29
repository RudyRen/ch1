//1.除錯
//#include <stdio.h>
//#include <stdlib.h>
//void 練習題1()
//{
	/* score是2列3行的陣列 */
	//int score[2][] = { { 10, 20, 30 }, { 40, 50, 60 } };
	//int i, j;
	//for (i = 0; i < = 2; i++)
	//for (j = 0; j <= 3; j++)
		//printf("score[%d][%d] = %d\n", i, j, score[i][j]);
	//system("pause");
	//return 0;
//}




//正解:
#include <stdio.h>
#include <stdlib.h>
void 練習題1()
{
	/* score是2列3行的陣列 */
	int score[2][3] = { { 10, 20, 30 }, { 40, 50, 60 } };
	int i, j;
	for (i = 0; i <  2; i++)
	for (j = 0; j < 3; j++)
	   printf("score[%d][%d] = %d\n", i, j, score[i][j]);
	//system("pause");
	//return 0;
}