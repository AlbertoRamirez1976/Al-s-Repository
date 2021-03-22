/****************************************************/
/* Lab 3 Question 7                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 3/17/21                                    */
/* This Program employs a nested function           */
/* in order to print an alphabet pattern            */
/****************************************************/

#include<stdio.h>

int main()
{

    //Declaration
    char row, col, base;

    //Data/Input
    printf("Enter highest alphabet : ");
    scanf("%c", &base);

    //Processing/Calculation
    for (row = 'A'; row <= base; row++)//For loop statement conducts a loop function for the rows based on the base number.
    {
        for (col = 'A'; col <= (row); col++)//Nested for loop statement conducts a loop function for the column as long as it is less than row number..
            printf("%c", col);
            printf("\n");
    }

    return 0;

}
//Output
//
//Test Run 1
//
//Enter highest alphabet : F
//A
//AB
//ABC
//ABCD
//ABCDE
//ABCDEF
//
//Test Run 2
//
//Enter highest alphabet : H
//A
//AB
//ABC
//ABCD
//ABCDE
//ABCDEF
//ABCDEFG
//ABCDEFGH
//
//Test Run 3
//
//Enter highest alphabet : C
//A
//AB
//ABC

