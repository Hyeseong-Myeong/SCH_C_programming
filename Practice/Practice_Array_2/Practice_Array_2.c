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
	/*iArr Array 초기화*/

	printf("INput five numpers:");
	fflush(stdout); /*버퍼 비우기*/

	scanf("%d%d%d%d%d", &iArr[0], &iArr[1], &iArr[2], &iArr[3], &iArr[4]); /*입력을 순서대로 iArr에 저장*/

	for(i = 0; i < n; i++)
		printf("%d\n", iArr[i]);

	return 0;
}
