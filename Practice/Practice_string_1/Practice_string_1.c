/*
 * Practice_string_1.c
 *
 *  Created on: 2018. 12. 12.
 *      Author: HyeSeong
 */
#include <stdio.h>

int main(void)	{
	char cArray[] = {'a', 'b', 'c'}; /*���ڹ迭 */
	char str[] = "abc";/*�� ��Ұ� ������ �迭�̸鼭 NULL����('\0')�� ����*/
	char string[] = "Hello, World!";

	printf("%d\n", sizeof(cArray)); /*3byte ���(�� ���ڴ� 1byte)*/
	printf("%d\n", sizeof(str));/*4byte ���(�� ���ڴ�1byte + '\0'(�ι���))*/

	int i = 0;
	while (string[i] != '\0') /*Null����('\0')�� ������ ������ string���� ���ڸ� �о�� */
		printf("%c", string[i++]);
	printf("\n");

}

