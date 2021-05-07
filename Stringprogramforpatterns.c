/****************************************************/
/* Lab 5 Question 7                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* String program to enter a text pattern           */
/****************************************************/


#include<stdio.h>
#include<string.h>

char string[100], pattern[100];
int count = 0, count1 = 0;

int main()
{
    int i, j, l, length1, length2;
    char string[100], pattern[100];
    int count = 0, count1 = 0;

    printf("Enter a string : ");
    scanf("%[^\n]s", string);

    length1 = strlen(string);

    printf("Enter the pattern : ");
    scanf(" %[^\n]s", pattern);

    length2 = strlen(pattern);

    for (i = 0; i < length1;)
    {
        j = 0;
        count = 0;
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
    if(count1>0)
        printf("\nPattern found %d times\n ",  count1 );
    else
         printf("\nPattern not found \n " );

    return 0;
}
