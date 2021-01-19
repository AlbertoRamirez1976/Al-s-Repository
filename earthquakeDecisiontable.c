/* Title: Earthquake Decision Table Program                                    */
/* Author: Alberto E. Ramirez                                                  */
/* Date: 1/13/2021                                                             */
/* Program that characterizes an earthquake based on its Richter scale number  */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive */

int main(void)
{

	double num = 0;/* Variable declaration  */
		
	printf("Welcome to the Earthquake Decision Table Program.\n");/* Opening Statement */

	/* Inputs */
	printf("\nLet's start by entering the richter scale value in order to provide the damage type: \n");/* Get user input*/
	scanf("%lf", &num);/* Receive user input and then assign it to the variable*/

	/* Conditional Staements */
	if (num > 0.0 && num < 5.0)
		printf("\nThere is little or no damage to property\n");
	else if (num > 5.0 && num <= 5.5)
		printf("\nThere is some damage to property\n");
	else if (num > 5.5 && num <= 6.5)
		printf("\nThere is serious damage: walls may crack or fail\n");
	else if (num > 6.5 && num <= 7.5)
		printf("\nDisaster: houses and buildings may collapse\n");
	else if (num > 7.5)
		printf("\nCatastrophic: most buildings destroyed\n");
	else
		printf("\nYour input is not valid, try again\n");
					
	getchar();
	getchar();

	return (0);/* End of function main  */

}
