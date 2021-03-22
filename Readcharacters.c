/****************************************************/
/* Lab 3 Question 3                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 3/17/21                                    */
/* This Program reads numbers and letters until '*' */
/* is encountered                                   */
/****************************************************/

#include<stdio.h>

int main()
{

    //Declaration
    int lowerCase = 0;
    int upperCase = 0;
    int digits = 0;
    char digitChar;

    //Processing/Calculation
    while (digitChar != '*')//While loop statement will continue to loop until the sentinel value '*' is achieved
    {
        //Data/Input
        printf("Enter any character, or '*' to quit : ");
        scanf(" %c", &digitChar);

        if (digitChar >= 'a' && digitChar <= 'z')//If statement will test for a lowercase character

            lowerCase++;//Counting function will add up all lowercase characters and store in memory

        else if (digitChar >= 'A' && digitChar <= 'Z')//If statement will test for an uppercase character

            upperCase++;//Counting function will add up all uppercase characters and store in memory

        else if (digitChar >= '0' && digitChar <= '9')//If statement will test for a digit character

            digits++;//Counting function will add up all digit characters and store in memory

    }

    //Output
    printf("\nTotal count of lowercase characters entered = %d\n", lowerCase);
    printf("\nTotal count of uppercase characters entered = %d\n", upperCase);
    printf("\nTotal count of digits entered = %d\n", digits);

    return 0;

}
//Output
//
//Test Run 1
//
//Enter any character, or '*' to quit : O
//Enter any character, or '*' to quit : p
//Enter any character, or '*' to quit : A
//Enter any character, or '*' to quit : d
//Enter any character, or '*' to quit : 2
//Enter any character, or '*' to quit : *
//
//Total count of lowercase characters entered = 2
//
//Total count of uppercase characters entered = 2
//
//Total count of digits entered = 1
//
//Test Run 2
//
//Enter any character, or '*' to quit : A
//Enter any character, or '*' to quit : e
//Enter any character, or '*' to quit : I
//Enter any character, or '*' to quit : o
//Enter any character, or '*' to quit : U
//Enter any character, or '*' to quit : *
//
//Total count of lowercase characters entered = 2
//
//Total count of uppercase characters entered = 3
//
//Total count of digits entered = 0
//
//Test Run 3
//
//Enter any character, or '*' to quit : z
//Enter any character, or '*' to quit : 1
//Enter any character, or '*' to quit : D
//Enter any character, or '*' to quit : 4
//Enter any character, or '*' to quit : V
//Enter any character, or '*' to quit : 5
//Enter any character, or '*' to quit : *
//
//Total count of lowercase characters entered = 1
//
//Total count of uppercase characters entered = 2
//
//Total count of digits entered = 3



