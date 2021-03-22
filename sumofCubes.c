/****************************************************/
/* Lab 3 Question 10                                */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 3/17/21                                    */
/* This Program employs a do-while function         */
/* in order to calculate the sum of cubes           */
/****************************************************/

#include<stdio.h>

int main()
{

    //Declaration
    int num = 0, numValue = 0, modNum = 0, sum = 0;

    //Data/Input
    printf("Enter a number, or -999 to quit : ");
    scanf("%d", &num);//Num variable is assigned the value of user input

    if(num == -999)
    {

        return 0;//If function will test user input and the assigned variable num for sentinel value of -999 to exit and return function to main.
    }

     numValue = num;//numValue is assigned the value of num as a pass the reference function.

     //Processing/Calculation
     while (numValue != 0)//While loop statement will conduct a continuous loop as long as the statement is true.
    {
        modNum = numValue % 10;//modNum variable is assigned the value of numValue modulo 10. The modulo function will test for dividion by zero.

        numValue = numValue / 10;//numValue will be assigned the value of numValue / 10 in order to round up and eliminate the last digit.

        sum = sum + (modNum * modNum * modNum);//Sum variable is assigned the value of sum + the product of modNum times 3 for the three digits.
    }

    if(sum == num)
        printf("%d**3 + %d**3 + %d**3 is = %d ",(num % 1000 / 100), (num % 100 / 10), (num % 10),  num);//Modulo operator is used with the num output in order to manipulate the digits and print out a specific digit.
    else
        printf("%d**3 + %d**3 + %d**3 is not = %d ",(num % 1000 / 100), (num % 100 / 10), (num % 10),  num);//Modulo operator is used with the num output in order to manipulate the digits and print out a specific digit.

    return 0;

}
//Output
//
//Test Run 1
//
//Enter a number, or -999 to quit : 432
//4**3 + 3**3 + 2**3 is not = 432
//
//Enter a number, or -999 to quit : 371
//3**3 + 7**3 + 1**3 is = 371
//
//Enter a number, or -999 to quit : -999
//
//
//Test Run 2
//
//Enter a number, or -999 to quit : 234
//2**3 + 3**3 + 4**3 is not = 234
//
//Enter a number, or -999 to quit : 173
//1**3 + 7**3 + 3**3 is not = 173
//
//Enter a number, or -999 to quit : -999
//
//Test Run 3
//
//Enter a number, or -999 to quit : 439
//4**3 + 3**3 + 9**3 is not = 439
//
//Enter a number, or -999 to quit : 379
//3**3 + 7**3 + 9**3 is not = 379
//
//Enter a number, or -999 to quit : -999


