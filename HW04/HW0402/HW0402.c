/*
 * HW0402.c
 *
 *  Created on: 2018. 10. 19.
 *      Author: HyeSeong
 */
#include <stdio.h>

int main(void)	{
	int cr;
	while (1)	{
		printf("Input color value: ");
		fflush(stdout);

		scanf("%d", &cr);

		if (cr>=0&&cr<25)
			printf("Black!\n");
		else if (cr>=25&&cr<50)
			printf("Dark gary!\n");
		else if (cr>=50&&cr<75)
			printf("Light gray!\n");
		else if (cr>=75&&cr<100)
			printf("White!\n");
		else
			printf("Wrong value!\n");

	}
	return 0;
}

