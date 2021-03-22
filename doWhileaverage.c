/****************************************************/
/* Lab 3 Question 4                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 3/17/21                                    */
/* This Program employs a do-while function         */
/* in order to conduct an average                   */
/****************************************************/

#include<stdio.h>

int main()
{

    //Declaration
    int nValue = 1, sum = 1, num = 0, count = 1;

    //Data/Input
    printf("Enter the value of n : ");
    scanf("%d", &nValue);


    //Processing/Calculation
    do
    {
        ++count;//The count function will continue to count +1.
        sum += count;//The sum variable is defined and assigned the value of count.

    }
    while (count < nValue);//While loop function will conduct the calculation untill the cound value reached the sentinel value.

    float average;
    average = sum / (float) nValue;

    //Output
    printf("The sum of first %d numbers = %d  \n", nValue, sum);
    printf("The average of first %d numbers = %.2f  \n", nValue, average);//Precision set for average value to two decimal places.

    getchar();

    return 0;

}
//Output
//
//Test Run 1
//
//Enter the value of n : 18
//The sum of first 18 numbers = 171
//The average of first 18 numbers = 9.50
//
//Test Run 2
//
//Enter the value of n : 36
//The sum of first 36 numbers = 666
//The average of first 36 numbers = 18.50
//
//Test Run 3
//
//Enter the value of n : 72
//The sum of first 72 numbers = 2628
//The average of first 72 numbers = 36.50


