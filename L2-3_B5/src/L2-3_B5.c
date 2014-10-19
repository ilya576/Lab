/*
 ============================================================================
 Name        : L2-3_B5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, a, n, sum = 0;

	for(i = 0; i < 10; i++) {
		scanf("%d", &a);
		while (a != 0) {
			n = a % 10;
			a = a / 10;
			if ((n % 2) == 0)
				sum += n;
		}
		printf ("%d ", sum);
		sum = 0;
	}

	return EXIT_SUCCESS;
}
