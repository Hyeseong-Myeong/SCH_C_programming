/*
 * Practice_structure_2.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
/*구조체와 함수*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point add(struct point, struct point);/*구조체 템플릿 point형 변수 둘을 인수로 받아서 point형 값을 반환하는 함수 선언*/

int main(void)	{
	struct point a = {10, 20};
	struct point b = {30, 40};
	struct point c = add(a, b);

	printf("(%d, %d) + (%d, %d) = (%d, %d)", a.x, a.y, b.x, b.y, c.x, c.y);
}

struct point add(struct point pt1, struct point pt2)	{
	pt1.x = pt1.x + pt2.x;
	pt1.y = pt1.y + pt2.y;
	return pt1;
}
