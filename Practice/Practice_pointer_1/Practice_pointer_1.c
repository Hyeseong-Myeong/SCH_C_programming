/*
 * Practice_pointer_1.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */

/*�����͸� �����Ϳ� �Ҵ�*/
#include <stdio.h>

int main(void)	{
	int i1 = 0, i2 = 0;
	int *pi1, *pi2;
	pi1 = &i1;
	pi2 = &i2;

	*pi1 = 1; /*������ pi1�� ����Ű�� ���� i1�� 1�� �Ҵ�*/
	*pi2 = *pi1;/*������ pi2�� ����Ű�� ���� i2�� ������ pi1�� ����Ű�� ���� i1�� �Ҵ�*/
	*pi1 += 1;/*������ pi1�� ����Ű�� ���� i1�� 1����*/
	printf("i1, i2, *pi1, *pi2 is %d %d %d %d.\n", i1, i2, *pi1, *pi2);

	pi1 = pi2;/*������ pi2�� ����Ű�� �ּ� i2�� �ּҸ� pi1�� �Ҵ�*/
	*pi1 += 1;/*i2�� ���� 1 ����*/
	printf("i1, i2, *pi1, *pi2 is %d %d %d %d.\n", i1, i2, *pi1, *pi2);

	return 0;
}

