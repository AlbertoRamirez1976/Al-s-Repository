/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 2 Program Set 1                          */
/* Date: 09/27/20                                    */
/* This Program calculates the expenses of traveling */
/* from one city to another city.                    */
/*****************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main()
{

     //Declaration
     int days, meals;
     char sourceCity, destinationCity, modeofTranspo, hotelType, foodType;
     double transpoCharges;


     printf("\n");
     printf("\n");
     printf("********************************************");
     printf("\n");
     printf("\n");
     printf("\n");
     printf("WELCOME TO THE TRIP EXPENSES CALCULATOR     ");
     printf("\n");
     printf("\n");
     printf("\n");
     printf("********************************************");
     printf("\n");
     getchar();
     system("clear");

     //Data/Input/Prompt user for source city information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE SOURCE CITY:\n\nB for Baltimore\n\nC for Chattanooga\n\nN for Nashville\n\nP for Pasadena\n\n");
     printf("\n");
     scanf("%c", &sourceCity);//Read and store source city
     getchar();
     system("clear");

     //Data/Input/Prompt user for destination city information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE DESTINATION CITY:\n\nD for Denver\n\nM for Madison\n\nC for Clarksville\n\nK for Knoxville\n\n");
     printf("\n");
     scanf("%c", &destinationCity);//Read and store destination city
     getchar();
     system("clear");

     //Data/Input/Prompt user for mode of transportation information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE MODE OF TRANSPORT:\n\nA for Air\n\nR for Train\n\nB for Bus\n\n");
     printf("\n");
     scanf("%c", &modeofTranspo);//Read and store mode of transportation
     getchar();
     system("clear");

     //Data/Input/Prompt user for hotel information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE TYPE OF HOTEL:\n\nF for Five Star\n\nT for Three Star\n\nO for Ordinary\n\n");
     printf("\n");
     scanf("%c", &hotelType);//Read and store hotel information
     getchar();
     system("clear");

     //Data/Input/Prompt user for number of days of stay information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE NUMBER OF DAYS OF STAY \n");
     printf("\n");
     scanf("%d", &days);//Read and store stay information
     getchar();
     system("clear");

     //Data/Input/Prompt user for meal information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE TYPE OF FOOD:\n\nV for Veg\n\nN for Non-Veg\n\nC for Continental \n");
     printf("\n");
     scanf("%c", &foodType);//Read and store meal information
     getchar();
     system("clear");

     //Data/Input/Prompt user for number of meals to take in hotel
     printf("\n");
     printf("\n");
     printf("\n");
     printf("How many meals would you like to take in the Hotel?  \n");
     printf("\n");
     scanf("%d", &meals);//Read and store number of meals to take in hotel
     getchar();
     system("clear");

     //Expense Table:

     //Hotel Charges/day

     //Meal Charges/Meal

     //Transportation Cost

     //Calculations

     //Output
     printf("\n");
     printf("\n");
     printf("***************************************************");
     printf("\n");
     printf("\n");
     printf("TOTAL EXPENSES TO TRAVEL from %c to %c ", sourceCity, destinationCity);
     printf("\n");
     printf("\n");
     printf("***************************************************");
     printf("\n");
     printf("\n");
     printf("TRANSPORTATION CHARGES (%c) = \n", modeofTranspo);
     printf("\n");
     printf("NUMBER OF DAYS OF STAY (%d) = \n", days);
     printf("\n");
     printf("TRANSPORTATION CHARGES (%c) = \n", modeofTranspo);
     printf("\n");
     printf("NUMBER OF MEALS IN A DAY (%c) = \n", foodType);
     printf("\n");
     printf("ROOM CHARGES = \n");
     printf("\n");
     printf("FOOD CHARGES = \n");
     printf("\n");
     printf("\n");
     printf("***************************************************");
     printf("\n");
     printf("\n");
     printf("TOTAL CHARGES = ");
     printf("\n");
     printf("\n");
     printf("***************************************************");
     printf("\n");

     return 0;

} //End function main

/*
Test Run 1

Test Run 2

Test Run 3

Test Run 4

Test Run 5

*/

