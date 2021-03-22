/****************************************************/
/* Lab 3 Question 2                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 3/17/21                                    */
/* This Program reads numbers until -1 is           */
/* encountered                                      */
/****************************************************/

#include<stdio.h>

int main()
{

    //Declaration
    int num, positive = 0, negative = 0, zero = 0;

    //Data/Input
    printf("Enter any number, -1 to quit : ");
    scanf("%d", &num);


    //Processing/Calculation
    while (num != -1)
    {

        if (num > 0)

            positive++;

        else if (num < 0)

            negative++;

        else
            zero++;

         printf("Enter any number, -1 to quit : ");
         scanf("%d", &num);
    }

    //Output
    printf("\nCount of positive numbers entered = %d\n", positive);
    printf("Count of negative numbers entered = %d\n", negative);
    printf("Count of zeroes numbers entered = %d\n", zero);

    return 0;

}
//Output
//
//Test Run 1
//
//Enter any number, -1 to quit : -12
//Enter any number, -1 to quit : 108
//Enter any number, -1 to quit : -24
//Enter any number, -1 to quit : 0
//Enter any number, -1 to quit : -23
//Enter any number, -1 to quit : -1
//
//Count of positive numbers entered = 1
//Count of negative numbers entered = 3
//Count of zero numbers entered = 1
//
//Test Run 2
//
//Enter any number, -1 to quit : -24
//Enter any number, -1 to quit : 110
//Enter any number, -1 to quit : -48
//Enter any number, -1 to quit : 1
//Enter any number, -1 to quit : -32
//Enter any number, -1 to quit : -1
//
//Count of positive numbers entered = 2
//Count of negative numbers entered = 3
//Count of zero numbers entered = 0
//
//Test Run 3
//
//Enter any number, -1 to quit : -55
//Enter any number, -1 to quit : 208
//Enter any number, -1 to quit : -44
//Enter any number, -1 to quit : 0
//Enter any number, -1 to quit : -33
//Enter any number, -1 to quit : -1
//
//Count of positive numbers entered = 1
//Count of negative numbers entered = 3
//Count of zero numbers entered = 1

