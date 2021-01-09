/* Title: Miles to Kilometer                   */
/* Author: Alberto E. Ramirez                  */
/* Date: 1/6/2021                              */
/* Program to convert miles to kilometers      */

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>  /* Preprocessor directive */
#define KMS_PER_MILE 1.609 /* Conversion constant */

int main(void)
{
	double miles, kms; /* Variable declaration */

	printf("Enter the distance in miles:  \n"); /* Get the distance in miles */
	scanf(" %lf", &miles);

	kms = KMS_PER_MILE * miles; /* Converts the distance to kilometers */

	printf("That equals %f kilometers. \n", kms);
		
	return (0); /* End of function main  */

}