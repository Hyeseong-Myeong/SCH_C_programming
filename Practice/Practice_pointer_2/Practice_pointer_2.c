/*
 * Practice_pointer_2.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
/*포인터에 증감연산자, 간접 참조 연산자 적용*/
#include <stdio.h>

int main(void)	{
	int x = 0;
	int *pi1, *pi2;

	pi1 = &x; /*포인터 pi1에 변수 x의 주소를 할당*/
	pi2 = pi1; /*포인터 pi2에 포인터 pi1의 값을 할당 */

	printf("x, *pi1, *pi2 is %d %d %d.\n", x, *pi1, *pi2);

	++*pi1;
	--*pi2;
	(*pi1)++;
	(*pi2)--;

	printf("x, *pi1, pi2 is %d %d %d.\n", x, *pi1, *pi2);

	return 0;
}
