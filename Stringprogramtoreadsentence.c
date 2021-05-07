/****************************************************/
/* Lab 5 Question 5                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* String program to read a sentence                */
/****************************************************/

#include <stdio.h>

int main()
{

    char string[100],c;


    int count = 0,i;

    printf("Enter the sentence : ");
    scanf("%[^\n]s", string);
    for (i = 0;string[i] != '\0';i++)
    {
        if (string[i] == ' ' && string[i+1] != ' ')
            count++;
    }
    printf("The total count of words is : %d\n", count + 1);

    return 0;
}
