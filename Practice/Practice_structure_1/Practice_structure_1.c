/*
 * Practice_structure_1.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
/*구조체 초기화와 접근*/
#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

int main(void)	{
	struct point a = {0, 1};
	printf("a.x = %d, a.y = %d\n", a.x, a.y);

	a.x = 10;
	a.y = 20;
	printf("a.x = %d, a.y = %d\n", a.x, a.y);

	double dist = sqrt((double)a.x * a.x + (double)a.y * a.y);
	printf("Distance is %.2f", dist);

	return 0;
}
