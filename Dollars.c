/****************************************************/
/* Lab 1 Question 6                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 09/6/20                                    */
/* This Program adds asks the user to enter a       */
/* US dollar amount and then show how to pay        */
/* that amount using the smallest number of $20,    */
/* $10, $5, $1 bills.                               */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
     /*Declaration*/
     int amount, twenty, ten, five, one;
     char name[15];

     /*Opening Statement*/
     printf("Hello, welcome to my sixth and final lab!\n");

     /*Introduction*/
     printf("What is your name? ");
     gets(name);
     printf("\n");

     /*Follow-up Statement*/
     printf("It is nice to meet you %s...\n", name);
     printf("\n");

     /*Prompt user for US Dollar amount*/
     printf("Let's get started by entering a US Dollar amount: \n");
     scanf("%d", &amount);/*Read and store US Dollar amount*/
     printf("\n");

     /*Processing*/
     twenty = amount / 20;/*Calculates the number of $20 bills needed*/
     ten = (amount - (twenty * 20))/10;/*Calculates the number of $10 bills needed*/
     five = (amount - (twenty * 20) - (ten * 10)) / 5;/*Calculates the number of $20 bills needed*/
     one = (amount - (twenty * 20) - (ten * 10) - (five * 5));/*Calculates the number of $20 bills needed*/

     /*Output*/
     printf("\n The number of $20 bills you will require are: %d\n", twenty);
     printf("\n");
     printf("\n The number of $10 bills you will require are: %d\n", ten);
     printf("\n");
     printf("\n The number of $5 bills you will require are: %d\n", five);
     printf("\n");
     printf("\n The number of $1 bills you will require are: %d\n", one);
     printf("\n");

     /*Closing Statement*/
     printf("%s, I hope that you enjoyed my final program...you take care!\n", name);

     return 0;

} /*End function main*/

/*

Test Run 1

What is your name? Alex

It is nice to meet you Alex...

Let's get started by entering a US Dollar amount:
93


 The number of $20 bills you will require are: 4


 The number of $10 bills you will require are: 1


 The number of $5 bills you will require are: 0


 The number of $1 bills you will require are: 3

Alex, I hope that you enjoyed my final program...you take care!

Test Run 2

What is your name? Leslie

It is nice to meet you Leslie...

Let's get started by entering a US Dollar amount:
83


 The number of $20 bills you will require are: 4


 The number of $10 bills you will require are: 0


 The number of $5 bills you will require are: 0


 The number of $1 bills you will require are: 3

Leslie, I hope that you enjoyed my final program...you take care!

Test Run 3

What is your name? John

It is nice to meet you John...

Let's get started by entering a US Dollar amount:
73


 The number of $20 bills you will require are: 3


 The number of $10 bills you will require are: 1


 The number of $5 bills you will require are: 0


 The number of $1 bills you will require are: 3

John, I hope that you enjoyed my final program...you take care!

Test Run 4

What is your name? Vanessa

It is nice to meet you Vanessa...

Let's get started by entering a US Dollar amount:
103


 The number of $20 bills you will require are: 5


 The number of $10 bills you will require are: 0


 The number of $5 bills you will require are: 0


 The number of $1 bills you will require are: 3

Vanessa, I hope that you enjoyed my final program...you take care!


Test Run 5

Hello, welcome to my sixth and final lab!
What is your name? Tony

It is nice to meet you Tony...

Let's get started by entering a US Dollar amount:
1347


 The number of $20 bills you will require are: 67


 The number of $10 bills you will require are: 0


 The number of $5 bills you will require are: 1


 The number of $1 bills you will require are: 2

Tony, I hope that you enjoyed my final program...you take care!

*/


