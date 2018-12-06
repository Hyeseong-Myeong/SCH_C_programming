/*
 * HW0401.c
 *
 *  Created on: 2018. 10. 19.
 *      Author: HyeSeong
 */
#include <stdio.h>

int main(void) {
	int x1 = 0xAAAA, x2 = 0x5555;
	int y = 2017, m = 9, d = 1;
	char s1[] = "Hello", s2[] = ",", s3[] = "World!";
	double f1 = 3.141592;

	printf("0x%X | 0x%X = 0x%x\n", x1, x2, (x1 | x2));
	printf("(0x%X ^ 0x%X) >> 2 = 0x%x\n", x1, x2, ((x1 ^ x2) >> 2));
	printf("%d\t%.2d\t%.2d\n", y, m, d);
	printf("%.4f %.4e\n", f1, f1);
	printf("%.8f %.8e\n", f1, f1);
	printf("%s%s %s\n", s1, s2, s3);
	printf("%.4s%s %s\n", s1, s2, s3);
	printf("\"%.2s\"%s \'%.2s\'\n", s1, s2, s3);
	printf("\x54\x68\x65 \x49\x6E\x74\x65\x72\x6E\x65\x74 \x6F\x66 \x54\x68\x69\x6E\x67\x73\n");
	printf("\104\145\160\164 \157\146 \111\157\124\054 \123\103\110\n");

	return 0;
}

