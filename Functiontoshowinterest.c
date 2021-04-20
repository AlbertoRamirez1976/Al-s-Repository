/****************************************************/
/* Lab 4 Question 2                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 4/20/21                                    */
/* Function to show interest                        */
/****************************************************/

#include<stdio.h>

//Function prototype
float show_interest(float principal, float rate, float period);//Non void function show_interest prototype

int main()
{
   //Local variable declaration
   float principal, period, rate;

   //User input
   printf("Please input the principal amount, rate and period(in years):  ");
   scanf("%f%f%f", &principal, &rate, &period);

   //Output from non void function show_interest
   float interest = show_interest(principal, rate, period);
   printf("The simple interest will be $%.2f \n", interest);
   return 0;

}

float show_interest(float principal, float rate, float period)//Non void function show_interest will take in float parameters and then calculate interest
{

    float interest = principal * rate * period;
    return interest;

}

//Output
//Test Run 1
//Please input the principal amount, rate and period(in years):  10000 .1 1
//The simple interest will be $1000.00
//
//Test Run 2
//Please input the principal amount, rate and period(in years):  20000 .2 2
//The simple interest will be $8000.00
//
//Test Run 3
//Please input the principal amount, rate and period(in years):  30000 .3 3
//The simple interest will be $27000.00


