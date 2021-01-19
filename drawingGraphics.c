/* Title: Drawing Graphics Program    */
/* Author: Alberto E. Ramirez         */
/* Date: 1/15/2021                    */
/* Program that draws graphics        */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive */

int main(void)
{

	/* Variable Declaration */
	int num_1 = 0;/*Variable declaration for the first number variable */
	int num_2 = 0;/*Variable declaration for the second number variable */
	int num_3 = 0;/*Variable declaration for the third number variable */
	int num_4 = 0;/*Variable declaration for the fourth number variable */
	int num_5 = 0;/*Variable declaration for the fifth number variable */
	int counter;/*Variable declaration for the counter loop variable */

	/* Opening Statement */
	printf("Welcome to the Drawing Graphics Program\n ");

	/* Conditional Statements with Inputs*/
	do 
	{
		printf("\nEnter the first number that falls in between 1 and 30: " );/* User input for the first number variable */
		scanf("%d", &num_1);/* Assignment of the first number variable to user input */
		if (num_1 < 1 || num_1 > 30)/* Conditional Statement tests the user input for validity, if it is not acceptable it displays an error message*/
		{
			printf("\nSorry try again, the number is not within the acceptable range.\n");
			
		}
	} 
	while (num_1 < 1 || num_1 > 30);/* Conditional Statement verifies the numbers entered fall within range */
	
	printf("%d falls within the acceptable range.\n", num_1);
	

	do
	{
		printf("\nEnter the second number that falls in between 1 and 30: ");/* User input for the second number variable */
		scanf("%d", &num_2);/* Assignment of the second number variable to user input */
		if (num_2 < 1 || num_2 > 30)/* Conditional Statement tests the user input for validity, if it is not acceptable it displays an error message*/
		{
			printf("\nSorry try again, the number is not within the acceptable range.\n");

		}
	} 
	while (num_2 < 1 || num_2 > 30);/* Conditional Statement verifies the numbers entered fall within range */
	printf("%d falls within the acceptable range.\n", num_2);

	do
	{
		printf("\nEnter the third number that falls in between 1 and 30: ");/* User input for the third number variable */
		scanf("%d", &num_3);/* Assignment of the third number variable to user input */
		if (num_3 < 1 || num_3 > 30)/* Conditional Statement tests the user input for validity, if it is not acceptable it displays an error message*/
		{
			printf("\nSorry try again, the number is not within the acceptable range.\n");

		}
	} 
	while (num_3 < 1 || num_3 > 30);/* Conditional Statement verifies the numbers entered fall within range */
	printf("%d falls within the acceptable range.\n", num_3);

	do
	{
		printf("\nEnter the fourth number that falls in between 1 and 30: ");/* User input for the fourth number variable */
		scanf("%d", &num_4);/* Assignment of the fourth number variable to user input */
		if (num_4 < 1 || num_4 > 30)/* Conditional Statement tests the user input for validity, if it is not acceptable it displays an error message*/
		{
			printf("\nSorry try again, the number is not within the acceptable range.\n");

		}
	} 
	while (num_4 < 1 || num_4 > 30);/* Conditional Statement verifies the numbers entered fall within range */
	printf("%d falls within the acceptable range.\n", num_4);

	do
	{
		printf("\nEnter the fifth number that falls in between 1 and 30: ");/* User input for the fifth number variable */
		scanf("%d", &num_5);/* Assignment of the fifth number variable to user input */
		if (num_5 < 1 || num_5 > 30)/* Conditional Statement tests the user input for validity, if it is not acceptable it displays an error message*/
		{
			printf("\nSorry try again, the number is not within the acceptable range.\n");

		}
	} 
	while (num_5 < 1 || num_5 > 30);/* Conditional Statement verifies the numbers entered fall within range */
	printf("%d falls within the acceptable range.\n", num_5);

	printf("\nBelow you will find the associated graphics from the five numbers read in order:\n");

	/* Conditional Statements execute counting and display output for the first number */
	counter = 1;
	do 
	{
		
		printf("*");
		counter++;
	} 
	while (counter <= num_1);
	printf("\n");

	/* Conditional Statements execute counting and display output for the second number */
	counter = 1;
	do
	{
		printf("*");
		counter++;
	} 
	while (counter <= num_2);
	printf("\n");

	/* Conditional Statements execute counting and display output for the third number */
	counter = 1;
	do
	{
		printf("*");
		counter++;
	} 
	while (counter <= num_3);
	printf("\n");

	/* Conditional Statements execute counting and display output for the fourth number */
	counter = 1;
	do
	{
		printf("*");
		counter++;
	} 
	while (counter <= num_4);
	printf("\n");

	/* Conditional Statements execute counting and display output for the fifth number */
	counter = 1;
	do
	{
		printf("*");
		counter++;
	} 
	while (counter <= num_5);
	printf("\n");

	getchar();
	getchar();

	return 0;
}

    

