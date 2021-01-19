/* Title: Cylinder Color Program                */
/* Author: Alberto E. Ramirez                   */
/* Date: 1/13/2021                              */
/* Program that associates contents with colors */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive */

int main(void)
{

	char color;/* input - character indicating color of cylinder */

	printf("Welcome to the Color Association Program.\n");/* Opening Statement */

	/* Inputs */
	printf("\nLet's start by entering the color of the cylinder:  \n");/* Get user input for the cylinder color */
	scanf(" %c", &color);/* Receive user input and then assign it to the variable color*/

	/* Switch statement to associate character input to color type */
	printf("\nYou selected %c,", color);/* Displays cylinder color */
	switch (color)
	{
	case 'O':
	case 'o':
		printf(" which is Orange and the type of compressed-gas associated with it is Ammonia.\n");
		break;
	case 'B':
	case 'b':
		printf(" which is Brown and the type of compressed-gas associated with it is Carbon monoxide.\n");
		break;
	case 'Y':
	case 'y':
		printf(" which is Yellow and the type of compressed-gas associated with it is Hydrogen.\n");
		break;
	case 'G':
	case 'g':
		printf(" which is Green and the type of compressed-gas associated with it is Oxygen.\n");
		break;
	}

	getchar();
	getchar();

	return (0);/* End of function main  */

}

