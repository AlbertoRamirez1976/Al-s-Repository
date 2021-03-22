/****************************************************/
/* Lab 2 Question 6                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 09/25/20                                   */
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

     //if statements and output
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

} //End function main//

/*

Test run 1
Enter any number: 0
The number is equal to zero.

Test run 2
Enter any number: 15
The number is positive.

Test run 3
Enter any number: -25
The number is negative.

*/


