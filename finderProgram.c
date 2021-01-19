/* Title: Finder Program                                   */
/* Author: Alberto E. Ramirez                              */
/* Date: 1/15/2021                                         */
/* Program that provides the smallest and largest integers */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive */

int main(void)
{

    int temp = 0;/* Variable declaration for temporary variable */
    int num = 0;/* Variable declaration for number variable */
    int count = 0;/* Variable declaration for count variable */
    int smallest = 0;/* Variable declaration for smallest variable */
    int largest = 0; /* Variable declaration for largest variable */

    /* Opening Statement */
    printf("Welcome to the Finder Program\n");

    /* Input */
    printf("\nEnter the number of positive integers to compare:\n");
    scanf("%d", &temp);

    printf("\nNow enter the integers:\n");
    scanf("%d", &num);

    /* Variable declaration */
    smallest = num;
    largest = num;

    for (count = 2; count <= temp; count++)  /* Loop function executes */
    {
        scanf("%d", &num);
        if (num > largest)
            largest = num;
        if (num < smallest)
            smallest = num;
    }
    printf("The smallest integer is %d, and the largest integer is %d.", smallest, largest);
    
getchar();
getchar();

return(0);/* End of function main  */

}
	
	

