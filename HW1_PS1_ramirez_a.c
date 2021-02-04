/****************************************************/
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Homework 1 Program Set 1                         */
/* Date: 2/3/21                                     */
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
     //Declaration
     int pennies, nickels, dimes, quarters, cents, dollars;
     char name[4];

     //Data/input
     printf("Enter your initials, first, middle, and last: ");
     gets(name);
     printf("\nHello %s, let's see what your coins are worth.", name);
     printf("\n");

     //Data/input
     printf("Enter number of quarters: ");
     scanf("%d", &quarters);//Read and store amount of quarters
     printf("Enter number of dimes:    ");
     scanf("%d", &dimes);//Read and store amount of dimes
     printf("Enter number of nickels:  ");
     scanf("%d", &nickels);//Read and store amount of nickels
     printf("Enter number of pennies:  ");
     scanf("%d", &pennies);//Read and store amount of pennies
     printf("\n");

     //Processing/Calculations
     cents = quarters * 25 + dimes * 10 + nickels * 5 + pennies * 1;//Constants identified and it converts the individual quantities to cents
     dollars = cents / 100;//Converts the individual quantities of cents to total dollars
     cents = cents % 100;//Converts the individual quantities of cents to total cents

     //Output
     printf("Number of quarters is: %d\n", quarters);
     printf("Number of dimes is:    %d\n", dimes);
     printf("Number of nickels is:  %d\n", nickels);
     printf("Number of pennies is:  %d\n", pennies);
     printf("\n");
     printf("Your coins are worth %d dollars and %.2d cents. ", dollars, cents);
     printf("\n");

     return 0;

}

//Output

//Test Run 1
//
//Enter your initials, first, middle, and last: JTK
//
//Hello JTK, let's see what your coins are worth.
//Enter number of quarters: 4
//Enter number of dimes:    0
//Enter number of nickels:  0
//Enter number of pennies:  0
//
//Number of quarters is: 4
//Number of dimes is:    0
//Number of nickels is:  0
//Number of pennies is:  0
//
//Your coins are worth 1 dollars and 00 cents.

//Test Run 2
//
//Enter your initials, first, middle, and last: RHT
//
//Hello RHT, let's see what your coins are worth.
//Enter number of quarters: 0
//Enter number of dimes:    10
//Enter number of nickels:  0
//Enter number of pennies:  0
//
//Number of quarters is: 0
//Number of dimes is:    10
//Number of nickels is:  0
//Number of pennies is:  0
//
//Your coins are worth 1 dollars and 00 cents.

//Test Run 3
//
//Enter your initials, first, middle, and last: AER
//
//Hello AER, let's see what your coins are worth.
//Enter number of quarters: 5
//Enter number of dimes:    4
//Enter number of nickels:  3
//Enter number of pennies:  2
//
//Number of quarters is: 5
//Number of dimes is:    4
//Number of nickels is:  3
//Number of pennies is:  2
//
//Your coins are worth 1 dollars and 82 cents.

//Test Run 4
//
//Enter your initials, first, middle, and last: CTV
//
//Hello CTV, let's see what your coins are worth.
//Enter number of quarters: 7
//Enter number of dimes:    8
//Enter number of nickels:  5
//Enter number of pennies:  4
//
//Number of quarters is: 7
//Number of dimes is:    8
//Number of nickels is:  5
//Number of pennies is:  4
//
//Your coins are worth 2 dollars and 84 cents.

//Test Run 5
//
//Enter your initials, first, middle, and last: QUK
//
//Hello QUK, let's see what your coins are worth.
//Enter number of quarters: 6
//Enter number of dimes:    9
//Enter number of nickels:  2
//Enter number of pennies:  5
//
//Number of quarters is: 6
//Number of dimes is:    9
//Number of nickels is:  2
//Number of pennies is:  5
//
//Your coins are worth 2 dollars and 55 cents.

