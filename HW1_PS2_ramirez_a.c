/****************************************************/
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Homework 1 Program Set 2                         */
/* Date: 09/11/20                                   */
/* This Program maintains information about your    */
/* stocks.                                          */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
     /*Declaration*/
     int numShare1, numShare2, numShare3, numShare4, numShare5;
     float buyPrice1, buyPrice2, buyPrice3, buyPrice4, buyPrice5, iniCost1, iniCost2, iniCost3, iniCost4, iniCost5;
     float curPrice1, curPrice2, curPrice3, curPrice4, curPrice5, curCost1, curCost2, curCost3, curCost4, curCost5;
     float yrFee1, yrFee2, yrFee3, yrFee4, yrFee5, Prof1, Prof2, Prof3, Prof4, Prof5, ProfT;
     char name[15], stock1[15], stock2[15], stock3[15], stock4[15], stock5[15];

     /*Opening Statement*/
     printf("Hello, welcome to my second HW lab!\n");
     printf("\n");

     /*Introduction*/
     printf("What is your name?\n");
     gets(name);
     printf("\n");

     /*Follow-up Statement*/
     printf("It is nice to meet you %s!\n", name);
     printf("\n");
     printf("%s Let's get started with your five stock picks..\n", name);
     printf("\n");

     /*Prompt user for stock information*/
     printf("Please enter your five stocks: ");
     scanf("%s%s%s%s%s", &stock1, &stock2, &stock3, &stock4, &stock5);/*Read and store stock name*/
     printf("Please enter the number of stock shares for each stock: ");
     scanf("%d%d%d%d%d", &numShare1, &numShare2, &numShare3, &numShare4, &numShare5);/*Read and store amount of stock shares*/
     printf("Please enter the buy price: ");
     scanf("%f%f%f%f%f", &buyPrice1, &buyPrice2, &buyPrice3, &buyPrice4, &buyPrice5);/*Read and store buy price*/
     printf("Please enter the current price: ");
     scanf("%f%f%f%f%f", &curPrice1, &curPrice2, &curPrice3, &curPrice4, &curPrice5);/*Read and store current price*/
     printf("Please enter the yearly fee: ");
     scanf("%f%f%f%f%f", &yrFee1, &yrFee2, &yrFee3, &yrFee4, &yrFee5);/*Read and store yearly fee*/
     printf("\n");

     /*Processing*/

     /*Output*/
     printf("********************************************************\n");
     printf("                         Stock 1                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:               %s\n",stock1);
     printf("The number of shares for %s is:%4d\n",stock1,numShare1);
     printf("The buy price for  %s is:       $%3.2f\n",stock1,buyPrice1);
     printf("The current price for %s is:    $%3.2f\n",stock1,curPrice1);
     printf("The yearly fee for %s is:       $%3.2f\n",stock1,yrFee1);
     /*Processing*/
     iniCost1 = numShare1 * buyPrice1;/*calculates initial stock cost*/
     curCost1 = numShare1 * curPrice1;/*calculates current stock cost*/
     Prof1 = curCost1 - iniCost1 - yrFee1;/*calculates profits*/
     printf("The initial stock cost is:       $%3.2f\n", iniCost1);
     printf("The current stock cost is:       $%3.2f\n", curCost1);
     printf("Your current profits are:        $%3.2f\n", Prof1);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 2                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:                  %s\n",stock2);
     printf("The number of shares for %s is:%4d\n",stock2,numShare2);
     printf("The buy price for  %s is:       $%3.2f\n",stock2,buyPrice2);
     printf("The current price for %s is:    $%3.2f\n",stock2,curPrice2);
     printf("The yearly fee for %s is:       $%3.2f\n",stock2,yrFee2);
     /*Processing*/
     iniCost2 = numShare2 * buyPrice2;/*calculates initial stock cost*/
     curCost2 = numShare2 * curPrice2;/*calculates current stock cost*/
     Prof2 = curCost2 - iniCost2 - yrFee2;/*calculates profits*/
     printf("The initial stock cost is:          $%3.2f\n", iniCost2);
     printf("The current stock cost is:          $%3.2f\n", curCost2);
     printf("Your current profits are:           $%3.2f\n", Prof2);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 3                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:                    %s\n",stock3);
     printf("The number of shares for %s is:%4d\n",stock3,numShare3);
     printf("The buy price for  %s is:       $%3.2f\n",stock3,buyPrice3);
     printf("The current price for %s is:    $%3.2f\n",stock3,curPrice3);
     printf("The yearly fee for %s is:       $%3.2f\n",stock3,yrFee3);
     /*Processing*/
     iniCost3 = numShare3 * buyPrice3;/*calculates initial stock cost*/
     curCost3 = numShare3 * curPrice3;/*calculates current stock cost*/
     Prof3 = curCost3 - iniCost3 - yrFee3;/*calculates profits*/
     printf("The initial stock cost is:            $%3.2f\n", iniCost3);
     printf("The current stock cost is:            $%3.2f\n", curCost3);
     printf("Your current profits are:             $%3.2f\n", Prof3);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 4                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:                   %s\n",stock4);
     printf("The number of shares for %s is:%4d\n",stock4,numShare4);
     printf("The buy price for  %s is:       $%3.2f\n",stock4,buyPrice4);
     printf("The current price for %s is:    $%3.2f\n",stock4,curPrice4);
     printf("The yearly fee for %s is:       $%3.2f\n",stock4,yrFee4);
     /*Processing*/
     iniCost4 = numShare4 * buyPrice4;/*calculates initial stock cost*/
     curCost4 = numShare4 * curPrice4;/*calculates current stock cost*/
     Prof4 = curCost4 - iniCost4 - yrFee4;/*calculates profits*/
     printf("The initial stock cost is:           $%3.2f\n", iniCost4);
     printf("The current stock cost is:           $%3.2f\n", curCost4);
     printf("Your current profits are:            $%3.2f\n", Prof4);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 5                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:                 %s\n",stock5);
     printf("The number of shares for %s is:%4d\n",stock5,numShare5);
     printf("The buy price for  %s is:       $%3.2f\n",stock5,buyPrice5);
     printf("The current price for %s is:    $%3.2f\n",stock5,curPrice5);
     printf("The yearly fee for %s is:       $%3.2f\n",stock5,yrFee5);
     /*Processing*/
     iniCost5 = numShare5 * buyPrice5;/*calculates initial stock cost*/
     curCost5 = numShare5 * curPrice5;/*calculates current stock cost*/
     Prof5 = curCost5 - iniCost5 - yrFee5;/*calculates profits*/
     printf("The initial stock cost is:         $%3.2f\n", iniCost5);
     printf("The current stock cost is:         $%3.2f\n", curCost5);
     printf("Your current profits are:          $%3.2f\n", Prof5);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Total Profits                  \n");
     printf("********************************************************\n");
     printf("\n");
     /*Processing*/
     ProfT = Prof1 + Prof2 + Prof3 + Prof4 + Prof5;/*calculates total profits for all five stocks*/
     printf("The total profits for all five stocks is: $%3.2f\n",ProfT);
     printf("\n");

     /*Closing Statement*/
     printf("\nI hope that you enjoyed my second HW program...you take care!\n ");

     return 0;

} /*End function main*/

