/* Title: Sorting Program       */
/* Author: Alberto E. Ramirez   */
/* Date: 1/13/2021              */
/* Program that sorts           */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive */

void order(int* smallest, int* largest);

int main(void)
{

	int num1 = 0;/* Variable declaration for the first integer */
	int num2 = 0;/* Variable declaration for the second integer */
	int num3 = 0;/* Variable declaration for the third integer */

	int temporary, smallest, largest;
	
	printf("Welcome to the Sorting Program.\n");/* Opening Statement */

	/* Inputs */
	printf("\nLet's start by entering three numbers separated by one space:       \n");/* Get user input for the three integers */
	scanf("%d%d%d", &num1, &num2, &num3);/* Receive user input and then assign them to the variables */
	
	/* Ordering Function call */
	order(&num1, &num2);
	order(&num1, &num3);
	order(&num2, &num3);

	/* Output */
	printf("\nThe numbers in ascending order are: %d %d %d\n", num1, num2, num3);/* Displays the three integers in order */
	
	getchar();
	getchar();

	return (0);/* End of function main  */

}

void order(int *smallest, int *largest)
{
	int temporary; /* Temporay variable to hold value during the swap */
	if (*smallest > *largest)
	{
		temporary = *smallest;
		*smallest = *largest;
		*largest = temporary;
	}
}