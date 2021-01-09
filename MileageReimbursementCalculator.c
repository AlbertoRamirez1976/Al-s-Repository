/* Title: Mileage Reimbursement Calculator     */
/* Author: Alberto E. Ramirez                  */
/* Date: 1/6/2021                              */
/* Program to calculate mileage reimbursement  */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>  /* Preprocessor directive */

#define RATE_PER_MILE 0.35 /* Conversion constant */

int main(void)
{
	double milesTraveled = 0.0; /* Variable declaration */
	double startOdometer = 0.0; /* Variable declaration */
	double endOdometer = 0.0; /* Variable declaration */
	double totalMiles = 0.0; /* Variable declaration */
	double yourReimbursement = 0.0; /* Variable declaration */

	printf("Welcome to the Mileage Reimbursement Calculator program.\n"); /* Opening Statement */

	/* Inputs */
	printf("\nLet's start by entering the starting odometer reading:\n"); /* Get user input for starting odometer reading */
	scanf("%lf", &startOdometer); /* Receive user input for starting odometer reading and then assign it to the variable */

	printf("\nNext, let's enter the ending odometer reading:\n"); /* Get user input for ending odometer reading */
	scanf("%lf", &endOdometer); /* Receive user input for ending odometer reading and then assign it to the variable */

	/* Calculations */
	totalMiles = endOdometer - startOdometer; /* Computes the distance travel in miles */

	yourReimbursement = totalMiles * RATE_PER_MILE; /* Computes reimbursement amount */

	/* Outputs */
	printf("\nYou traveled %.1f miles. At $0.35 per mile,\n", totalMiles); /* Displays output of miles traveled and rate */
	printf("and your reimbursement is $%.2f.\n", yourReimbursement); /* Displays output of reimbursement */

	getchar();
	getchar();

	return (0); /* End of function main  */

}