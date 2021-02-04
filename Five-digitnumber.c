/****************************************************/
/* Lab 1 Question 3                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 2/3/21                                     */
/* This Program takes one five-digit integer from a */
/* user. Then it separates the numbers into         */
/* individual digits and prints the digits separated*/
/* from each other  by three spaces.                */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int Digit_1, Digit_2, Digit_3, Digit_4, Digit_5;
     int num;

     //Data/input
     printf("Enter a number: ");
     scanf("%d", &num);

     //Processing/Calculations
     Digit_5 = num % 10;
     num = num / 10;
     Digit_4 = num % 10;
     num = num / 10;
     Digit_3 = num % 10;
     num = num / 10;
     Digit_2 = num % 10;
     num = num / 10;
     Digit_1 = num % 10;
     num = num / 10;

     //Output
     printf("%d %d %d %d %d\n", Digit_1, Digit_2, Digit_3, Digit_4, Digit_5);
     printf("\n");

     return 0;

}

//Output
//
//Test Run 1
//
//Enter a number: 42139
//4 2 1 3 9

//Test Run 2
//
//Enter a number: 93124
//9 3 1 2 4

//Test Run 3
//
//Enter a number: 12493
//1 2 4 9 3

//Test Run 4
//
//Enter a number: 22445
//2 2 4 4 5

//Test Run 5
//
//Enter a number: 57589
//5 7 5 8 9




