/****************************************************/
/* Lab 2 Question 7                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 2/20/21                                    */
/* This Program determines whether the character    */
/* entered is a vowel or not.(Switch)               */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     char vowel;

     //Data/Input
     printf("Enter a character: ");
     scanf("%c",&vowel);

        //switch statement to validate if vowel or not
        switch (vowel)
        {
            case 'A':
                printf("%c is a vowel.\n", vowel);
                break;
            case 'E':
                printf("%c is a vowel.\n", vowel);
                break;
            case 'I':
                printf("%c is a vowel.\n", vowel);
                break;
            case 'O':
                printf("%c is a vowel.\n", vowel);
                break;
            case 'U':
                printf("%c is a vowel.\n", vowel);
                break;
            case 'a':
                printf("%c is a vowel.\n", vowel);
                break;
            case 'e':
                printf("%c is a vowel.\n", vowel);
                break;
            case 'i':
                printf("%c is a vowel.\n", vowel);
                break;
            case 'o':
                printf("%c is a vowel.\n", vowel);
                break;
            case 'u':
                printf("%c is a vowel.\n", vowel);
                break;
            default:
                printf("%c is not a vowel.\n", vowel);
        }

     return 0;

}

//Output
//
//Test Run 1
//
//Enter a character: b
//b is not a vowel.


//Output
//
//Test Run 2
//
//Enter a character: B
//B is not a vowel.


//Output
//
//Test Run 3
//
//Enter a character: e
//e is a vowel.



