/****************************************************/
/* Lab 3 Question 8                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 3/17/21                                    */
/* This Program employs a for function              */
/* in order to print multiplication table           */
/****************************************************/

#include<stdio.h>

int main()
{

    //Declaration
    int num, row, col;

    //Data/Input
    printf("Enter the multiplication table for : ");
    scanf("%d", &num);
    printf("\n");

    //Processing/Calculation
    for (row = 0; row <= 12; row++)//For loop statement conducts a loop function up to a max row of 12.
    {

        printf("%d X %d = %d \n", num, row, (num * row));//Calculation performed as part of the 'printf' function
    }

    return 0;

}
//Output
//
//Test Run 1
//
//Enter the multiplication table for : 2
//
//2 X 0 = 0
//2 X 1 = 2
//2 X 2 = 4
//2 X 3 = 6
//2 X 4 = 8
//2 X 5 = 10
//2 X 6 = 12
//2 X 7 = 14
//2 X 8 = 16
//2 X 9 = 18
//2 X 10 = 20
//2 X 11 = 22
//2 X 12 = 24
//
//Test Run 2
//
//Enter the multiplication table for : 5
//
//5 X 0 = 0
//5 X 1 = 5
//5 X 2 = 10
//5 X 3 = 15
//5 X 4 = 20
//5 X 5 = 25
//5 X 6 = 30
//5 X 7 = 35
//5 X 8 = 40
//5 X 9 = 45
//5 X 10 = 50
//5 X 11 = 55
//5 X 12 = 60
//
//Test Run 3
//
//Enter the multiplication table for : 9
//
//9 X 0 = 0
//9 X 1 = 9
//9 X 2 = 18
//9 X 3 = 27
//9 X 4 = 36
//9 X 5 = 45
//9 X 6 = 54
//9 X 7 = 63
//9 X 8 = 72
//9 X 9 = 81
//9 X 10 = 90
//9 X 11 = 99
//9 X 12 = 108

