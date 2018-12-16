/*
 * Practice_Array_1.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
#include <stdio.h>

int main(void)	{
	int ndigit1[5]; /*배열의 크기는 5, 이름은 ndigit, 데이터 타입은 int*/

	int ndigit2[5] = {1, 2, 3, 4, 5}; /*배열 선언과 동시에 초기화*/
	printf("%d, %d, %d, %d, %d\n", ndigit2[0], ndigit2[1], ndigit2[2], ndigit2[3], ndigit2[4]);

	int ndigit3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; /*배열 크기를 생략하고 선언하면, 컴파일러가 초기화값을 직접 카운트하여 크기를 계산.*/
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", ndigit3[i]);

	int num1 = ndigit2[0]; /*1차원 Array에 접근하는 방법*/
	printf("\nnum1 is %d", num1);

}

