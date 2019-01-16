/*
 * Practice_string_1.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
#include <stdio.h>

int main(void)	{
	char cArray[] = {'a', 'b', 'c'}; /*문자배열 */
	char str[] = "abc";/*각 요소가 문자인 배열이면서 NULL문자('\0')로 끝남*/
	char string[] = "Hello, World!";

	printf("%d\n", sizeof(cArray)); /*3byte 출력(각 문자당 1byte)*/
	printf("%d\n", sizeof(str));/*4byte 출력(각 문자당1byte + '\0'(널문자))*/

	int i = 0;
	while (string[i] != '\0') /*Null문자('\0')가 나오기 전까지 string에서 문자를 읽어옴 */
		printf("%c", string[i++]);
	printf("\n");

}

