/****************************************************/
/* Lab 2 Question 1                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 2/20/21                                    */
/* This Program determines whether a person         */
/* is eligible to vote (18 years old) or not.       */
/* If not eligible, it displays how many years are  */
/* left to be eligible.                             */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int voteAge, ageTest;

     //Data/Input
     printf("Enter the age: ");
     scanf("%d",&voteAge);

     //Processing/Calculation
     ageTest = 18-voteAge;

     //Decision statement and output
     if (voteAge < 18)
        {
            printf("You have to wait for another %d years to cast your vote.\n", ageTest);
        }

     else
            printf("You are eligible to cast your vote.\n");

     return 0;

}

//Output
//
//Test Run 1
//
//Enter the age: 10
//You have to wait for another 8 years to cast your vote.

//Test Run 2
//
//Enter the age: 25
//You are eligible to cast your vote.

//Test Run 3
//
//Enter the age: 35
//You are eligible to cast your vote.





