/****************************************************/
/* Lab 2 Question 6                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 2/20/21                                    */
/* This Program determines whether an integer       */
/* entered is positive or equal to zero.            */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int num;

     //Data/Input
     printf("Enter any number: ");
     scanf("%d",&num);

     //Decision statement and output
     if (num > 0)
        {
            printf("The number is positive.\n");
        }
     if (num < 0)
        {
            printf("The number is negative.\n");
        }
     if (num == 0)
        {
            printf("The number is equal to zero.\n");
        }

     return 0;

}


//Output
//
//Test Run 1
//
//Enter any number: 0
//The number is equal to zero.


//Output
//
//Test Run 2
//
//Enter any number: 15
//The number is positive.


//Output
//
//Test Run 3
//
//Enter any number: -25
//The number is negative.

