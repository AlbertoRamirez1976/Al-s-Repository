/****************************************************/
/* Lab 2 Question 8                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 09/25/20                                   */
/* This Program displays the day of the week using  */
/* a switch statement.                              */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int week;

     //Data/Input
     printf("Enter a number between 1 to 7: ");
     scanf("%d",&week);

        //switch statement to determine day of the week.
        switch (week)
        {
            case 1:
                printf("You entered %d, that's a Monday.\n", week);
                break;
            case 2:
                printf("You entered %d, that's a Tuesday.\n", week);
                break;
            case 3:
                printf("You entered %d, that's a Wednesday.\n", week);
                break;
            case 4:
                printf("You entered %d, that's a Thursday.\n", week);
                break;
            case 5:
                printf("You entered %d, that's a Friday.\n", week);
                break;
            case 6:
                printf("You entered %d, that's a Saturday.\n", week);
                break;
            case 7:
                printf("You entered %d, that's a Sunday.\n", week);
                break;
            default:
                printf("Invalid, please enter a week number between 1-7.\n");
        }

     return 0;

} //End function main//

/*

Test run 1
Enter a number between 1 to 7: 3
You entered 3, that's a Wednesday.

Test run 2



*/


