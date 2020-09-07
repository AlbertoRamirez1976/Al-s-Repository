/****************************************************/
/* Lab 1 Question 3                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 09/6/20                                    */
/* This Program takes one five-digit integer from a */
/* user. Then it separates the numbers into         */
/* individual digits and prints the digits separated*/
/* from each other  by three spaces.                */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
     /*Declaration*/
     int Digit_1, Digit_2, Digit_3, Digit_4, Digit_5, num;
     char name[15];

     /*Opening Statement*/
     printf("Hello, welcome to my second lab!\n");

     /*Introduction*/
     printf("What is your name? ");
     gets(name);
     printf("\n");

     /*Follow-up Statement*/
     printf("It is nice to meet you %s...\n", name);
     printf("\n");
     printf("Let's get started by entering one five-digit integer: \n"); //prompt
     scanf( "%d", &num); //read the five-digit integer
     printf("\n");


     /*Processing*/
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

     /*Output*/
     printf("%s, your numbers separated by three spaces are as follows:", name );
     printf("\n");
     printf("%d %d %d %d %d\n", Digit_1, Digit_2, Digit_3, Digit_4, Digit_5);
     printf("\n");

     /*Closing Statement*/
     printf("%s, I hope that you enjoyed my second program...you take care!\n", name);

     return 0;

} /*End function main*/


/*

Test Run 1

Hello, welcome to my second lab!
What is your name? Alex

It is nice to meet you Alex...

Let's get started by entering one five-digit integer:
23456

Alex, your numbers separated by three spaces are as follows:
2 3 4 5 6

Alex, I hope that you enjoyed my second program...you take care!

Test Run 2

Hello, welcome to my second lab!
What is your name? Leslie

It is nice to meet you Leslie...

Let's get started by entering one five-digit integer:
34567

Leslie, your numbers separated by three spaces are as follows:
3 4 5 6 7

Leslie, I hope that you enjoyed my second program...you take care!

Test Run 3

Hello, welcome to my second lab!
What is your name? John

It is nice to meet you John...

Let's get started by entering one five-digit integer:
45678

John, your numbers separated by three spaces are as follows:
4 5 6 7 8

John, I hope that you enjoyed my second program...you take care!

Test Run 4

Hello, welcome to my second lab!
What is your name? Vanessa

It is nice to meet you Vanessa...

Let's get started by entering one five-digit integer:
56789

Vanessa, your numbers separated by three spaces are as follows:
5 6 7 8 9

Vanessa, I hope that you enjoyed my second program...you take care!


Test Run 5

Hello, welcome to my second lab!
What is your name? Tony

It is nice to meet you Tony...

Let's get started by entering one five-digit integer:
98765

Tony, your numbers separated by three spaces are as follows:
9 8 7 6 5

Tony, I hope that you enjoyed my second program...you take care!

*/


