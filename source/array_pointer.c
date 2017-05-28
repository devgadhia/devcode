/*
 * array_pointer.c
 *
 *  Created on: 28-May-2017
 *      Author: dev
 */
#include<stdio.h>
#include<stdlib.h>

void array_pointer_main(void)
{
	int array1[] = {2,3,4,5,6,7,8};
	int *p1,*p2,*p3;;
	printf("Current file name: %s  and function name: %s() \n",__FILE__,__FUNCTION__);
	p1 = array1;
	p2 = &array1[0];
	p3 = array1 + 3;
	printf("\n\n####...Playing with 1-D array and its pointers.....###\n\n");
	printf("Address \t\t\t      values\n");
	printf("--------\t\t\t      -------\n");
	printf("%p \t\t\t\t %d\n",&array1[0],array1[0]);
	printf("%p \t\t\t\t %d\n",&array1[1],array1[1]);
	printf("%p \t\t\t\t %d\n",&array1[2],array1[2]);
	printf("%p \t\t\t\t %d\n",&array1[3],array1[3]);
	printf("%p \t\t\t\t %d\n",&array1[4],array1[4]);
	printf("%p \t\t\t\t %d\n",&array1[5],array1[5]);
	printf("%p \t\t\t\t %d\n",&array1[6],array1[6]);

	printf("p1 = %p \t p2 = %p \t p3 = %p\n",p1,p2,p3);
	printf("Incrementing pointers...\n");
	printf("p1 = %p \t p2 = %p \t p3 = %p\n",p1+3,p2+3,p3);
	printf("Incrementing pointers...\n");
	p1++;p2++;p3++;
	printf("p1 = %p \t p2 = %p \t p3 = %p\n",p1,p2,p3);

	printf("\n\n####...Playing with 2-D array and its pointers.....###\n\n");
	int array2[4][3];
	for(int loop = 0;loop < 4; loop++){
		for(int loop1 = 0; loop1 < 3; loop1++){
			scanf("%d",&array2[loop][loop1]);
		}
	}
	printf("Address \t\t\t      values \t\t loop\t loop1\n");
	printf("--------\t\t\t      -------\t\t  ---\t  ---  \n");

	for(int loop = 0;loop < 4; loop++){
		for(int loop1 = 0; loop1 < 3; loop1++){
			printf("%p \t\t\t\t %d \t\t %d \t %d\n",&array2[loop][loop1],array2[loop][loop1],loop,loop1);
		}
	}
	printf("\n\nhi\n\n");
	int *p4;
	p4 = array2[0];

	printf("pointer p4 = %d\n",*p4);

	p4++;
	printf("pointer p4 = %d\n",*p4);

}
