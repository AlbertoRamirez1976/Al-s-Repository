/****************************************************/
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Homework 1 Program Set 1                         */
/* Date: 09/7/20                                    */
/* This Program prompts user for three input        */
/* characters which are the user's initials         */
/* and displays them in a welcoming message. Then   */
/* prompts user for the quantities of each of the   */
/* following coins, in the respective order:        */
/* quarters, dimes, nickels, and pennies. Computes  */
/* the total value of the coins, and then displays  */
/* the value.                                       */
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

     /*Introduction*/
     printf("What are the first, middle, and last initials of your full-name? (i.e., AER) ");
     gets(name);
     printf("\n");

     /*Follow-up Statement*/
     printf("It is nice to meet you %s, let's see what your coins are worth.\n", name);
     printf("\n");

     /*Prompt user for amount*/
     printf("Please enter the number of quarters: \n");
     scanf("%d", &quarters);/*Read and store amount of quarters*/
     printf("\n");
     printf("Please enter the number of dimes: \n");
     scanf("%d", &dimes);/*Read and store amount of dimes*/
     printf("\n");
     printf("Please enter the number of nickels: \n");
     scanf("%d", &nickels);/*Read and store amount of nickels*/
     printf("\n");
     printf("Please enter the number of pennies: \n");
     scanf("%d", &pennies);/*Read and store amount of pennies*/
     printf("\n");


     /*Processing*/
     dollars = (quarters * 25 + dimes * 10 + nickels * 5 + pennies);/*Converts the individual quantities of cents to total dollars*/
     cents = (cents % 100);/*Converts the individual quantities of cents to total cents*/

     /*Output*/
     printf("\n The number of quarters is %d\n", quarters);
     printf("\n");
     printf("\n The number of dimes is %d\n", dimes);
     printf("\n");
     printf("\n The number of nickels is %d\n", nickels);
     printf("\n");
     printf("\n The number of pennies is %d\n", pennies);
     printf("\n");
     printf("\n Your coins are worth %d dollars and %d cents.\n", dollars, cents);
     printf("\n");
     
     /*Closing Statement*/
     printf("I hope that you enjoyed my HW program...you take care!\n");

     return 0;

} /*End function main*/
