/* Title: The Array Pointer Program */
/* Author: Alberto E. Ramirez */
/* Date: 1/23/2021 */
/* Program to display array pointers */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5/* Constant SIZE is set to value of 5 */
#define AL 5/* Constant AL (Array Length is set to value of 5 */
#define MAX 5/* Constant MAX is set to value of 5 */
#define SENTINEL -9999/* Constant SENTINEL is set to value of -9999 */

int main(void)
{
	int n[SIZE] = { 0 };/* Array n set to value of constant SIZE */
	int i = 0;/* Variable declaration for counter variable i and initialized to zero */
	int num = 0;/* Variable declaration for variable number and initialized to zero */
	int inval = 0;/* Variable declaration for variable invalid and initialized to zero */
	float N[AL] = { 0 };/* Array N set to value of constant Array Length */

	/* Opening Statement */
	printf("Welcome to the Array Pointer Program\n");

	/* Input */
	printf("\nEnter numbers separated by <return>, and end with -9999\n");

	/* Conditional Statement */
	for (i = 0; i < SIZE; i++)
	{
		n[i] = 0;
	}
	i = 0;
	scanf("%d", &inval);
	while (i < SIZE && inval != SENTINEL)
	{
		n[i] = inval;
		scanf("%d", &inval);
		i++;
	}
	printf("The data values entered are as follows:\n");
	for (i = 0; i < SIZE && n[i] != 0; i++)
	{
		printf("%d\n", n[i]);
	}
	printf("The data values multiplied by their index are as follows:\n");
	for (i = 0; i < SIZE && n[i] != 0; i++)
	{
		n[i] *= n[i];
		printf("%d\n", n[i]);
	}
	
		getchar();
		getchar();

		printf("End of program\n");
}