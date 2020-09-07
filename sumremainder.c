/****************************************************/
/* Lab 1 Question 2                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 09/5/20                                    */
/* This Program allows the user to enter 2 integers */
/* to find the Sum, Difference, Product, Quotient,  */
/* and Remainder of the 2 numbers                   */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int num1, num2, sum, difference, product, quotient, remainder;
     char name[15];

     //Opening statement

     printf("Hello, welcome to my first lab!\n");

     //Introduction
     printf("What is your name? ");
     gets(name);
     printf("\n");

     //Follow-up statement

     printf("It is nice to meet you %s...\n", name);
     printf("\n");

     printf("Let's get started by entering the first integer\n"); //prompt
     scanf( "%d", &num1 ); //read the first integer
     printf("\n");

     printf("Now for your second integer\n"); //prompt
     scanf( "%d", &num2 ); //read the second integer

     //Processing/Calculations
     sum = num1 + num2;
     difference = num1 - num2;
     product = num1 * num2;
     quotient = num1 / num2;
     remainder = num1 % num2;

     //Output
     printf("\n");
     printf("%s",name);
     printf("\n");
     printf("The sum of your integers is %d\n", sum);
     printf("The difference of your integers is %d\n", difference);
     printf("The product your integers is %d\n", product);
     printf("The quotient of your integers is %d\n", quotient);
     printf("The remainder of your integers is %d\n", remainder);
     printf("\n");

     //Closing statement

     printf("%s, I hope that you enjoyed my first program...you take care!\n", name);

     return 0;

} //end function main

/*
Test Run 1

Hello, welcome to my first lab!
What is your name? Alex

It is nice to meet you Alex...

Let's get started by entering the first integer
11

Now for your second integer
3

Alex
The sum of your integers is 14
The difference of your integers is 8
The product your integers is 33
The quotient of your integers is 3
The remainder of your integers is 2

Alex, I hope that you enjoyed my first program...you take care!

Test Run 2

Hello, welcome to my first lab!
What is your name? Leslie

It is nice to meet you Leslie...

Let's get started by entering the first integer
23

Now for your second integer
4

Leslie
The sum of your integers is 27
The difference of your integers is 19
The product your integers is 92
The quotient of your integers is 5
The remainder of your integers is 3

Leslie, I hope that you enjoyed my first program...you take care!

Test Run 3

Hello, welcome to my first lab!
What is your name? John

It is nice to meet you John...

Let's get started by entering the first integer
33

Now for your second integer
6

John
The sum of your integers is 39
The difference of your integers is 27
The product your integers is 198
The quotient of your integers is 5
The remainder of your integers is 3

John, I hope that you enjoyed my first program...you take care!

Test Run 4

Hello, welcome to my first lab!
What is your name? Vanessa

It is nice to meet you Vanessa...

Let's get started by entering the first integer
57

Now for your second integer
7

Vanessa
The sum of your integers is 64
The difference of your integers is 50
The product your integers is 399
The quotient of your integers is 8
The remainder of your integers is 1

Vanessa, I hope that you enjoyed my first program...you take care!

Test Run 5

Hello, welcome to my first lab!
What is your name? Tony

It is nice to meet you Tony...

Let's get started by entering the first integer
87

Now for your second integer
5

Tony
The sum of your integers is 92
The difference of your integers is 82
The product your integers is 435
The quotient of your integers is 17
The remainder of your integers is 2

Tony, I hope that you enjoyed my first program...you take care!

*/



