/* Title: The Sales Commission Program            */
/* Author: Alberto E. Ramirez                     */
/* Date: 1/23/2021                                */
/* Program that displays an array of commissions  */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive for input and output functions */

#define SENTINEL -9999/* Constant SENTINEL value is set to -9999 */
#define DISCOUNT 0.09 /* Constant discount value is set to discount amount of 9% */

int main() 
{
    /*Variable Declaration */
    int salaries[11] = { 0 };/* Array of counter */
    int salary;/* Variable Declaration for variable salary and initialized to zero. It is used as a temporary value to capture the total from sales and commission  */
    int sales = 0;/* Variable Declaration for variable sales and initialized to zero. It is used to capture sales amount  */
    int count = 1;/* Variable Declaration for variable count and initialized to one. It is used for the while loop count */
    char status;/* Variable Declaration for variable status. It is used to capture user input for yes or no */

    /* Input */
    printf("Enter salaries? [Y/N]: ");/* User input is requested in order to determine if the program will proceed */
    scanf("%c", &status);/* User input is stored in the char variable status */

    /* Conditional Statement */
    if (status == 'Y' || status == 'y')/* Conditional statement to determine status */
    {
        printf("Enter employee sales [-9999 to quit]: ");/* If user input selects yes, they will be prompted to enter sales amount */
        scanf("%d", &sales);/* User input is stored in the int variable sales */
    }
    else if (status == 'N' || status == 'n')
    {
        return(0);/* If user input selects no, the loop will return it back to the main function with no return value */
    }

    /* Conditional While Statement for continous loop */
    while (count && sales != SENTINEL)/* The while loop will continue to loop as long as the SENTINEL value is false for count and sales */
    {
        /* Calculation for discount */
        salary = 200.0 + (sales * DISCOUNT);/* Calculation for discount involves multiplying sales by discount rate of 9% */
    
        if (salary >= 200 && salary < 1000)/* Conditional if statement determines where the salary amount falls */
            ++salaries[(int)salary / 100];
        else if (salary >= 1000)
            ++salaries[10];

        printf("Enter employee sales [-9999 to quit]: ");
        scanf("%d", &sales);
        count++;/* While counter which will keep track of number of loop iterations */
    }

    /* Total Employee Output */
    printf("\nTotal employees: %d\n", count);/* Employee count is provided by the count variable */
    /* Salary Ranges Output per employee */
    printf("$200-$299 : %d\n", salaries[2]);
    printf("$300-$399 : %d\n", salaries[3]);
    printf("$400-$499 : %d\n", salaries[4]);
    printf("$500-$599 : %d\n", salaries[5]);
    printf("$600-$699 : %d\n", salaries[6]);
    printf("$700-$799 : %d\n", salaries[7]);
    printf("$800-$899 : %d\n", salaries[8]);
    printf("$900-$999 : %d\n", salaries[9]);
    printf("Over $1000: %d\n", salaries[10]);

    getchar();
    getchar();

    return(0);/* End of function main  */

}
