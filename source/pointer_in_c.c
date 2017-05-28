/*
 ============================================================================
 Name        : pointer_in_c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : pointers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

extern void array_pointer_main(void);
int main(void) {
	int option;
	puts("!!! Exploring Pointers !!!\n");
	printf("Select options\n");
	printf("1.Pointers with arrays \n");
	scanf("%d",&option);
	switch(option)
	{
	case 1:
		array_pointer_main();
		break;
	default:
		printf("Invalid input\n");
		break;
	}
	return EXIT_SUCCESS;
}
