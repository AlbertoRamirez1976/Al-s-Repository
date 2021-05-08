/****************************************************/
/* Lab 5 Question 4                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* String program to read and print text            */
/****************************************************/

//Preprocessor Directive
#include <stdio.h>

int main()
{

    //Local variable declaration
    char string[100],c;
    int i = 0;

    //Data/Input
    printf("Enter * to end ");
    printf("\nEnter the text : ");

    //While loop will continue loop iteration while sentinel character '*' is not entered by the user
    while((c = getchar())!='*')
    {
         string[i] = c;
         i++;
    }

    string[i]='\0';

    //Output of the text and the count of the characters
    printf("The text is : %s\n",string);
    printf("The count of the characters is : %d\n",i);

    return 0;

}


//Output
//
//Test Run 1
//
//Enter * to end
//Enter the text : Hi there*
//The text is : Hi there
//The count of the characters is : 8
//
//Test Run 2
//
//Enter * to end
//Enter the text : How are you?*
//The text is : How are you?
//The count of the characters is : 12
//
//Test Run 3
//
//Enter * to end
//Enter the text : Hola, como estas?*
//The text is : Hola, como estas?
//The count of the characters is : 17
