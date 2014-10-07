/*
 ============================================================================
 Name        : 1-8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char a;

	scanf("%c", &a);

	switch(a) {

	case 's': printf("стекло"); break;
	case 'd': printf("дерево"); break;
	case 'z': printf("железо"); break;
	case 'b': printf("бетон"); break;
	case 'p': printf("пластик"); break;
	case 'g': printf("глина"); break;
	default : printf("не знаю, что ты хочешь");

	};

	return EXIT_SUCCESS;
}
