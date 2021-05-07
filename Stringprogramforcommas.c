/****************************************************/
/* Lab 5 Question 6                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* String program to enter a text that has commas   */
/****************************************************/

#include <stdio.h>

int main()
{

    char string[100],c;


    int count = 0,i;

    printf("Enter the text : ");
    scanf("%[^\n]s", string);
    for (i = 0;string[i] != '\0';i++)
    {
        if (string[i] == ',')
           string[i] = ';' ;
    }
    printf("The copied text is : %s\n", string);

    return 0;
}
