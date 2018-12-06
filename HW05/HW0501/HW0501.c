/*
 * HW0501.c
 *
 *  Created on: 2018. 11. 6.
 *      Author: HyeSeong
 */
#include <stdio.h>
#include <math.h>
#define N 10

int main(void)	{
	int i; double avg, std;
	double point[N] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

	for (i = 0; i <N; i++)	{
		avg += point[i];
	}
	 avg /= N;

	 double sum = 0;
	 for (i=0; i<N; i++)	{
		 sum += (point[i] - avg) * (point[i] - avg);
	 }
	 std = sqrt(sum / N);

	printf("Avg is %.2f\n", avg);
	printf("Std is %.2f.\n", std);

	return 0;
}
