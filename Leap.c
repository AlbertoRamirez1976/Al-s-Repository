/****************************************************/
/* Lab 2 Question 5                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 09/24/20                                   */
/* This Program determines whether a given year     */
/* is a leap year or not.                           */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int year;

     //Data/Input
     printf("Enter any year: ");
     scanf("%d",&year);

     //if statements and output
     if ((year%400 == 0) || (year%4 == 0) && (year%100 != 0))//If year is divisible by 400, then it is a leap year.
        {
            printf("Leap year.\n");
        }
    else
        {
            printf("Not a leap year.\n");
        }

     return 0;

} //End function main//

/*

Test run 1
Enter any year: 1964
Leap year.

Test run 2
Enter any year: 2200
Not a leap year.

Test run 3
Enter any year: 2020
Leap year.

*/


