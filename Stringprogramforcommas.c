/****************************************************/
/* Lab 5 Question 6                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* String program to enter a text that has commas   */
/****************************************************/

//Preprocessor directive
#include <stdio.h>

int main()
{

    //Local variable declaration
    char string[100],c;
    int count = 0,i;

    //Data/Input
    printf ("Enter the text : ");
    gets (string);

    //For loop function will continue iterations as long as the '\0' sentinel value is not entered
    for (i = 0;string[i] != '\0';i++)
    {
        if (string[i] == ',')//If function will test for the condition of string array equals a comma
            {
                string[i] = ';' ;//If string array equals a comma, the assignment operator will assing it the value of the semicolon character
            {
    }

    //Output of the copied text
    printf ("The copied text is : %s\n", string);

    return 0;

}

//Output
//
//Test run 1
//Enter the text : Hello, how are you
//The copied text is : Hello; how are you
//
//Test Run 2
//
//Enter the text : Are, you okay?
//The copied text is : Are; you okay?
//
//Test Run 3
//
//Enter the text : Yes, I am doing okay
//The copied text is : Yes; I am doing okay
