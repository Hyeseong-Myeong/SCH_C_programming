/*
 * Practice_Array_2.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
#include <stdio.h>

int main(void)	{

	int i, n = 5;
	int iArr [n];

	for (i = 0; i< n; i++)
		iArr[i] = 0;
	/*iArr Array �ʱ�ȭ*/

	printf("INput five numpers:");
	fflush(stdout); /*���� ����*/

	scanf("%d%d%d%d%d", &iArr[0], &iArr[1], &iArr[2], &iArr[3], &iArr[4]); /*�Է��� ������� iArr�� ����*/

	for(i = 0; i < n; i++)
		printf("%d\n", iArr[i]);

	return 0;
}
