/*
 * Practice_pointer_3.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
/*�� ������ ���� �ٲٱ�*/

#include <stdio.h>

void swap(int *, int *);/*�ΰ��� �ּҰ��� �޴� �Լ� swap*/

int main(void)	{
	int x, y;
	x = 1, y = 2;

	swap(&x, &y);/*swap�̶�� �Լ���  x, y�� �ּҰ��� �μ��� function call*/

	printf("%d %d", x, y);

	return 0;
}

void swap(int *a, int *b)	{
	int temp;

	temp = *a;/*temp�� a�� �ּҰ��� �Ҵ�*/
	*a = *b;/*a�� b�� �ּҰ��� �Ҵ�*/
	*b = temp;/*b�� temp ���� �Ҵ�(ó�� a�� �ּ�)*/
}
