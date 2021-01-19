/* Title:Sum of Integers Program                    */
/* Author: Alberto E. Ramirez                       */
/* Date: 1/15/2021                                  */
/* Program that provides the sum of even integers   */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive */

int main(void)
{

    int start = 0;/* Variable declaration for the start variable*/ 
    int end = 0;/* Variable declaration for the ending variable*/ 
    int sum = 0;/* Variable declaration for the sum variable*/ 

    /* Opening Statement */
    printf("Welcome to the Sum of Integers Program\n");

    /* Input */
    printf("\nEnter starting and ending values:\n");
    scanf("%d%d", &start, &end);

    /* The start of the output function before the execution of the conditional statement */
    printf("\nThe sum of integers from %d to %d is ", start, end);

    /* Conditional Statement */
    while (start <= end)
    {
        if (start % 2 == 0)
        {
            sum = sum + start;
        }
        start++;
    }

    /* The final output function which executes after the conditional statement executes and is added to the previous output line */
    printf("%d\n", sum);

    getchar();
    getchar();

    return(0);/* End of function main  */

}



