/****************************************************/
/* Lab 3 Question 5                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 3/17/21                                    */
/* This Program employs a do-while function         */
/* in order to display square and cube of number    */
/****************************************************/

#include<stdio.h>

int main()
{

    //Declaration
    int iValue, num;

    //Data/Input
    printf("Enter the value of n : ");
    scanf("%d", &num);

    printf("\n -------------------------------------------------");
    iValue = 1;

    //Processing/Calculation
    do
    {
        printf("\n | \t %d \t | \t %d \t | \t %d \t |", iValue, (iValue * iValue), (iValue * iValue * iValue));
        iValue++;

    }
    while (iValue <= num);

    printf("\n -------------------------------------------------");

    return 0;

}

//Output
//
//Test Run 1
//
//Enter the value of n : 5
//
//-------------------------------------------------
//| 	 1 	 | 	 1 	 | 	 1 	 |
//| 	 2 	 | 	 4 	 | 	 8 	 |
//| 	 3 	 | 	 9 	 | 	 27 	 |
//| 	 4 	 | 	 16 	 | 	 64 	 |
//| 	 5 	 | 	 25 	 | 	 125 	 |
//-------------------------------------------------
//
//Test Run 2
//
//Enter the value of n : 2
//
// -------------------------------------------------
// | 	 1 	 | 	 1 	 | 	 1 	 |
// | 	 2 	 | 	 4 	 | 	 8 	 |
// -------------------------------------------------
//
//Test Run 3
//
//Enter the value of n : 4
//
// -------------------------------------------------
// | 	 1 	 | 	 1 	 | 	 1 	 |
// | 	 2 	 | 	 4 	 | 	 8 	 |
// | 	 3 	 | 	 9 	 | 	 27 	 |
// | 	 4 	 | 	 16 	 | 	 64 	 |
// -------------------------------------------------

