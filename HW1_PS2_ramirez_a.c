/****************************************************/
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Homework 1 Program Set 2                         */
/* Date: 09/10/20                                   */
/* This Program maintains information about your    */
/* stocks.                                          */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
     /*Declaration*/
     int numShare;
     double buyPrice, iniCost, curPrice, curCost, yrFee, Prof;
     char name[4], stock1[15], stock2[15], stock3[15], stock4[15], stock5[15]  ;

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
     printf("%s Let's get started with your first stock pick..\n", name);
     printf("\n");

     /*Prompt user for stock information*/
     printf("Please enter your five stocks:  ");
     scanf("%s%s%s%s%s", &stock1, &stock2, &stock3, &stock4, &stock5);/*Read and store stock name*/
     printf("Please enter the number of stock shares: ");
     scanf("%d", &numShare);/*Read and store amount of stock shares*/
     printf("Please enter the buy price: ");
     scanf("%d", &buyPrice);/*Read and store buy price*/
     printf("Please enter the current price: ");
     scanf("%d", &curPrice);/*Read and store current price*/
     printf("Please enter the yearly fee: ");
     scanf("%d", &yrFee);/*Read and store yearly fee*/
     printf("\n");

     /*Processing*/
     iniCost = numShare * buyPrice;/*calculates initial stock cost*/
     curCost = numShare * curPrice;/*calculates current stock cost*/
     Prof = curCost - iniCost - yrFee;/*calculates profits*/

     /*Output*/
     printf("********************************************************\n");
     printf("                         Stock 1                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:            %s\n", stock1);
     printf("The initial stock cost is:    $%.2f\n", iniCost);
     printf("The current stock cost is:    $%.2f\n", curCost);
     printf("Your current profits are:     $%.2f\n", Prof);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 2                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:            %s\n", stock2);
     printf("The initial stock cost is:    $%.2f\n", iniCost);
     printf("The current stock cost is:    $%.2f\n", curCost);
     printf("Your current profits are:     $%.2f\n", Prof);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 3                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:            %s\n", stock3);
     printf("The initial stock cost is:    $%.2f\n", iniCost);
     printf("The current stock cost is:    $%.2f\n", curCost);
     printf("Your current profits are:     $%.2f\n", Prof);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 4                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:            %s\n", stock4);
     printf("The initial stock cost is:    $%.2f\n", iniCost);
     printf("The current stock cost is:    $%.2f\n", curCost);
     printf("Your current profits are:     $%.2f\n", Prof);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 5                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:            %s\n", stock5);
     printf("The initial stock cost is:    $%.2f\n", iniCost);
     printf("The current stock cost is:    $%.2f\n", curCost);
     printf("Your current profits are:     $%.2f\n", Prof);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Total Profits                  \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The total profits for all five stocks is:     $%.2f\n", Prof);
     printf("\n");

     /*Closing Statement*/
     printf("\nI hope that you enjoyed my second HW program...you take care!\n ");

     return 0;

} /*End function main*/
