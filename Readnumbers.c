/****************************************************/
/* Lab 3 Question 2                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 10/12/20                                   */
/* This Program reads the numbers until -1 is       */
/* encountered                                      */
/****************************************************/

#include<stdio.h>

int main()
{

    //Declaration
    int num, positive = 0, negative = 0, zero = 0;

    //Input
    printf("Enter any number, -1 to quit: ");
    scanf("%d", &num);


    //Calculations
    while (num != -1)
    {

        if (num > 0)

            positive++;

        else if (num < 0)

            negative++;

        else
            zero++;

         printf("Enter any number, -1 to quit: ");
         scanf("%d", &num);
    }

    //Output
    printf("Count of positive numbers entered = %d\n", positive);
    printf("Count of negative numbers entered = %d\n", negative);
    printf("Count of zero numbers entered = %d\n", zero);


    return 0;

}

/*
Test Run 1:
Enter any number, -1 to quit: -12
Enter any number, -1 to quit: 108
Enter any number, -1 to quit: -24
Enter any number, -1 to quit: 0
Enter any number, -1 to quit: -23
Enter any number, -1 to quit: -1
Count of positive numbers entered = 1
Count of negative numbers entered = 3
Count of zero numbers entered = 1

Test Run 2
Enter any number, -1 to quit: 6
Enter any number, -1 to quit: 15
Enter any number, -1 to quit: 76
Enter any number, -1 to quit: -20
Enter any number, -1 to quit: -1
Count of positive numbers entered = 3
Count of negative numbers entered = 1
Count of zero numbers entered = 0

Test run 3
Enter any number, -1 to quit: -34
Enter any number, -1 to quit: -56
Enter any number, -1 to quit: -76
Enter any number, -1 to quit: 24
Enter any number, -1 to quit: 37
Enter any number, -1 to quit: 66
Enter any number, -1 to quit: 0
Enter any number, -1 to quit: -1
Count of positive numbers entered = 3
Count of negative numbers entered = 3
Count of zero numbers entered = 1

*/
