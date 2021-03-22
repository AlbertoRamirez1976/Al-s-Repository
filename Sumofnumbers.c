/****************************************************/
/* Lab 3 Question 1                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 3/17/21                                    */
/* This Program calculates the sum of numbers from  */
/* m to n                                           */
/****************************************************/

#include<stdio.h>

int main()
{

    //Declaration
    int valueM, valueN;
    int num = 1, sum = 0, count = 0;

    //Data/Input
    printf("Enter the value of m : ");//Printf function will capture user input.
    scanf("%d", &valueM);//Scanf function will assign user input to the variable valueM.

    printf("Enter the value of n : ");//Printf function will capture user input.
    scanf("%d", &valueN);//Scanf function will assign user input to the variable valueN.

    //Processing/Calculation
    for (num = valueM; num <= valueN;num++)//For loop function will assign the valueM value to variable num, then perform a counting function.
    {
        sum += num;//The variable sum is assigned the value of num from the loop statement and also conduct a counting function.

    }

    //Output
    printf("Sum = %d", sum);//The sum will include all the sum of numbers between valueM and valueN.

    return 0;

}

//Output
//
//Test Run 1
//
//Enter the value of m : 7
//Enter the value of n : 11
//Sum = 45
//
//Test Run 2
//
//Enter the value of m : 14
//Enter the value of n : 22
//Sum = 162
//
//Test Run 3
//
//Enter the value of m : 45
//Enter the value of n : 77
//Sum = 2013


