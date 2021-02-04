/****************************************************/
/* Lab 1 Question 2                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 2/3/21                                     */
/* This Program allows the user to enter 2 integers */
/* to find the sum, product, difference, quotient,  */
/* and remainder of the two numbers.                */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int num1, num2, sum, difference, product, quotient, remainder;

     //Data/input
     printf("Enter two numbers: ");
     scanf("%d %d", &num1, &num2 );

     //Processing/Calculations
     sum = num1 + num2;
     product = num1 * num2;
     difference = num1 - num2;
     quotient = num1 / num2;
     remainder = num1 % num2;

     //Output
     printf("The sum is %d\n", sum);
     printf("The product is %d\n", product);
     printf("The difference is %d\n", difference);
     printf("The quotient is %d\n", quotient);
     printf("The remainder is %d\n", remainder);
     printf("\n");

     return 0;

}

//Output
//
//Test Run 1
//
//Enter two numbers: 20 5
//The sum is 25
//The product is 100
//The difference is 15
//The quotient is 4
//The remainder is 0

//Test Run 2
//
//Enter two numbers: 5 20
//The sum is 25
//The product is 100
//The difference is -15
//The quotient is 0
//The remainder is 5

//Test Run 3
//
//Enter two numbers: 13 7
//The sum is 20
//The product is 91
//The difference is 6
//The quotient is 1
//The remainder is 6

//Test Run 4
//
//Enter two numbers: 7 8
//The sum is 15
//The product is 56
//The difference is -1
//The quotient is 0
//The remainder is 7

//Test Run 5
//
//Enter two numbers: 2 8
//The sum is 10
//The product is 16
//The difference is -6
//The quotient is 0
//The remainder is 2

