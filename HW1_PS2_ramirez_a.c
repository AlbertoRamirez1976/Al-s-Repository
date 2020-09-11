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
     int numShare1, numShare2, numShare3, numShare4, numShare5;
     double buyPrice1, buyPrice2, buyPrice3, buyPrice4, buyPrice5, iniCost1, iniCost2, iniCost3, iniCost4, iniCost5;
     double curPrice1, curPrice2, curPrice3, curPrice4, curPrice5, curCost1, curCost2, curCost3, curCost4, curCost5;
     double yrFee1, yrFee2, yrFee3, yrFee4, yrFee5, Prof1, Prof2, Prof3, Prof4, Prof5, ProfT;
     char name[4], stock1[15], stock2[15], stock3[15], stock4[15], stock5[15];

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
     printf("Please enter your five stocks:");
     scanf("%s%s%s%s%s", &stock1, &stock2, &stock3, &stock4, &stock5);/*Read and store stock name*/
     printf("Please enter the number of stock shares for each stock:");
     scanf("%d%d%d%d%d", &numShare1, &numShare2, &numShare3, &numShare4, &numShare5);/*Read and store amount of stock shares*/
     printf("Please enter the buy price:");
     scanf("%d%d%d%d%d", &buyPrice1, &buyPrice2, &buyPrice3, &buyPrice4, &buyPrice5);/*Read and store buy price*/
     printf("Please enter the current price:");
     scanf("%d%d%d%d%d", &curPrice1, &curPrice2, &curPrice3, &curPrice4, &curPrice5);/*Read and store current price*/
     printf("Please enter the yearly fee:");
     scanf("%d%d%d%d%d", &yrFee1, &yrFee2, &yrFee3, &yrFee4, &yrFee5);/*Read and store yearly fee*/
     printf("\n");

     /*Processing*/

     /*Output*/
     printf("********************************************************\n");
     printf("                         Stock 1                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:            %s\n", stock1);
     printf("The number of shares for %s is: %2.2f\n",stock1, numShare1);
     printf("The buy price for  %s is:       $%2.2f\n",stock1, buyPrice1);
     printf("The current price for %s is:    $%2.2f\n",stock1, curPrice1);
     printf("The yearly fee for %s is:       $%2.2f\n",stock1, yrFee1);
     /*Processing*/
     iniCost1 = numShare1 * buyPrice1;/*calculates initial stock cost*/
     curCost1 = numShare1 * curPrice1;/*calculates current stock cost*/
     Prof1 = curCost1 - iniCost1 - yrFee1;/*calculates profits*/
     printf("The initial stock cost is:    $%2.2f\n", iniCost1);
     printf("The current stock cost is:    $%2.2f\n", curCost1);
     printf("Your current profits are:     $%2.2f\n", Prof1);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 2                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:            %s\n", stock2);
     /*Processing*/
     iniCost2 = numShare2 * buyPrice2;/*calculates initial stock cost*/
     curCost2 = numShare2 * curPrice2;/*calculates current stock cost*/
     Prof2 = curCost2 - iniCost2 - yrFee2;/*calculates profits*/
     printf("The initial stock cost is:    $%2.2f\n", iniCost2);
     printf("The current stock cost is:    $%2.2f\n", curCost2);
     printf("Your current profits are:     $%2.2f\n", Prof2);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 3                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:            %s\n", stock3);
     /*Processing*/
     iniCost3 = numShare3 * buyPrice3;/*calculates initial stock cost*/
     curCost3 = numShare3 * curPrice3;/*calculates current stock cost*/
     Prof3 = curCost3 - iniCost3 - yrFee3;/*calculates profits*/
     printf("The initial stock cost is:    $%2.2f\n", iniCost3);
     printf("The current stock cost is:    $%2.2f\n", curCost3);
     printf("Your current profits are:     $%2.2f\n", Prof3);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 4                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:            %s\n", stock4);
     /*Processing*/
     iniCost4 = numShare4 * buyPrice4;/*calculates initial stock cost*/
     curCost4 = numShare4 * curPrice4;/*calculates current stock cost*/
     Prof4 = curCost4 - iniCost4 - yrFee4;/*calculates profits*/
     printf("The initial stock cost is:    $%2.2f\n", iniCost4);
     printf("The current stock cost is:    $%2.2f\n", curCost4);
     printf("Your current profits are:     $%2.2f\n", Prof4);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Stock 5                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:            %s\n", stock5);
     /*Processing*/
     iniCost5 = numShare5 * buyPrice5;/*calculates initial stock cost*/
     curCost5 = numShare5 * curPrice5;/*calculates current stock cost*/
     Prof5 = curCost5 - iniCost5 - yrFee5;/*calculates profits*/
     printf("The initial stock cost is:    $%2.2f\n", iniCost5);
     printf("The current stock cost is:    $%2.2f\n", curCost5);
     printf("Your current profits are:     $%2.2f\n", Prof5);
     printf("\n");
     printf("********************************************************\n");
     printf("                         Total Profits                  \n");
     printf("********************************************************\n");
     printf("\n");
     /*Processing*/
     ProfT = Prof1 + Prof2 + Prof3 + Prof4 + Prof5;/*calculates total profits for all five stocks*/
     printf("The total profits for all five stocks is:     $%2.2f\n",ProfT);
     printf("\n");

     /*Closing Statement*/
     printf("\nI hope that you enjoyed my second HW program...you take care!\n ");

     return 0;

} /*End function main*/
