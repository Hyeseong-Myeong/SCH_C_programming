/*
 * HW0502.c
 *
 *  Created on: 2018. 11. 6.
 *      Author: HyeSeong
 */
#include <stdio.h>

int main(void)	{
	char str[100] = "Yesterday \"All\" My \'Troubles\' Seemed So Far Away.";
	int nArr[3] = {0, 0, 0}, i=0;
	/*nArr[0] : # of uppercases, nArr[1] : # of lowercases, nArr[2] : others */

	while (str[i] != '\0')	{
		if (str[i] >= 65 && str[i] <= 90)
			nArr[0] += 1;

		else if (str[i]>= 97 && str[i]<= 122)
			nArr[1] += 1;

		else
			nArr[2] += 1;

		i++;
	}

	for (i = 0; i < 3; i++)
		printf("%d, ", nArr[i]);

	return 0;
}

