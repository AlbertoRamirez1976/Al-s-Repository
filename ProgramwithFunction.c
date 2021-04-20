/****************************************************/
/* Lab 4 Question 1                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 4/20/21                                    */
/* Program with functions                           */
/****************************************************/

#include<stdio.h>

//Function prototype
void Texas();
void California();

int main()
{
    //Function call from main function
    Texas();
    California();
    return 0;

}


void Texas()//Void function Texas
{
    int birds = 5000;//Integer variable birds equals 5000
    printf("Texas has %d birds \n", birds);//Output from void function Texas will output the bird variable value

}

void California()//Void function California
{
    int birds = 8000;//Integer variable birds equals 8000
    printf("California has %d birds \n", birds);//Output from void function California will output the bird variable value

}

//Output
//Test Run 1
//Texas has 5000 birds
//California has 8000 birds
//
//Test Run 2
//Texas has 2000 birds
//California has 7000 birds
//
//Test Run 3
//Texas has 9000 birds
//California has 3000 birds


