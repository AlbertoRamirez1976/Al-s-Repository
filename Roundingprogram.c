/* Title: Rounding program                          */
/* Author: Alberto E. Ramirez                       */
/* Date: 1/7/2021                                   */
/* Program rounds to two decimal places             */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>         /* Preprocessor directive for standard inputs and outputs */
#include <math.h>         /* Preprocessor directive for math functions */


/* Function prototypes */
double scale(double x, int n);

int main(void)
{
	double num_1;
	int num_2;

	printf("Enter a positive number  "); /* Gets user input for a positive number */
	scanf("%lf", &num_1);                  /* Assigns user input to variable num_1 */

	printf("Enter an integer > ");        /* Gets user input for a positive number */
	scanf("%d", &num_2);                  /* Assigns user input to variable num_2 */

	printf("Result of call to function scale is %f \n", scale(num_1, num_2));
	
	getchar();
	getchar();

	return (0); /* End of function main  */

}

double scale(double x, int n) /*Scale function */
{
	double scale_factor;           /* Local variable -10 to power n  */

	scale_factor = pow(10, n);

	return (x * scale_factor);
	
}


