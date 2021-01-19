/* Title: Pattern and Loops Program    */
/* Author: Alberto E. Ramirez          */
/* Date: 1/15/2021                     */
/* Program that draws patterns         */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive */

int main(void)
{

	/* Variable Declarations */
	int i;/* Variable i is declared */
	int j;/* Variable j is declared */

	/* Opening Statement */
	printf("Welcome to the Patterns and Loops Program\n");
	printf("Enjoy the artwork\n\n");

	/* Conditional Statement for the first right triangle that loop to create patterns */
	for (i = 1;i <= 9;i++) /* This portion of the loop controls the number of rowws displayed. In the first right triangle nine rows are displayed */
	{
		for (j = 1;j <= i;j++)/* This portion of the loop controls pattern design with the use of an asterisks */
			printf("*");
		printf("\n");
	}
	/* Intential spacing created by two new line functions between right triangles */
	printf("\n\n");

	/* Conditional Statement for the second right triangle that loop to create patterns */
	for (i = 8;i >= 1;i--) /* This portion of the loop displays eight rowws that are orient the right triangle upside down*/
	{
		for (j = 1;j <= (8 - i);j++)/* This portion of the loop controls the right justification of the second loop */
			printf(" ");
		for (j = 1;j <= i;j++)/* This portion of the loop controls pattern design with the use of an asterisks */
			printf("*");
		printf("\n");
	}

	getchar();
	getchar();

	return 0;
}



