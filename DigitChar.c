/****************************************************/
/* Lab 2 Question 4                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 2/20/21                                    */
/* This Program determines whether the user input   */
/* is a digit 0-9 or a character A-Z, a-z and       */
/* if it upper or lowercase.                        */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     char digitChar;

     //Data/Input
     printf("Enter any character: ");
     scanf("%c",&digitChar);

     //Decision statement and output
     if((digitChar>='a' && digitChar<='z'))
        {
            printf("Lowercase character was entered.\n");
        }
        else if(digitChar>='A' && digitChar<='Z')
        {
            printf("Uppercase character was entered.\n");
        }
        else if(digitChar>='0' && digitChar<='9')
        {
            printf("A digit was entered.\n");
        }

     return 0;

}


//Output
//
//Test Run 1
//
//Enter any character: C
//Uppercase character was entered.


//Output
//
//Test Run 2
//
//Enter any character: b
//Lowercase character was entered.


//Output
//
//Test Run 3
//
//Enter any character: 5
//A digit was entered.

