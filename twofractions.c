/****************************************************/
/* Lab 1 Question 5                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 09/6/20                                    */
/* This Program adds two fractions.                 */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int a, b, c, d, x, y;
     char name[15];

     //Opening statement
     printf("Hello, welcome to my fourth lab!\n");

     //Introduction
     printf("What is your name? ");
     gets(name);
     printf("\n");

     //Follow-up statement

     printf("It is nice to meet you %s...\n", name);
     printf("\n");


     //Input from the user for the numerator of the first number
     printf("Let's get started by entering the numerator for the first number: \n"); //prompt
     scanf("%d", &a); //read/store the input for the first numerator

     //Input from the user for the denominator of the first number
     printf("Next, enter the denominator for the first number: \n"); //prompt
     scanf("%d", &b); //read/store the input for the first denominator

     //Input from the user for the numerator of the second number
     printf("Then enter the numerator for the second number: \n"); //prompt
     scanf("%d", &c); //read/store the input for the second numerator

     //Input from the user for the denominator of the second number
     printf("Finally, enter the denominator for the second number: \n"); //prompt
     scanf("%d", &d); //read/store the input for the second denominator

     printf("\n");

     //Processing
     x = (a + c); //x represents the "x" axis and numerators for this program
     y = (b + d); //y represents the "y" axis and denominators for this program


     //Output
     printf("%s,The fractions you entered are as follows: %d/%d and %d/%d\n", name, a, b, c, d);
     printf("\n");
     printf("The sum of your fraction is: %d/%d\n", x, y);
     printf("\n");

     //Closing statement

     printf("%s, I hope that you enjoyed my third program...you take care!\n", name);

     return 0;

} //end function main

/*

Test Run 1

Hello, welcome to my fourth lab!
What is your name? Alex

It is nice to meet you Alex...

Let's get started by entering the numerator for the first number:
3
Next, enter the denominator for the first number:
4
Then enter the numerator for the second number:
5
Finally, enter the denominator for the second number:
6

Alex,The fractions you entered are as follows: 3/4 and 5/6

The sum of your fraction is: 8/10

Alex, I hope that you enjoyed my third program...you take care!


Test Run 2

Hello, welcome to my fourth lab!
What is your name? Leslie

It is nice to meet you Leslie...

Let's get started by entering the numerator for the first number:
1
Next, enter the denominator for the first number:
2
Then enter the numerator for the second number:
3
Finally, enter the denominator for the second number:
4

Leslie,The fractions you entered are as follows: 1/2 and 3/4

The sum of your fraction is: 4/6

Leslie, I hope that you enjoyed my third program...you take care!

Test Run 3

Hello, welcome to my fourth lab!
What is your name? John

It is nice to meet you John...

Let's get started by entering the numerator for the first number:
9
Next, enter the denominator for the first number:
8
Then enter the numerator for the second number:
7
Finally, enter the denominator for the second number:
6

John,The fractions you entered are as follows: 9/8 and 7/6

The sum of your fraction is: 16/14

John, I hope that you enjoyed my third program...you take care!

Test Run 4

Hello, welcome to my fourth lab!
What is your name? Vanessa

It is nice to meet you Vanessa...

Let's get started by entering the numerator for the first number:
8
Next, enter the denominator for the first number:
7
Then enter the numerator for the second number:
6
Finally, enter the denominator for the second number:
5

Vanessa,The fractions you entered are as follows: 8/7 and 6/5

The sum of your fraction is: 14/12

Vanessa, I hope that you enjoyed my third program...you take care!

Test Run 5

Hello, welcome to my fourth lab!
What is your name? Tony

It is nice to meet you Tony...

Let's get started by entering the numerator for the first number:
2
Next, enter the denominator for the first number:
1
Then enter the numerator for the second number:
3
Finally, enter the denominator for the second number:
4

Tony,The fractions you entered are as follows: 2/1 and 3/4

The sum of your fraction is: 5/5

Tony, I hope that you enjoyed my third program...you take care!

*/


