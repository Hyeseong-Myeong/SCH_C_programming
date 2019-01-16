/*
 * Practice_string_2.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
#include <stdio.h>

int main(void)	{
	char str[100];
	printf("Input \"Hello\": ");
	fflush(stdout);

	scanf("%s", str);
	printf("%s\n", str);


	char cArr[100];
	printf("Input \"Hello, World!\": ");
	fflush(stdout);

	scanf("%s", cArr);
	printf("%s\n", cArr);

	char cArray[100];
	printf("Input \"Hello, World!\": ");
	fflush(stdout);

	gets(cArray);
	printf("%s", cArray);

	return 0;
}

