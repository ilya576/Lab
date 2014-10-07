/*
 ============================================================================
 Name        : D2-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, n, sum = 0;

	scanf("%d", &n);

	for (i = 1; i < (n + 1); i++)
		sum += i;

	printf ("sum = %d", sum);

	return EXIT_SUCCESS;
}
