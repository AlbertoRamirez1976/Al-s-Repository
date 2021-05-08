/****************************************************/
/* Lab 5 Question 7                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* String program to enter a text pattern           */
/****************************************************/

//Preprocessor directives
#include<stdio.h>
#include<string.h>


//Global variable declaration
char string[100], pattern[100];
int count = 0, count1 = 0;

int main()
{

    //Local variable declaration
    int i, j, l, length1, length2;
    char string[100], pattern[100];
    int count = 0, count1 = 0;

    //Data/Input
    printf ("Enter a string : ");
    gets (string);

    //Local variable declaration for variable length1
    length1 = strlen(string);

    //Data/Input
    printf ("Enter the pattern : ");
    gets (pattern);

    //Local variable declaration for variable length2
    length2 = strlen(pattern);

    //For loop will continue loop iteration while condition is true (i is less than length1)
    for (i = 0; i < length1;)
    {
        j = 0;
        count = 0;

        //While loop will continue loop ieration while string array[i] equals pattern[j]
        while ((string[i] == pattern[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == length2)
        {
            count1++;
            count = 0;
        }
        else

            i++;
    }

    //if else statement will display error messages if count1 is less than 0 or not true
    if(count1 > 0)
        printf("\nPattern found %d times\n ",  count1 );
    else
         printf("\nPattern not found \n " );

    return 0;

}

//Output
//
//Test Run 1
//
//Enter a string : She sells sea shells on the sea shore
//Enter the pattern : sea
//
//Pattern found 2 times
//
//Test Run 2
//
//Enter a string : Peter Piper picked a peck of pickled peppers, A peck of pickled peppers Peter Piper picked
//Enter the pattern : peppers
//
//Pattern found 2 times
//
//Test Run 3
//
//Enter a string : How much wood would a woodchuck chuck if a woodchuck could chuck wood
//Enter the pattern : wood
//
//Pattern found 3 times
