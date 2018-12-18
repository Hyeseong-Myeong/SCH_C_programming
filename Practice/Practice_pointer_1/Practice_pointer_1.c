/*
 * Practice_pointer_1.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */

/*포인터를 포인터에 할당*/
#include <stdio.h>

int main(void)	{
	int i1 = 0, i2 = 0;
	int *pi1, *pi2;
	pi1 = &i1;
	pi2 = &i2;

	*pi1 = 1; /*포인터 pi1가 가르키는 변수 i1에 1을 할당*/
	*pi2 = *pi1;/*포인터 pi2가 가르키는 변수 i2에 포인터 pi1이 가르키는 변수 i1을 할당*/
	*pi1 += 1;/*포인터 pi1가 가르키는 변수 i1을 1증가*/
	printf("i1, i2, *pi1, *pi2 is %d %d %d %d.\n", i1, i2, *pi1, *pi2);

	pi1 = pi2;/*포인터 pi2가 가르키는 주소 i2의 주소를 pi1에 할당*/
	*pi1 += 1;/*i2의 값을 1 증가*/
	printf("i1, i2, *pi1, *pi2 is %d %d %d %d.\n", i1, i2, *pi1, *pi2);

	return 0;
}

