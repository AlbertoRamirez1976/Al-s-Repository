/* Title: The Strings Program              */
/* Author: Alberto E. Ramirez              */
/* Date: 1/26/2021                         */
/* Program that displays nouns and plurals */

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>/* Preprocessor directive for input and output functions */

/* Function Prototypes */
int nounEnds_y(char[]);/* Function is of the type integer and it takes a string as an input argument. It will convert nouns that end in 'y' to plural form  */
int nounEnds_in_s_ch_sh(char[]);/* Function is of the type integer and it takes a string as an input argument. It will convert nouns that end in 's, ch, or sh' to plural form  */

int main()
{
	/* Variable Declaration */
	int i;/* Variable declaration for int variable 'i' which will be used as a loop iteration control function */
	char noun[30]; /* Variable declaration for char variable 'noun' which will be used to store a string value up to 30 characters in length */
	char status;/* Variable Declaration for variable status. It is used to capture user input for variable status. It will control provide the user with the option to quit */

	/* Opening Statement */
	printf("Welcome to the Strings Program.\n");
	printf("\nWould you like to proceed? [Y or Q]: ");/* User input is requested in order to determine if the program will proceed */
	scanf("%c", &status);/* User input is stored in the char variable status */
	

	/* Conditional Statement */
	while (status !='q' || status !='Q')/* Conditional While Loop function will continue to loop while variable status is not true */
	{

		
		/* Conditional Statement */
		if (status == 'Y' || status == 'y')/* Conditional statement to check for status of yes */
		{

			printf("\nEnter a noun when ready: \n");/* Displays a prompt in order to accept user input for noun */
			scanf("%s", noun); /* Accepts user input and assigns it to staring variable 'noun' */

		}

		else if (status == 'Q' || status == 'q')/* Conditional statement to check for status of quit */
		{

			return(0);/* If user input selects quit, the loop will return it back to the main function with no return value */

		}

		printf("\nThe plural form of %s is: ", noun);/* The plural form of variable is displayed */
		
				
			if (nounEnds_y(noun) == 1)/* Conditional Statement will check variable noun that ends in Y and provide the plural form */
			{

				for (i = 0;i < strlen(noun) - 1;i++)
				{
					printf("%c", noun[i]);/* Function will display the ending portion in plural form*/
				}
				printf("ies\n");/* Function will display the ending portion in plural 'ies' */


			}

			else if (nounEnds_in_s_ch_sh(noun) == 1)/* Conditional Statement will check variable noun that ends in s, ch, and sh and provide the plural form */
			{

				printf("%s", noun);/* Function will display the ending portion in plural */
				printf("es\n");/* Function will display the ending portion in plural 'es' */

			}

			else
			{

				printf("%s", noun);/* This else statement will display all other cases in just 's' */
				printf("s\n");/* Function will display the ending portion in plural 's' */

			}

	}

	getchar();
	getchar();

	printf("End of program\n");
}

int nounEnds_y(char noun[])  /* Function is of the type integer and it takes a string as an input argument. It will convert nouns that end in 'y' to plural form  */
{
	int n = strlen(noun); /* The int variable 'n' will be inittialized with the input argument for noun */

	if (noun[n - 1] == 'y')/* Conditional IF Statement verifies if the last letter is a 'y' */
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int nounEnds_in_s_ch_sh(char noun[]) /* Function is of the type integer and it takes a string as an input argument. It will convert nouns that end in 's, ch, or sh' to plural form  */
{
	int n = strlen(noun); /* The int variable 'n' will be inittialized with the input argument for noun */

	if (noun[n - 1] == 'h') /* Conditional IF Statement verifies if the last letter is a 'h' */
	{
		if (noun[n - 2] == 'c' || noun[n - 2] == 's') /* Conditional IF Statement verifies if the last letter ends in either a 'c' or 's' */
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (noun[n - 1] == 's') /* Conditional IF Statement verifies if the last letter is a 's' */
	{
		return 1;
	}
	else /* This else statement will return a value for all other cases as just 's' */
	{
		return 0;
	}

	
}
