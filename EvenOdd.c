/****************************************************/
/* Lab 2 Question 2                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 09/24/20                                   */
/* This Program determines whether a number is even */
/* or odd                                           */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int num;

     //Data/Input
     printf("Enter any number ");
     scanf("%d",&num);

     //if statements and output
     if (num%2 == 0)
        {
            printf("%d is even.\n", num);
        }

     else
            printf("%d is odd.\n", num);

     return 0;

} //End function main//

/*

Test run 1
Enter any number 125
125 is odd.

Test run 2
Enter any number 152
152 is even.

Test run 3
Enter any number 253
253 is odd.

*/


