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
ALE

It is nice to meet you ALE, let's see what your coins are worth.

Please enter the number of quarters: 50
Please enter the number of dimes:    49
Please enter the number of nickels:  48
Please enter the number of pennies:  47

The number of quarters is: 50
The number of dimes is:    49
The number of nickels is:  48
The number of pennies is:  47

Your coins are worth $20.27 cents.

I hope that you enjoyed my HW program...you take care!

Test Run 2

Hello, welcome to my HW lab!

What are the first, middle, and last initials of your full-name? (i.e., AER)
LES

It is nice to meet you LES, let's see what your coins are worth.

Please enter the number of quarters: 49
Please enter the number of dimes:    48
Please enter the number of nickels:  47
Please enter the number of pennies:  46

The number of quarters is: 49
The number of dimes is:    48
The number of nickels is:  47
The number of pennies is:  46

Your coins are worth $19.86 cents.

I hope that you enjoyed my HW program...you take care!

Test Run 3

Hello, welcome to my HW lab!

What are the first, middle, and last initials of your full-name? (i.e., AER)
JON

It is nice to meet you JON, let's see what your coins are worth.

Please enter the number of quarters: 48
Please enter the number of dimes:    47
Please enter the number of nickels:  46
Please enter the number of pennies:  45

The number of quarters is: 48
The number of dimes is:    47
The number of nickels is:  46
The number of pennies is:  45

Your coins are worth $19.45 cents.

I hope that you enjoyed my HW program...you take care!

Test Run 4

Hello, welcome to my HW lab!

What are the first, middle, and last initials of your full-name? (i.e., AER)
VAN

It is nice to meet you VAN, let's see what your coins are worth.

Please enter the number of quarters: 4
Please enter the number of dimes:    6
Please enter the number of nickels:  10
Please enter the number of pennies:  10

The number of quarters is: 4
The number of dimes is:    6
The number of nickels is:  10
The number of pennies is:  10

Your coins are worth $02.20 cents.

I hope that you enjoyed my HW program...you take care!

Test Run 5

Hello, welcome to my HW lab!

What are the first, middle, and last initials of your full-name? (i.e., AER)
TON

It is nice to meet you TON, let's see what your coins are worth.

Please enter the number of quarters: 5
Please enter the number of dimes:    7
Please enter the number of nickels:  4
Please enter the number of pennies:  9

The number of quarters is: 5
The number of dimes is:    7
The number of nickels is:  4
The number of pennies is:  9

Your coins are worth $02.24 cents.

I hope that you enjoyed my HW program...you take care!


*/
