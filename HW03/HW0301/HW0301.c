/*
 * HW0301.c
 *
 *  Created on: 2018. 10. 14.
 *      Author: HyeSeong
 */
#include <stdio.h>

int main(void){
	int base = 5, exp = 3;

	printf("The %dth power of %d is %d.\n", exp, base, power(base, exp));

	return 0;
}

int power(base, exp){
	int i = 1, j = 1;

	for(i = 1; i <= exp; i++){
		j *= base;
	}
	return j;
}

