/****************************************************/
/* Lab 3 Question 1                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 10/12/20                                   */
/* This Program calculates the sum of numbers from  */
/* m to n                                           */
/****************************************************/

#include<stdio.h>

int main()
{

    //Declaration
    int valueM, valueN, sum = 0, i = 0;

    //Input
    printf("Enter the value of m: ");
    scanf("%d", &valueM);

    printf("Enter the value of n: ");
    scanf("%d", &valueN);

    //Calculations
    sum = valueM;
    for(i = valueM + 1; i <= valueN; i++)
    {
        sum += i;
    }

    //Output
    printf("Sum = %d", sum);

    return 0;

}

/*
Test Run 1:
Enter the value of m: 7
Enter the value of n: 11
Sum = 45

Test Run 2
Enter the value of m: 8
Enter the value of n: 12
Sum = 50

Test run 3

Enter the value of m: 9
Enter the value of n: 13
Sum = 55

*/
