/*
 ============================================================================
 Name        : L2-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, m1, m2, c, i = 0;

	while (i < 11) {

		scanf("%d", &a);

		while (a != 0) {
			a /= 10;
			c++;
		}

		if (c > 4) {
			m2 = a % 100;
			m2 /= 10;
			while (a != 0) {
				m1 = a % 10;
				a /= 10;
				if ((a >= 1) && (a <= 9)) {
					printf("%d ", m1 * m2);
				}
			}
		} else {
			printf("0 ");
		}
		i++;

	}

	return EXIT_SUCCESS;
}
