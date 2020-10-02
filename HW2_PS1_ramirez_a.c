/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 2 Program Set 1                          */
/* Date: 10/01/20                                    */
/* This Program calculates the expenses of traveling */
/* from one city to another city.                    */
/*****************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main()
{


     //Constant declaration
     #define Five* 500
     #define Three* 300
     #define Ordinary 100
     #define Vegetarian 15
     #define Non-Veg 30
     #define Continental 10

     //Variable Declaration
     int days, meals;
     char sourceCity, sourceCity1[15], destinationCity, destinationCity1[15], modeofTranspo, modeofTranspo1[10], hotelType, hotelType1[10], foodType, foodType1[10];
     double roomCharges, foodCharges, transpoCharges, totalCharges;

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
     switch(sourceCity)
     {
         case 'B': case 'b': strcpy(sourceCity1, "Baltimore");
         break;
         case 'C': case 'c': strcpy(sourceCity1, "Chattanooga");
         break;
         case 'N': case 'n': strcpy(sourceCity1, "Nashville");
         break;
         case 'P': case 'p': strcpy(sourceCity1, "Pasadena");
         break;
     }
     getchar();
     system("clear");

     //Data/Input/Prompt user for destination city information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE DESTINATION CITY:\n\nD for Denver\n\nM for Madison\n\nC for Clarksville\n\nK for Knoxville\n\n");
     printf("\n");
     scanf("%c", &destinationCity);//Read and store destination city
     switch(destinationCity)
     {
         case 'D': case 'd': strcpy(destinationCity1, "Denver");
         break;
         case 'M': case 'm': strcpy(destinationCity1, "Madison");
         break;
         case 'C': case 'c': strcpy(destinationCity1, "Clarksville");
         break;
         case 'K': case 'k': strcpy(destinationCity1, "Knoxville");
         break;
     }
     getchar();
     system("clear");

     //Data/Input/Prompt user for mode of transportation information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE MODE OF TRANSPORT:\n\nA for Air\n\nR for Train\n\nB for Bus\n\n");
     printf("\n");
     scanf("%c", &modeofTranspo);//Read and store mode of transportation
     switch(modeofTranspo)
     {
         case 'A': case 'a': strcpy(modeofTranspo1, "Air");
         break;
         case 'T': case 't': strcpy(modeofTranspo1, "Train");
         break;
         case 'B': case 'b': strcpy(modeofTranspo1, "Bus");
         break;
     }
     getchar();
     system("clear");

     //Data/Input/Prompt user for hotel information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE TYPE OF HOTEL:\n\nF for Five Star\n\nT for Three Star\n\nO for Ordinary\n\n");
     printf("\n");
     scanf("%c", &hotelType);//Read and store hotel information
     switch(hotelType)
     {
         case 'F': case 'f': strcpy(hotelType1, "Five*");
         break;
         case 'T': case 't': strcpy(hotelType1, "Three*");
         break;
         case 'O': case 'o': strcpy(hotelType1, "Ordinary");
         break;
     }
     getchar();
     system("clear");

     //Data/Input/Prompt user for meal information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE TYPE OF FOOD:\n\nV for Veg\n\nN for Non-Veg\n\nC for Continental \n");
     printf("\n");
     scanf("%c", &foodType);//Read and store meal information
      switch(foodType)
     {
         case 'V': case 'v': strcpy(foodType1, "Vegetarian");
         break;
         case 'N': case 'n': strcpy(foodType1, "Non-Veg");
         break;
         case 'C': case 'c': strcpy(foodType1, "Continental");
         break;
     }
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

     //Data/Input/Prompt user for number of days of stay information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE NUMBER OF DAYS OF STAY \n");
     printf("\n");
     scanf("%d", &days);//Read and store stay information
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
     printf("TOTAL EXPENSES TO TRAVEL from %s to %s ", sourceCity1, destinationCity1);
     printf("\n");
     printf("\n");
     printf("***************************************************");
     printf("\n");
     printf("\n");
     printf("TRANSPORTATION CHARGES (%s) = \n", modeofTranspo1);
     printf("\n");
     printf("NUMBER OF DAYS OF STAY (%s) = %d \n", hotelType1, days);
     printf("\n");
     printf("NUMBER OF MEALS IN A DAY (%s) = %d \n", foodType1, meals);
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
