/*
 ============================================================================
 Name        : 1-10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, b, c = 0, dec = 1;

	scanf("%d %d", &a, &b);

	while (a != 0) {
		c += ((a % 10) % (b % 10)) * dec;
		a /= 10;
		b /= 10;
		dec *= 10;
	}

	printf("%d", c);

	return EXIT_SUCCESS;
}
