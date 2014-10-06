/*
 ============================================================================
 Name        : D2-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int k, i;

	scanf("%d", &k);

	for (i = 1; i < (k + 1); i++)
		printf("%lf ", i/(double)k);

	return EXIT_SUCCESS;
}
