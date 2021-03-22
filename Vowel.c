/****************************************************/
/* Lab 2 Question 3                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 09/24/20                                   */
/* This Program determines whether the character    */
/* entered is a vowel(a-e-i-o-u) or not.            */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     char vowel;

     //Data/Input
     printf("Enter any character: ");
     scanf("%c",&vowel);

     //if statements and output
     if (vowel =='a' || vowel =='e' || vowel =='i' || vowel =='o' || vowel =='u'|| vowel =='A' || vowel =='E' || vowel =='I' || vowel =='O' ||vowel =='U')
        {
            printf("%c is a vowel.\n", vowel);
        }

     else
            printf("%c is not a vowel.\n", vowel);

     return 0;

} //End function main//

/*

Test run 1
Enter any character: h
h is not a vowel.

Test run 2
Enter any character: i
i is a vowel.

Test run 3
Enter any character: x
x is not a vowel.

*/