/*

Test Run

Hello, welcome to my second HW lab!

What is your name?
Vanessa

It is nice to meet you Vanessa!

Vanessa Let's get started with your five stock picks..

Please enter your five stocks: IBM ORACLE SUNMICRO LINKSYS CISCO
Please enter the number of stock shares for each stock: 155 375 350 85 50
Please enter the buy price: 15.33 11.77 27.55 25.35 45.36
Please enter the current price: 13.33 12.25 35.75 23.34 50.86
Please enter the yearly fee: 5.00 3.50 12.25 6.00 1.50

********************************************************
                         Stock 1
********************************************************

The stock name is:               IBM
The number of shares for IBM is: 155
The buy price for  IBM is:       $15.33
The current price for IBM is:    $13.33
The yearly fee for IBM is:       $5.00
The initial stock cost is:       $2376.15
The current stock cost is:       $2066.15
Your current profits are:        $-315.00

********************************************************
                         Stock 2
********************************************************

The stock name is:                  ORACLE
The number of shares for ORACLE is: 375
The buy price for  ORACLE is:       $11.77
The current price for ORACLE is:    $12.25
The yearly fee for ORACLE is:       $3.50
The initial stock cost is:          $4413.75
The current stock cost is:          $4593.75
Your current profits are:           $176.50

********************************************************
                         Stock 3
********************************************************

The stock name is:                    SUNMICRO
The number of shares for SUNMICRO is: 350
The buy price for  SUNMICRO is:       $27.55
The current price for SUNMICRO is:    $35.75
The yearly fee for SUNMICRO is:       $12.25
The initial stock cost is:            $9642.50
The current stock cost is:            $12512.50
Your current profits are:             $2857.75

********************************************************
                         Stock 4
********************************************************

The stock name is:                   LINKSYS
The number of shares for LINKSYS is:  85
The buy price for  LINKSYS is:       $25.35
The current price for LINKSYS is:    $23.34
The yearly fee for LINKSYS is:       $6.00
The initial stock cost is:           $2154.75
The current stock cost is:           $1983.90
Your current profits are:            $-176.85

********************************************************
                         Stock 5
********************************************************

The stock name is:                 CISCO
The number of shares for CISCO is:  50
The buy price for  CISCO is:       $45.36
The current price for CISCO is:    $50.86
The yearly fee for CISCO is:       $1.50
The initial stock cost is:         $2268.00
The current stock cost is:         $2543.00
Your current profits are:          $273.50

********************************************************
                         Total Profits
********************************************************

The total profits for all five stocks is: $2815.90


I hope that you enjoyed my second HW program...you take care!


*/
