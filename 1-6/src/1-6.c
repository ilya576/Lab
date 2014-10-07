/*
 ============================================================================
 Name        : 1-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int e, d, f;

	scanf("%d %d %d", &e, &d, &f);

	if (f < 0) {
		f = e + d;
	} else
		if ((e + d + f) < 10) {
			e = d + f;
		}
		else
			e--;

	printf ("e = %d, d = %d, f = %d", e, d, f);

	return EXIT_SUCCESS;
}
