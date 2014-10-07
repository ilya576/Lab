/*
 ============================================================================
 Name        : 1-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int length = 8;

	printf("%d ", length /= (-2));
	printf("%d ", length += 1004);
	printf("%d ", length %= 5);
	printf("%d ", length *= 89);
	printf("%d ", length -= 4);

	return EXIT_SUCCESS;
}
