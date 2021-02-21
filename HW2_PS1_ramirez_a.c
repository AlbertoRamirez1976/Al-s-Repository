/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 2 Program Set 1                          */
/* Date: 2/20/21                                     */
/* This Program calculates the amount of tax due.    */
/*****************************************************/

#include<stdio.h>


int main()
{
    int status;
    int TI;
    double singleTax, marriedjointTax, marriedseparateTax, headofHouseholdTax;

    //Input section with a menu with the use of a 'while' loop statement
    while(status != 5)
    {
        printf("*********Menu*********************\n");
        printf("1) Single\n");
        printf("2) Married Filing Jointly\n");
        printf("3) Married Filing Separately\n");
        printf("4) Head of Household\n");
        printf("5) Exit\n");
        printf("**********************************\n");

        printf("\nEnter status: ");
        scanf("%d", &status);
        getchar();

        //Declaration statement to limit input to no more than the number 5.
        if(status < 1 || status > 5)
          {
            printf("\nYou entered a wrong status. Program Exit...\n");
            return 0;
          }
            if (status != 5)
                {
                 printf("Enter your taxable income: $");
                 scanf("%d", &TI);
                }

    //Processing/Calculations for single status
    if(0 < TI && TI <= 24000)
        {
        singleTax = 0.15f * TI;

        }
	else if(24000 < TI && TI <= 58000)
          {
          singleTax = 3600.00f + 0.28 * (TI - 24000);

          }
	    else if(58000 < TI && TI <= 121300)
              {
              singleTax = 13162.00f + 0.31 * (TI - 58000);

              }
            else if(121300 < TI && TI <= 263750)
              {
       		  singleTax = 32738.50f + 0.36 * (TI - 121300);
       		  }
    		else if (263750 < (TI))
              {
      		  singleTax = 84020.50f + 0.396 * (TI - 263750);
      		  }
      		  else;

    //Processing/Calculations for Married Filing Jointly status
    if(0 < TI && TI <= 40100)
        {
        marriedjointTax = 0.15f * (TI);
        }
	else if(40100 < TI && TI <= 96900)
          {
          marriedjointTax = 6015.0f + 0.28 * (TI - 40100);
          }
	    else if(96900 < TI && TI <= 147700)
              {
              marriedjointTax = 21919.0f + 0.31 * (TI - 96900);
              }
            else if(147700 < TI && TI <= 263750)
              {
       		  marriedjointTax = 37667.0f + 0.36 * (TI - 147700);
       		  }
    		else if(263750 < (TI))
              {
      		  marriedjointTax = 79445.0f + 0.396 * (TI - 263750);
      		  }
      		  else;

    //Processing/Calculations for Married Filing Separately status
    if(0 < TI && TI <= 20050)
        {
        marriedseparateTax = 0.15f * (TI);
        }
	else if(20050 < TI && TI <= 48450)
           {
           marriedseparateTax = 3007.5f + 0.28 * (TI - 20050);
           }
	    else if(48050 < TI && TI <= 73850)
               {
               marriedseparateTax = 10959.5f + 0.31 * (TI - 48450);
               }
            else if(73850 < TI && TI <= 131875)
               {
       		   marriedseparateTax = 18833.5f + 0.36 * (TI - 73850);
       		   }
    		else if(131875 < (TI))
               {
      		   marriedseparateTax = 39722.5f + 0.396 * (TI - 131875);
      		   }
      		   else;

    //Processing/Calculations for Head of Household status
    if(0 < TI && TI <= 32150)
        {
        headofHouseholdTax = 0.15f * (TI);
        }
	else if(32150 < TI && TI <= 83050)
            {
            headofHouseholdTax = 4822.5f + 0.28 * (TI - 32150);
            }
	    else if(83050 < TI && TI <= 134500)
                {
                headofHouseholdTax = 19074.5f + 0.31 * (TI - 83050);
                }
            else if(134500 < TI && TI <= 263750)
                {
       		    headofHouseholdTax = 35074.0f + 0.36 * (TI - 134500);
       		    }
    		else if (263750 < (TI))
                {
      		    headofHouseholdTax = 81554.0f + 0.396 * (TI - 263750);
      		    }
      		    else;

        //Switch statement for taxable income choices
        switch(status)
        {
            case 1:
                printf("The taxes owed are $%.2f\n", singleTax);
                break;
            case 2:
                printf("The taxes owed are $%.2f\n", marriedjointTax);
                break;
            case 3:
                 printf("The taxes owed are $%.2f\n", marriedseparateTax);
                break;
            case 4:
                printf("The taxes owed are $%.2f\n", headofHouseholdTax);
                break;
            case 5:
                printf("\nExit program...\n");
                break;
            default:
                break;
        }
        printf("\n");


    getchar();
    getchar();

    }
    return 0;
}

//Output
//
//Test Run 1
//*********Menu*********************
//1) Single
//2) Married Filing Jointly
//3) Married Filing Separately
//4) Head of Household
//5) Exit
//**********************************
//
//Enter status: 1
//Enter your taxable income: $50000
//The taxes owed are $10880.00


//Output
//
//Test Run 2
//*********Menu*********************
//1) Single
//2) Married Filing Jointly
//3) Married Filing Separately
//4) Head of Household
//5) Exit
//**********************************
//
//Enter status: 5
//
//Exit program...

//Output
//
//Test Run 3
//*********Menu*********************
//1) Single
//2) Married Filing Jointly
//3) Married Filing Separately
//4) Head of Household
//5) Exit
//**********************************
//
//Enter status: a
//
//You entered a wrong status. Program Exit...

//Output
//
//Test Run 4
//*********Menu*********************
//1) Single
//2) Married Filing Jointly
//3) Married Filing Separately
//4) Head of Household
//5) Exit
//**********************************
//
//Enter status: 7
//
//You entered a wrong status. Program Exit...

//Output
//
//Test Run 5
//*********Menu*********************
//1) Single
//2) Married Filing Jointly
//3) Married Filing Separately
//4) Head of Household
//5) Exit
//**********************************
//
//Enter status: 2
//Enter your taxable income: $147701
//The taxes owed are $37667.36

//Output
//
//Test Run 6
//*********Menu*********************
//1) Single
//2) Married Filing Jointly
//3) Married Filing Separately
//4) Head of Household
//5) Exit
//**********************************
//
//Enter status: 3
//Enter your taxable income: $130875
//The taxes owed are $39362.50

//Output
//
//Test Run 7
//*********Menu*********************
//1) Single
//2) Married Filing Jointly
//3) Married Filing Separately
//4) Head of Household
//5) Exit
//**********************************
//
//Enter status: 4
//Enter your taxable income: $262750
//The taxes owed are $81244.00

//Output
//
//Test Run 8
//*********Menu*********************
//1) Single
//2) Married Filing Jointly
//3) Married Filing Separately
//4) Head of Household
//5) Exit
//**********************************
//
//Enter status: 4
//Enter your taxable income: $999999
//The taxes owed are $373108.60

