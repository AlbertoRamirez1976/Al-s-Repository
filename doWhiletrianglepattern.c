/****************************************************/
/* Lab 3 Question 6                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 3/17/21                                    */
/* This Program employs a nested function           */
/* in order to print a triangle pattern             */
/****************************************************/

#include<stdio.h>

int main()
{

    //Declaration
    int base, row, col;

    //Data/Input
    printf("Enter base size of triangle for pattern : ");
    scanf("%d", &base);

    //Processing/Calculation
    for (row = 1; row <= base; row++)//For loop statement conducts a loop function for the rows based on the base number.
    {
        for (col = 1; col <= (row); col++)//Nested for loop statement conducts a loop function for the column as long as it is less than row number..
            printf("%d", col);
        printf("\n");
    }

    return 0;

}
//Output
//
//Test Run 1
//
//Enter the base size of triangle for pattern : 5
//1
//12
//123
//1234
//12345
//
//Test Run 2
//
//Enter the base size of triangle for pattern : 10
//1
//12
//123
//1234
//12345
//123456
//1234567
//12345678
//123456789
//12345678910
//
//Test Run 3
//
//Enter the base size of triangle for pattern : 7
//1
//12
//123
//1234
//12345
//123456
//1234567

