/*
 * Practice_pointer_2.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
/*�����Ϳ� ����������, ���� ���� ������ ����*/
#include <stdio.h>

int main(void)	{
	int x = 0;
	int *pi1, *pi2;

	pi1 = &x; /*������ pi1�� ���� x�� �ּҸ� �Ҵ�*/
	pi2 = pi1; /*������ pi2�� ������ pi1�� ���� �Ҵ� */

	printf("x, *pi1, *pi2 is %d %d %d.\n", x, *pi1, *pi2);

	++*pi1;
	--*pi2;
	(*pi1)++;
	(*pi2)--;

	printf("x, *pi1, pi2 is %d %d %d.\n", x, *pi1, *pi2);

	return 0;
}
