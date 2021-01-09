/* Title: Fahrenheit to Kelvin Calculator         */
/* Author: Alberto E. Ramirez                  */
/* Date: 1/6/2021                              */
/* Program to convert Fahrenheit to Kelvin     */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>  /* Preprocessor directive */

int main(void)
{

	int Fahrenheit = 0; /* Variable declaration */
	double Kelvin = 0.0; /* Variable declaration */


	printf("Welcome to the Fahrenheit to Kelvin Calculator Program.\n"); /* Opening Statement */

	/* Inputs */
	printf("\nLet's start by entering the temperature in Fahrenheit:\n"); /* Get user input for temperature in Fahrenheit */
	scanf("%d", &Fahrenheit); /* Receive user input and then assign it to the variables */

	/* Calculations */
	Kelvin = (273.15 + (Fahrenheit - 32) * (5.0 / 9.0)); /* Converts to Kelvin*/
	
	/* Outputs */
	printf("\n%d Fahrenheit = %.2f Kelvin\n", Fahrenheit, Kelvin); /* Displays output of temperature in Fahrenheit converted to Kelvin scale*/
	
	
	getchar();
	getchar();

	return (0); /* End of function main  */

}