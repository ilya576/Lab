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

	case 's': printf("������"); break;
	case 'd': printf("������"); break;
	case 'z': printf("������"); break;
	case 'b': printf("�����"); break;
	case 'p': printf("�������"); break;
	case 'g': printf("�����"); break;
	default : printf("�� ����, ��� �� ������");

	};

	return EXIT_SUCCESS;
}
