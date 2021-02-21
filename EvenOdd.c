/****************************************************/
/* Lab 2 Question 9                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 2/20/21                                    */
/* This Program displays an even or odd number      */
/* using a switch statement.                        */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int num;

     //Data/Input
     printf("Enter a number between 1 to 10: ");
     scanf("%d",&num);

        //switch statement to determine if even or odd.
        switch (num)
        {
            case 1:
                printf("You entered %d.That is odd number.\n", num);
                break;
            case 2:
                printf("You entered %d.That is even number.\n", num);
                break;
            case 3:
                printf("You entered %d.That is odd number.\n", num);
                break;
            case 4:
                printf("You entered %d.That is even number.\n", num);
                break;
            case 5:
                printf("You entered %d.That is odd number.\n", num);
                break;
            case 6:
                printf("You entered %d.That is even number.\n", num);
                break;
            case 7:
                printf("You entered %d.That is odd number.\n", num);
                break;
            case 8:
                printf("You entered %d.That is even number.\n", num);
                break;
            case 9:
                printf("You entered %d.That is odd number.\n", num);
                break;
            case 10:
                printf("You entered %d.That is even number.\n", num);
                break;
            default:
                printf("Invalid, please enter a number between 1-10.\n");
        }

     return 0;

}


//Output
//
//Test Run 1
//
//Enter a number between 1 to 10: 5
//You entered 5.That is odd number.


//Output
//
//Test Run 2
//
//Enter a number between 1 to 10: 10
//You entered 10.That is even number.


//Output
//
//Test Run 3
//
//Enter a number between 1 to 10: 15
//Invalid, please enter a number between 1-10.


