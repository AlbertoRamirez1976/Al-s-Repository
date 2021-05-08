/****************************************************/
/* Lab 5 Question 5                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* String program to read a sentence                */
/****************************************************/

//Preprocessor directive
#include <stdio.h>

int main()
{

    //Local variable declaration
    char string[100],c;
    int count = 0,i;

    //Data/Input
    printf( "Enter the sentence : ");
    gets(string);

    //For loop will continue loop iterations as long as the '\0' sentinel character is not entered
    for (i = 0;string[i] != '\0';i++)
    {
        if (string[i] == ' ' && string[i+1] != ' ')
            count++;
    }

    //Output of the total count of words
    printf("The total count of words is : %d\n", count + 1);

    return 0;

}


//Output
//
//Test Run 1
//Enter the sentence : How are you
//The total count of words is : 3
//
// Test Run 2
//
//Enter the sentence : Hola, como estas?
//The total count of words is : 3
//
//Test Run 3
//
//Enter the sentence : I am doing good, thank you for asking.
//The total count of words is : 8
