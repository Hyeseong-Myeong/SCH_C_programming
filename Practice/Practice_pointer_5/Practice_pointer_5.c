/*
 * Practice_pointer_5.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
/*�����͸� ����Ű�� ������*/
#include <stdio.h>

int main(void)	{
	char *pc[3] = {"Hello", ",", "World!"}; /*������ ������ �迭�� �����ϰ� �� ��Ұ� ���ڿ� ����� ����Ű���� �ʱ�ȭ*/

	printf(pc[0]);
	printf(pc[1]);
	printf(pc[2]);
	printf("\n");

	char **pp; /*�����͸� ����Ű�� ������*/
	pp = &pc[0];/*pp�� pc�� 0��° ����� �ּҸ� �Ҵ�*/

	printf(*pp);
	printf(*(pp+1));
	printf(*(pp+2));
	printf("\n");

	printf("%c", **pp);/* *pp�� ����Ű�� �ִ� �ּ��� ���� �ּ� ��*/
	return 0;
}

