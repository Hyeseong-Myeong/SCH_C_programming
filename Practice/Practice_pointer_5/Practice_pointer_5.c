/*
 * Practice_pointer_5.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
/*포인터를 가리키는 포인터*/
#include <stdio.h>

int main(void)	{
	char *pc[3] = {"Hello", ",", "World!"}; /*문자형 포인터 배열을 선언하고 각 요소가 문자열 상수를 가리키도록 초기화*/

	printf(pc[0]);
	printf(pc[1]);
	printf(pc[2]);
	printf("\n");

	char **pp; /*포인터를 가리키는 포인터*/
	pp = &pc[0];/*pp에 pc의 0번째 요소의 주소를 할당*/

	printf(*pp);
	printf(*(pp+1));
	printf(*(pp+2));
	printf("\n");

	printf("%c", **pp);/* *pp가 가리키고 있는 주소의 값의 주소 값*/
	return 0;
}

