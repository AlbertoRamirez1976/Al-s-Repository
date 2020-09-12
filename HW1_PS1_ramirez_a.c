/****************************************************/
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Homework 1 Program Set 1                         */
/* Date: 09/10/20                                   */
/* This Program prompts user for three input        */
/* characters which are the user's initials         */
/* and displays them in a welcoming message. Then   */
/* prompts user for the quantities of each of the   */
/* following coins, in the respective order:        */
/* quarters, dimes, nickels, and pennies. Computes  */
/* the total value of the coins, and then displays  */
/* the dollar value.                                */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
     /*Declaration*/
     int pennies, nickels, dimes, quarters, cents, dollars;
     char name[4];

     /*Opening Statement*/
     printf("Hello, welcome to my HW lab!\n");
     printf("\n");


     /*Introduction*/
     printf("What are the first, middle, and last initials of your full-name? (i.e., AER)\n");
     gets(name);
     printf("\n");

     /*Follow-up Statement*/
     printf("It is nice to meet you %s, let's see what your coins are worth.\n", name);
     printf("\n");

     /*Prompt user for amount*/
     printf("Please enter the number of quarters: ");
     scanf("%d", &quarters);/*Read and store amount of quarters*/
     printf("Please enter the number of dimes:    ");
     scanf("%d", &dimes);/*Read and store amount of dimes*/
     printf("Please enter the number of nickels:  ");
     scanf("%d", &nickels);/*Read and store amount of nickels*/
     printf("Please enter the number of pennies:  ");
     scanf("%d", &pennies);/*Read and store amount of pennies*/
     printf("\n");

     /*Processing*/
     cents = quarters * 25 + dimes * 10 + nickels * 5 + pennies * 1;/*Constants identified and it converts the individual quantities to cents*/
     dollars = cents / 100;/*Converts the individual quantities of cents to total dollars*/
     cents = cents % 100;/*Converts the individual quantities of cents to total cents*/

     /*Output*/
     printf("The number of quarters is: %d\n", quarters);
     printf("The number of dimes is:    %d\n", dimes);
     printf("The number of nickels is:  %d\n", nickels);
     printf("The number of pennies is:  %d\n", pennies);
     printf("\n");
     printf("Your coins are worth $%.2d.%.2d cents. ", dollars, cents);
     printf("\n");

     /*Closing Statement*/
     printf("\nI hope that you enjoyed my HW program...you take care!\n ");

     return 0;

} /*End function main*/

/*

Test Run 1

Hello, welcome to my HW lab!

What are the first, middle, and last initials of your full-name? (i.e., AER)
JTK

It is nice to meet you JTK, let's see what your coins are worth.

Please enter the number of quarters: 4
Please enter the number of dimes:    0
Please enter the number of nickels:  0
Please enter the number of pennies:  0

The number of quarters is: 4
The number of dimes is:    0
The number of nickels is:  0
The number of pennies is:  0

Your coins are worth $01.00 cents.

I hope that you enjoyed my HW program...you take care!

Test Run 2

Hello, welcome to my HW lab!

What are the first, middle, and last initials of your full-name? (i.e., AER)
RHT

It is nice to meet you RHT, let's see what your coins are worth.

Please enter the number of quarters: 0
Please enter the number of dimes:    10
Please enter the number of nickels:  0
Please enter the number of pennies:  0

The number of quarters is: 0
The number of dimes is:    10
The number of nickels is:  0
The number of pennies is:  0

Your coins are worth $01.00 cents.

I hope that you enjoyed my HW program...you take care!

Test Run 3

Hello, welcome to my HW lab!

What are the first, middle, and last initials of your full-name? (i.e., AER)
VAN

It is nice to meet you VAN, let's see what your coins are worth.

Please enter the number of quarters: 125
Please enter the number of dimes:    95
Please enter the number of nickels:  35
Please enter the number of pennies:  13

The number of quarters is: 125
The number of dimes is:    95
The number of nickels is:  35
The number of pennies is:  13

Your coins are worth $42.63 cents.

I hope that you enjoyed my HW program...you take care!

Test Run 4

Hello, welcome to my HW lab!

What are the first, middle, and last initials of your full-name? (i.e., AER)
JON

It is nice to meet you JON, let's see what your coins are worth.

Please enter the number of quarters: 34
Please enter the number of dimes:    78
Please enter the number of nickels:  97
Please enter the number of pennies:  33

The number of quarters is: 34
The number of dimes is:    78
The number of nickels is:  97
The number of pennies is:  33

Your coins are worth $21.48 cents.

I hope that you enjoyed my HW program...you take care!

Test Run 5

Hello, welcome to my HW lab!

What are the first, middle, and last initials of your full-name? (i.e., AER)
AER

It is nice to meet you AER, let's see what your coins are worth.

Please enter the number of quarters: 325
Please enter the number of dimes:    123
Please enter the number of nickels:  37
Please enter the number of pennies:  13

The number of quarters is: 325
The number of dimes is:    123
The number of nickels is:  37
The number of pennies is:  13

Your coins are worth $95.53 cents.

I hope that you enjoyed my HW program...you take care!

*/
