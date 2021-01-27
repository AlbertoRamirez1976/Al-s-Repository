/* Title: Change Dispenser Program           */
/* Author: Alberto E. Ramirez                */
/* Date: 1/18/2021                           */
/* Program that provides appropriate change  */

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>/* Preprocessor directive */

/* Function Prototypes */
void getPaid(float* paid, float* due);/* Function accepts float input arguments and returns no parameters */
void makeChange(float paid, float due, int* dollar, int* qtr, int* dime, int* nkl, int* pen);/* Function accepts float and int input arguments and returns no parameters */
void printResult(float paid, float due, int dollar, int qtr, int dime, int nkl, int pen);/* Function accepts float and int input arguments and returns no parameters */

int main(void)
{
    /* Variable declaration */
    int dollar = 0;/* Variables are declared and initialized to zero */
    int qtr = 0;/* Variables are declared and initialized to zero */
    int dime = 0;/* Variables are declared and initialized to zero */
    int nkl = 0;/* Variables are declared and initialized to zero */
    int pen = 0;/* Variables are declared and initialized to zero */
    float paid = 0.0; /* Variables are declared and initialized to zero as part of the getPaid function precondition */
    float due = 0.0;/* Variables are declared and initialized to zero as part of the getPaid function precondition */
  
    /* Function Calls*/
    getPaid(&paid, &due);

    makeChange(paid, due, &dollar, &qtr, &dime, &nkl, &pen);

    printResult(paid, due, dollar, qtr, dime, nkl, pen);

    getchar();
    getchar();

    return(0);/* End of function main  */

}

/* Function Declarations for function getPaid */
void getPaid(float* paid, float* due)
{
    
    /* Input */
    printf("Welcome to the Change Dispenser Program\n");
    printf("\nEnter the amount paid in dollars: \n");/* Get user input for how much is paid */
    scanf("%f", paid);/* Assigns user input for how much paid to variable paid */
    printf("\nEnter the amount due in dollars: \n");/* Get user input for how much is due */
    scanf("%f", due);/* Assigns user input for how much is due to variable due */

    /* Conditional statement */
    while ((*paid < *due) || *paid > 20)/* getPaid function postcondition */
    {
        printf("\nSorry, but the paid amount should be greater than the due amount, and it should also be less than 20 dollars.\n");
        printf("\nEnter the amount paid once again: \n");/* Verifies user input against conditional statement as part of the postcondition */
        scanf("%f", paid);/* If user input is false then they would be asked to enter the amount once again */
        printf("Enter the amount due once again: \n");/* Verifies user input against conditional statement as part of the postcondition */
        scanf("%f", due);/* If user input is false then they would be asked to enter the amount once again */
    }

}
/* Function Declarations for function makeChange */
void makeChange(float paid, float due, int* dollar, int* qtr, int* dime, int* nkl, int* pen)
{
   
    float change;/* Local Variable */
    change = paid - due;/* Calculates change */
    int temp = change * 10;/* Temporary value */
    *dollar = temp / 10;/* Pointer to variable dollar */
    float temp2 = change - *dollar;/* Temporary value */
    int decimals = temp2 * 100;/* Calculates decimal equivalent */

    /* Contional Statement to determine value of quarters */
    if (decimals >= 25)
    {
        *qtr = decimals / 25;
        decimals = decimals % 25;
    }

    /* Contional Statement to determine value of dimes */
    if (decimals >= 10)
    {
        *dime = decimals / 10;
        decimals = decimals % 10;
    }

    /* Contional Statement to determine value of nickels */
    if (decimals >= 5)
    {
        *nkl = decimals / 5;
        decimals = decimals % 5;
    }

    /* Assigns the variable decimal to penny pointer */
    *pen = decimals;


}
/* Function Declarations for function printResult */
void printResult(float paid, float due, int dollar, int qtr, int dime, int nkl, int pen)
{

    /* Displays results for all amounts*/
    printf("\nTotal amount paid in dollars is: $%.2f\n", paid);
    printf("\nTotal amount due in dollars is: $%.2f\n", due);
    printf("\nYour change in terms of dollars is: $%d", dollar);
    printf(",%d quarters", qtr);
    printf(",%d dimes", dime);
    printf(",%d nickels", nkl);
    printf(",and %d pennies.\n", pen);
}
