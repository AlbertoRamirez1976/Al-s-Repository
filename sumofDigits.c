/****************************************************/
/* Lab 3 Question 9                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 3/17/21                                    */
/* This Program employs a for loop function         */
/* in order to calculate the sum of digits          */
/****************************************************/


#include<stdio.h>

int main()
{

    //Declaration
    int num = 0, digit = 0, sum =0, loopV = 0;

    //Data/Input
    printf("Enter the number : ");
    scanf("%d", &num);//Num variable is assigned the value of user input

    //Processing/Calculation
    for (loopV = 0; loopV < 31999; loopV++)//For loop statement will conduct a continuous loop as long as the statement is true.
    {

        digit = num % 10;//Digit variable is assigned the vale of num modulo 10. It will test for division by zero or compilation errors.
        sum = sum + digit;//sum variable is asigned the value of sum + digit. Digit variable has the result stored in memory of the previous modulo function.
        num = num / 10;//Finally, the num variable will inherent the value of num / 10. The division function will divide by zero in order to round results towards zero.

    }

    printf("The sum of its digits: %d",  sum);
    printf("\n");

    return 0;

}
//Output
//
//Test Run 1
//
//Enter the number : 123
//The sum of its digits: 6
//
//Test Run 2
//
//Enter the number : 29548
//The sum of its digits: 28
//
//Test Run 3
//
//Enter the number : 31999
//The sum of its digits: 31

