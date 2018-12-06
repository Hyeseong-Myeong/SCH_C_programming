/*
 * HW0701.c
 *
 *  Created on: 2018. 11. 15.
 *      Author: HyeSeong
 */
#include <stdio.h>

int main(void)	{
	char arr[] = "Hello, World!";
	char str[100];
	int len, i;
	char *p;

	len = sizeof(arr);
	p = arr +len - 2;

	for(i = 0; i < len; i++)
		str[i] = * (p--);
	str[i - 1] = '\0';

	printf("%s\n", arr);
	printf("%s\n", str);
	return 0;
}

