#include<stdio.h>
#include<stdlib.h>
void ex9_1a()
{
	/* �ŧi�ǥͦ��Z�����c���A */
	struct student
	{
		char num[20];/* �ǥͩm�W */
		int score;/* �ǥͦ��Z*/
	}rect1;/* �w�q���c�ܼ�rec1 */
	struct student rect2;/* �w�q���c�ܼ�rec2 */
	/* �Hsizeof( )�p�⵲�c�ܼ�rec1�Prec2�Ҧ��O����Ŷ� */
	printf("rect1 ���c�� %d bytes\n", sizeof(rect1));
	printf("rect2 ���c�� %d bytes\n", sizeof(rect2));

	//system("pause");
	//return 0;
}

