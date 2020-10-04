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

     //Variable Declaration
     int days, meals,roomCharges, hotelCharges, foodCharges, transpoCharges, totalCharges;
     char sourceCity, sourceCity1[20], destinationCity, destinationCity1[20], modeofTranspo, modeofTranspo1[10], hotelType, hotelType1[10], foodType, foodType1[10];

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
     scanf("%c", &sourceCity);//Read and store destination city
     getchar();
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
     system("clear");

     //Data/Input/Prompt user for destination city information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE DESTINATION CITY:\n\nD for Denver\n\nM for Madison\n\nC for Clarksville\n\nK for Knoxville\n\n");
     printf("\n");
     scanf("%c", &destinationCity);//Read and store destination city
     getchar();
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
     system("clear");

     //Data/Input/Prompt user for mode of transportation information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE MODE OF TRANSPORT:\n\nA for Air\n\nR for Train\n\nB for Bus\n\n");
     printf("\n");
     scanf("%c", &modeofTranspo);//Read and store mode of transportation
     getchar();
     switch(modeofTranspo)
     {
         case 'A': case 'a': strcpy(modeofTranspo1, "Air");
         break;
         case 'T': case 't': strcpy(modeofTranspo1, "Train");
         break;
         case 'B': case 'b': strcpy(modeofTranspo1, "Bus");
         break;
     }
     system("clear");

     //Data/Input/Prompt user for hotel information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE TYPE OF HOTEL:\n\nF for Five Star\n\nT for Three Star\n\nO for Ordinary\n\n");
     printf("\n");
     scanf("%c", &hotelType);//Read and store hotel information
     getchar();
     switch(hotelType)
     {
         case 'F': case 'f': strcpy(hotelType1, "Five*");
         break;
         case 'T': case 't': strcpy(hotelType1, "Three*");
         break;
         case 'O': case 'o': strcpy(hotelType1, "Ordinary");
         break;
     }
     system("clear");

     //Data/Input/Prompt user for meal information
     printf("\n");
     printf("\n");
     printf("\n");
     printf("ENTER THE TYPE OF FOOD:\n\nV for Veg\n\nN for Non-Veg\n\nC for Continental \n");
     printf("\n");
     scanf("%c", &foodType);//Read and store meal information
     getchar();
     switch(foodType)
     {
         case 'V': case 'v': strcpy(foodType1, "Vegetarian");
         break;
         case 'N': case 'n': strcpy(foodType1, "Non-Veg");
         break;
         case 'C': case 'c': strcpy(foodType1, "Continental");
         break;
     }
     system("clear");

     //Data/Input/Prompt user for number of meals to take in hotel
     printf("\n");
     printf("\n");
     printf("\n");
     printf("HOW MANY MEALS WOULD YOU LIKE TO TAKE IN THE HOTEL? \n");
     printf("\n");
     scanf("%d", &meals);//Read and store number of meals to take in hotel
     getchar();
     //system("clear");
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


     //Calculations for transportation
     switch(sourceCity)
     {
		//Baltimore to Denver
		case 'B': case 'b':
			if(destinationCity == 'D' || destinationCity == 'd')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 5000;
						break;
                    case 'T': case 't':
						transpoCharges = 2500;
						break;
                    case 'B': case 'b':
						transpoCharges = 2000;
						break;
				}
			}
     }
     switch(sourceCity)
     {
		//Baltimore to Madison
		case 'B': case 'b':
			if(destinationCity == 'M' || destinationCity == 'm')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 4000;
						break;
                    case 'T': case 't':
						transpoCharges = 2000;
						break;
                    case 'B': case 'b':
						transpoCharges = 1000;
						break;
				}
			}
     }
     switch(sourceCity)
     {
		//Baltimore to Knoxville
		case 'B': case 'b':
			if(destinationCity == 'K' || destinationCity == 'k')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 5000;
						break;
                    case 'T': case 't':
						transpoCharges = 2500;
						break;
                    case 'B': case 'b':
						transpoCharges = 2000;
						break;
				}
			}
     }
     switch(sourceCity)
     {
		//Baltimore to Clarkson
		case 'B': case 'b':
			if(destinationCity == 'C' || destinationCity == 'c')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 2500;
						break;
                    case 'T': case 't':
						transpoCharges = 800;
						break;
                    case 'B': case 'b':
						transpoCharges = 1000;
						break;
				}
			}
     }

     switch(sourceCity)
     {
		//Nashville to Denver
		case 'N': case 'n':
			if(destinationCity == 'D' || destinationCity == 'd')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 5000;
						break;
                    case 'T': case 't':
						transpoCharges = 1500;
						break;
                    case 'B': case 'b':
						transpoCharges = 1400;
						break;
				}
			}
     }

     switch(sourceCity)
     {
		//Nashville to Madison
		case 'N': case 'n':
			if(destinationCity == 'M' || destinationCity == 'm')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 2500;
						break;
                    case 'T': case 't':
						transpoCharges = 900;
						break;
                    case 'B': case 'b':
						transpoCharges = 700;
						break;
				}
			}
     }

     switch(sourceCity)
     {
		//Nashville to Knoxville
		case 'N': case 'n':
			if(destinationCity == 'K' || destinationCity == 'k')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 4000;
						break;
                    case 'T': case 't':
						transpoCharges = 1500;
						break;
                    case 'B': case 'b':
						transpoCharges = 1000;
						break;
				}
			}
     }
     switch(sourceCity)
     {
		//Nashville to Clarkson
		case 'N': case 'n':
			if(destinationCity == 'C' || destinationCity == 'c')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 4500;
						break;
                    case 'T': case 't':
						transpoCharges = 1700;
						break;
                    case 'B': case 'b':
						transpoCharges = 1300;
						break;
				}
			}
     }

     switch(sourceCity)
     {
		//Chattanooga to Denver
		case 'C': case 'c':
			if(destinationCity == 'D' || destinationCity == 'd')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 2500;
						break;
                    case 'T': case 't':
						transpoCharges = 500;
						break;
                    case 'B': case 'b':
						transpoCharges = 600;
						break;
				}
			}
     }
     switch(sourceCity)
     {
		//Chattanooga to Madison
		case 'C': case 'c':
			if(destinationCity == 'M' || destinationCity == 'm')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 4000;
						break;
                    case 'T': case 't':
						transpoCharges = 2300;
						break;
                    case 'B': case 'b':
						transpoCharges = 1300;
						break;
				}
			}
     }
     switch(sourceCity)
     {
		//Chattanooga to Knoxville
		case 'C': case 'c':
			if(destinationCity == 'K' || destinationCity == 'k')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 4000;
						break;
                    case 'T': case 't':
						transpoCharges = 1600;
						break;
                    case 'B': case 'b':
						transpoCharges = 1400;
						break;
				}
			}
     }
     switch(sourceCity)
     {
		//Chattanooga to Clarkson
		case 'C': case 'c':
			if(destinationCity == 'C' || destinationCity == 'c')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 6000;
						break;
                    case 'T': case 't':
						transpoCharges = 2000;
						break;
                    case 'B': case 'b':
						transpoCharges = 1700;
						break;
				}
			}
     }
     switch(sourceCity)
     {
		//Pasadena to Denver
		case 'P': case 'p':
			if(destinationCity == 'D' || destinationCity == 'd')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 5000;
						break;
                    case 'T': case 't':
						transpoCharges = 2000;
						break;
                    case 'B': case 'b':
						transpoCharges = 1400;
						break;
				}
			}
     }
     switch(sourceCity)
     {
		//Pasadena to Madison
		case 'P': case 'p':
			if(destinationCity == 'M' || destinationCity == 'm')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 4500;
						break;
                    case 'T': case 't':
						transpoCharges = 1900;
						break;
                    case 'B': case 'b':
						transpoCharges = 1300;
						break;
				}
			}
     }
     switch(sourceCity)
     {
		//Pasadena to Knoxville
		case 'P': case 'p':
			if(destinationCity == 'K' || destinationCity == 'k')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 3000;
						break;
                    case 'T': case 't':
						transpoCharges = 1200;
						break;
                    case 'B': case 'b':
						transpoCharges = 800;
						break;
				}
			}
     }
     switch(sourceCity)
     {
		//Pasadena to Clarkson
		case 'P': case 'p':
			if(destinationCity == 'C' || destinationCity == 'c')
			{
				switch(modeofTranspo)
				{
					case 'A': case 'a':
						transpoCharges = 4500;
						break;
                    case 'T': case 't':
						transpoCharges = 1700;
						break;
                    case 'B': case 'b':
						transpoCharges = 1300;
						break;
				}
			}
     }

     //Calculations for room charges
     switch(hotelType)
     {
		case 'F': case 'f':
            roomCharges = 500;
            break;
        case 'T': case 't':
            roomCharges = 300;
            break;
        case 'O': case 'o':
            roomCharges = 100;
            break;
     }

     //Calculations for food charges
     switch(foodType)
     {
		case 'V': case 'v':
            foodCharges = 15;
            break;
        case 'N': case 'n':
            foodCharges = 30;
            break;
        case 'C': case 'c':
            foodCharges = 10;
            break;
     }

     //Formulas
     roomCharges = (days * roomCharges);
     foodCharges = (days * foodCharges);
     totalCharges = (transpoCharges + roomCharges + foodCharges);


     //Output
     printf("\n");
     printf("\n");
     printf("***************************************************");
     printf("\n");
     printf("\n");
     printf("TOTAL EXPENSES TO TRAVEL from %s to %s",sourceCity1,destinationCity1);
     printf("\n");
     printf("\n");
     printf("***************************************************");
     printf("\n");
     printf("\n");
     printf("TRANSPORTATION CHARGES (%s) = %d \n", modeofTranspo1, transpoCharges);
     printf("\n");
     printf("NUMBER OF DAYS OF STAY (%s) = %d \n", hotelType1, days);
     printf("\n");
     printf("NUMBER OF MEALS IN A DAY (%s) = %d \n", foodType1, meals);
     printf("\n");
     printf("ROOM CHARGES = %d \n", roomCharges);
     printf("\n");
     printf("FOOD CHARGES = %d \n", foodCharges);
     printf("\n");
     printf("\n");
     printf("***************************************************");
     printf("\n");
     printf("\n");
     printf("TOTAL CHARGES = %d", totalCharges);
     printf("\n");
     printf("\n");
     printf("***************************************************");
     printf("\n");

     return 0;

} //End function main

/*
Test Run 1
TOTAL EXPENSES TO TRAVEL from Baltimore to Madison

***************************************************

TRANSPORTATION CHARGES (Train) = 2000

NUMBER OF DAYS OF STAY (Ordinary) = 5

NUMBER OF MEALS IN A DAY (Non-Veg) = 4

ROOM CHARGES = 500

FOOD CHARGES = 150


***************************************************

TOTAL CHARGES = 2650

***************************************************

Test Run 2

Test Run 3

Test Run 4

Test Run 5

*/

