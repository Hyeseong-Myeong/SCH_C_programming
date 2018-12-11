/*
 * HW0302.c
 *
 *  Created on: 2018. 10. 14.
 *      Author: HyeSeong
 */
#include <stdio.h>

void printm(int, int);

int main(void){
	int row = 5, column = 5;

	printm(row, column);

	return 0;
}

void printm(int r, int c){
	int i = 1, row = 1, column = 1;

	for(i = 1; i <= r * c; i++, column++){
		if((row+column) % 2 == 0)
			printf("X");

		else
			printf("O");

		if(column % c == 0){
			printf("\n");
			column = 0;
			row++;
		}
	}
}
