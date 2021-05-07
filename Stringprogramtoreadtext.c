/****************************************************/
/* Lab 5 Question 4                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* String program to read and print text            */
/****************************************************/

#include <stdio.h>

int main()
{

    char string[100],c;
    int i=0;
    printf("Enter * to end ");
    printf("\nEnter the text : ");
    while((c=getchar())!='*')
    {
         string[i]=c;
         i++;
    }

    string[i]='\0';
    printf("The text is : %s\n",string);
    printf("The count of the characters is : %d\n",i);

    return 0;
}
