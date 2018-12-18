/*
 * Practice_pointer_4.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
/*포인터 연산*/
#include <stdio.h>

int main(void)	{
	int iArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p, i, x;

	p = &iArr[0];/*배영 iArr의 0번째 요소의 주소를 p에 할당*/
	for(i = 0; i < 10; i++)	{
		x = *p;
		printf("%d, ", x); p++;
	}
	printf("\n");

	p = &iArr[0];
	for (i = 0; i < 10; i++)
		printf("%d, ", *(p++));/*  (*p)++는 포인터 p가 가리키는 값을 증가, *(p++)은 p라는 주소 값을 증가 */
	printf("\n");

	return 0;
}

