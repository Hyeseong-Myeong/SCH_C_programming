/*
 * Practice_Array_1.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
#include <stdio.h>

int main(void)	{
	int ndigit1[5]; /*�迭�� ũ��� 5, �̸��� ndigit, ������ Ÿ���� int*/

	int ndigit2[5] = {1, 2, 3, 4, 5}; /*�迭 ����� ���ÿ� �ʱ�ȭ*/
	printf("%d, %d, %d, %d, %d\n", ndigit2[0], ndigit2[1], ndigit2[2], ndigit2[3], ndigit2[4]);

	int ndigit3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; /*�迭 ũ�⸦ �����ϰ� �����ϸ�, �����Ϸ��� �ʱ�ȭ���� ���� ī��Ʈ�Ͽ� ũ�⸦ ���.*/
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", ndigit3[i]);

	int num1 = ndigit2[0]; /*1���� Array�� �����ϴ� ���*/
	printf("\nnum1 is %d", num1);

}

