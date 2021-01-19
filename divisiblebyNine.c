/* Title: Divisible by Nine Program                         */
/* Author: Alberto E. Ramirez                               */
/* Date: 1/15/2021                                          */
/* Program that determines if digits are divisible by nine  */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive */

int main(void)
{
       
    int num = 0;/* Variable declaration for the number variable*/
    int sum = 0;/* Variable declaration for the sum variable*/
    int temp = 0;/* Variable declaration for the  temporary variable*/

    /* Opening Statement */
    printf("Welcome to the Divisible by Nine Program\n");

    /* Input */
    printf("\nEnter number: \n");
    scanf("%d", &num);

    int count = num;/* Variable declaration for the second temporary variable*/

    /* The start of the output function before the execution of the conditional statement */
    printf("%d's digits are: ", num);

    /* Conditional Statement */
    while (num)
    {
        temp = num % 10;/* Variable definition for the temporary variable to the result of number modulo 10 */
        printf("%d ", temp);
        sum += temp;
        num /= 10;
    }
    /* The final output function which executes after the conditional statement executes and is added to the previous output line */
    if (sum % 9)/* Conditional statement determines if sum is divisible by nine */
        printf("\n%d is NOT divisible by 9", count);
    else
        printf("\n%d is divisible by 9", count);
        
    getchar();
    getchar();

    return(0);/* End of function main  */

}



