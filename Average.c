/* Title: Averaging Program        */
/* Author: Alberto E. Ramirez      */
/* Date: 1/14/2021                 */
/* Program that averages integers  */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive */

int main(void)
{

	int num = 0;/* Variable declaration for a temporary variable*/
	int sum = 0;/* Variable declaration for a counting function */
	int count = 0; /* Variable declaration for a counting integer */
	int average = 0; /* Variable declaration for average calculation */

	printf("Welcome to the averaging program.\n");/* Opening Statement */

	/* Inputs */
	printf("\nLet's start by entering several numbers, and once you are done enter the sentinel value of 9999 to end the program\n");/* Get user input for the three integers */
	scanf("%d", &num);/* Receive user input and then assign it to the variable */

	while (num != 0 && num != 9999)
	{
		count++;
		sum = sum + num;
		scanf("%d", &num);
	}

	printf("\nThe average is: %d", average = sum/count);

	getchar();
	getchar();

	return(0);/* End of function main  */
}
	
	