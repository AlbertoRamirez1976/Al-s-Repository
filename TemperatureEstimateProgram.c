/* Title: Temperature Estimate Program         */
/* Author: Alberto E. Ramirez                  */
/* Date: 1/6/2021                              */
/* Program to estimate temperature             */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>  /* Preprocessor directive */

int main(void)
{
	
	int hours = 0.0; /* Variable declaration */
	int  minutes = 0.0; /* Variable declaration */
	double time = 0.0; /* Variable declaration */
	double T = 0.0; /* Variable declaration */
	

	printf("Welcome to the Temperature Estimate Program.\n"); /* Opening Statement */

	/* Inputs */
	printf("\nLet's start by entering how long has it been since the start of the power failure in whole hours and minutes:\n"); /* Get user input for length of power failure in hours and minutes */
	scanf("%d %d", &hours, &minutes); /* Receive user input and then assign it to the variables */

	/* Calculations */
	time = hours + ((minutes * 100) / 60 * 0.01); /* Calculates the time in hours and minutes*/
	T = ((4 * time * time) / (time + 2) - 20); /* Estimates temperature given the time*/

	/* Outputs */
	printf("\nThe elapsed time is %.2f hours\n", time); /* Displays output of time */
	printf("\nThe freezer temperature is %.2f degrees\n", T); /* Displays temperature estimate given the time */

	getchar();
	getchar();

	return (0); /* End of function main  */

}