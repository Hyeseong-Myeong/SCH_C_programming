/*
 * HW0403.c
 *
 *  Created on: 2018. 10. 19.
 *      Author: HyeSeong
 */
#include <stdio.h>

void printo(void);
void printx(void);
void printn(void);

int main(void)	{
	int row, column, x, y, i, j;

	while (1)	{
		printf("Input row, column, x, y:");
		fflush(stdout);

		scanf("%d %d %d %d", &row, &column, &x, &y);

		   for(i=1; i<=row; i++)
		   {
		      for(j=1; j<=column; j++)
		      {
		         if((i==x) || (j==y))
		            printx();
		         else
		            printo();
		      }
		      printn();
		   }
		   }
	return 0;
}


void printo(void){
	printf("O");
}

void printx(void){
	printf("X");
}

void printn(void){
	printf("\n");
}
