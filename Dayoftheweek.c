/****************************************************/
/* Lab 2 Question 8                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 2/20/21                                    */
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
                printf("You entered %d,that's Monday.\n", week);
                break;
            case 2:
                printf("You entered %d,that's Tuesday.\n", week);
                break;
            case 3:
                printf("You entered %d,that's Wednesday.\n", week);
                break;
            case 4:
                printf("You entered %d,that's Thursday.\n", week);
                break;
            case 5:
                printf("You entered %d,that's Friday.\n", week);
                break;
            case 6:
                printf("You entered %d,that's Saturday.\n", week);
                break;
            case 7:
                printf("You entered %d,that's Sunday.\n", week);
                break;
            default:
                printf("Invalid, please enter a week number between 1-7.\n");
        }

     return 0;

}


//Output
//
//Test Run 1
//
//Enter a number between 1 to 7: 3
//You entered 3,that's Wednesday.


//Output
//
//Test Run 2
//
//Enter a number between 1 to 7: 7
//You entered 7,that's Sunday.


//Output
//
//Test Run 3
//
//Enter a number between 1 to 7: 10
//Invalid, please enter a week number between 1-7.

