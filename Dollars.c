/*************************************************/
/* Lab 1 Question 6                              */
/* Name : Alberto Ramirez                        */
/* Student ID : 1186065                          */
/* Date: 2/3/21                                  */
/* This Program adds asks the user to enter a    */
/* US dollar amount and then show how to pay     */
/* that amount using the smallest number of $20, */
/* $10, $5, $1 bills.                            */
/*                                               */
/*************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int amount;
     int twenty, ten, five, one;

     //Data/input
     printf("Enter a dollar amount: ");
     scanf("%d", &amount);//Read and store a dollar amount

     //Processing/Calculations
     twenty = amount / 20;//Calculates the number of $20 bills needed
     ten = (amount - (twenty * 20))/10;//Calculates the number of $10 bills needed
     five = (amount - (twenty * 20) - (ten * 10)) / 5;//Calculates the number of $20 bills needed
     one = (amount - (twenty * 20) - (ten * 10) - (five * 5));//Calculates the number of $20 bills needed

     //Output
     printf("\n$20 bills: %d", twenty);
     printf("\n$10 bills: %d", ten);
     printf("\n$5  bills: %d", five);
     printf("\n$1  bills: %d", one);
     printf("\n");

     return 0;

}

//Output
//
//Test Run 1
//
//Enter a dollar amount: 93
//
//$20 bills: 4
//$10 bills: 1
//$5  bills: 0
//$1  bills: 3

//Test Run 2
//
//Enter a dollar amount: 39
//
//$20 bills: 1
//$10 bills: 1
//$5  bills: 1
//$1  bills: 4

//Test Run 3
//
//Enter a dollar amount: 45
//
//$20 bills: 2
//$10 bills: 0
//$5  bills: 1
//$1  bills: 0

//Test Run 4
//
//Enter a dollar amount: 56
//
//$20 bills: 2
//$10 bills: 1
//$5  bills: 1
//$1  bills: 1

//Test Run 5
//
//Enter a dollar amount: 89
//
//$20 bills: 4
//$10 bills: 0
//$5  bills: 1
//$1  bills: 4


