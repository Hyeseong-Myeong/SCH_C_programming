/*
 * Practice_pointer_3.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
/*두 변수의 값을 바꾸기*/

#include <stdio.h>

void swap(int *, int *);/*두개의 주소값을 받는 함수 swap*/

int main(void)	{
	int x, y;
	x = 1, y = 2;

	swap(&x, &y);/*swap이라는 함수에  x, y의 주소값을 인수로 function call*/

	printf("%d %d", x, y);

	return 0;
}

void swap(int *a, int *b)	{
	int temp;

	temp = *a;/*temp에 a의 주소값을 할당*/
	*a = *b;/*a에 b의 주소값을 할당*/
	*b = temp;/*b에 temp 값을 할당(처음 a의 주소)*/
}
