/*
 * Practice_pointer_4.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
/*������ ����*/
#include <stdio.h>

int main(void)	{
	int iArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p, i, x;

	p = &iArr[0];/*�迵 iArr�� 0��° ����� �ּҸ� p�� �Ҵ�*/
	for(i = 0; i < 10; i++)	{
		x = *p;
		printf("%d, ", x); p++;
	}
	printf("\n");

	p = &iArr[0];
	for (i = 0; i < 10; i++)
		printf("%d, ", *(p++));/*  (*p)++�� ������ p�� ����Ű�� ���� ����, *(p++)�� p��� �ּ� ���� ���� */
	printf("\n");

	return 0;
}

