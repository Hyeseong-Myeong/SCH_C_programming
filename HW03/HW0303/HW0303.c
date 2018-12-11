/*
 * HW0303.c
 *
 *  Created on: 2018. 10. 14.
 *      Author: HyeSeong
 */
#include <stdio.h>
#include <math.h>

void getmax(void);
void getmin(void);
float a, b, c, max, min;

int main(void){
	a = 3.5, b = -4.5, c = 2.3e-1, max = min = 0;
	getmax(); getmin();
	printf("Max number is %f.\n", max);
	printf("Min number is %f.\n", min);

	return 0;
}

void getmax(void){
	max = a;

	if(max < b)
		max = b;
	if(max < c)
		max = c;
}

void getmin(void){
	min = a;

	if(min > b)
		min = b;
	if(min > c)
		min = c;

}
