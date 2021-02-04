/**************************************/
/* Lab 1 Question 5                   */
/* Name : Alberto Ramirez             */
/* Student ID : 1186065               */
/* Date: 2/3/21                       */
/* This Program adds two fractions.   */
/*                                    */
/**************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int Num_1, Denom_1, Num_2, Denom_2, Num_3, Denom_3;

     //Prompt user input for the first fraction
     printf("Enter the first fraction: ");
     scanf("%d/%d", &Num_1, &Denom_1);//Read and store the first fraction

     //Prompt user input for the second fraction
     printf("Enter the second fraction: ");
     scanf("%d/%d", &Num_2, &Denom_2);//Read and store the second fraction

     //Processing/Calculations
     Denom_3 = Denom_1 * Denom_2;//Find Least Common Denominator
     Num_3 = (Num_1 * Denom_2) + (Denom_1 * Num_2);//Find Least Common Numerator

     //Output
     printf("The sum of the two fraction is: %d/%d\n", Num_3, Denom_3);
     printf("\n");

     return 0;

}

//Output
//
//Test Run 1
//
//Enter the first fraction: 5/6
//Enter the second fraction: 3/4
//The sum of the two fraction is: 38/24

//Test run 2
//
//Enter the first fraction: 5/6
//Enter the second fraction: 3/4
//The sum of the two fraction is: 38/24

//Test Run 3
//
//Enter the first fraction: 4/8
//Enter the second fraction: 6/9
//The sum of the two fraction is: 84/72

//Test Run 4
//
//Enter the first fraction: 9/8
//Enter the second fraction: 7/5
//The sum of the two fraction is: 101/40

//Test Run 5
//
//Enter the first fraction: 4/3
//Enter the second fraction: 7/7
//The sum of the two fraction is: 49/21


