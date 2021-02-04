/****************************************************/
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Homework 1 Program Set 2                         */
/* Date: 2/3/21                                     */
/* This Program maintains information about your    */
/* stocks.                                          */
/*                                                  */
/****************************************************/

#include<stdio.h>

int main()
{
     //Declaration
     int numShare1, numShare2, numShare3, numShare4, numShare5;
     float buyPrice1, buyPrice2, buyPrice3, buyPrice4, buyPrice5, iniCost1, iniCost2, iniCost3, iniCost4, iniCost5;
     float curPrice1, curPrice2, curPrice3, curPrice4, curPrice5, curCost1, curCost2, curCost3, curCost4, curCost5;
     float yrFee1, yrFee2, yrFee3, yrFee4, yrFee5, Prof1, Prof2, Prof3, Prof4, Prof5, ProfT;
     char stock1[13], stock2[13], stock3[13], stock4[13], stock5[13];

     //Data/Input
     printf("Enter stock name: ");
     gets(stock1);//Read and store stock name
     printf("Enter number of shares: ");
     scanf("%d", &numShare1);//Read and store amount of stock shares
     printf("Enter the buy price, current price, fees ");
     scanf("%f %f %f", &buyPrice1, &curPrice1, &yrFee1);//Read and store buy price, current price, and yearly fee
     printf("\n");
     getchar();

     //Data/Input
     printf("Enter stock name: ");
     gets(stock2);//Read and store stock name
     printf("Enter number of shares: ");
     scanf("%d", &numShare2);//Read and store amount of stock shares
     printf("Enter the buy price, current price, fees ");
     scanf("%f %f %f", &buyPrice2, &curPrice2, &yrFee2);//Read and store buy price, current price, and yearly fee
     printf("\n");
     getchar();

     //Data/Input
     printf("Enter stock name: ");
     gets(stock3);//Read and store stock name
     printf("Enter number of shares: ");
     scanf("%d", &numShare3);//Read and store amount of stock shares
     printf("Enter the buy price, current price, fees ");
     scanf("%f %f %f", &buyPrice3, &curPrice3, &yrFee3);//Read and store buy price, current price, and yearly fee
     printf("\n");
     getchar();

     //Data/Input
     printf("Enter stock name: ");
     gets(stock4);//Read and store stock name
     printf("Enter number of shares: ");
     scanf("%d", &numShare4);//Read and store amount of stock shares
     printf("Enter the buy price, current price, fees ");
     scanf("%f %f %f", &buyPrice4, &curPrice4, &yrFee4);//Read and store buy price, current price, and yearly fee
     printf("\n");
     getchar();

     //Data/Input
     printf("Enter stock name: ");
     gets(stock5);//Read and store stock name
     printf("Enter number of shares: ");
     scanf("%d", &numShare5);//Read and store amount of stock shares
     printf("Enter the buy price, current price, fees ");
     scanf("%f %f %f", &buyPrice5, &curPrice5, &yrFee5);//Read and store buy price, current price, and yearly fee
     printf("\n");
     getchar();

     //Calculations/Processing/Output per stock
     printf("********************************************************\n");
     printf("                         Stock 1                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:               %s\n",stock1);
     printf("The number of shares:            %d\n",numShare1);
     printf("The buy price is:                $%3.2f\n",stock1,buyPrice1);
     printf("The current price is:            $%3.2f\n",stock1,curPrice1);
     printf("The fees are:                    $%3.2f\n",stock1,yrFee1);
     iniCost1 = numShare1 * buyPrice1;//calculates initial stock cost
     curCost1 = numShare1 * curPrice1;//calculates current stock cost
     Prof1 = curCost1 - iniCost1 - yrFee1;//calculates profits
     printf("\nThe initial cost is:             $%3.2f\n", iniCost1);
     printf("The current cost is:             $%3.2f\n", curCost1);
     printf("The profit is:                   $%3.2f\n", Prof1);
     printf("\n");

     //Calculations/Processing/Output per stock
     printf("********************************************************\n");
     printf("                         Stock 2                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:               %s\n",stock2);
     printf("The number of shares:            %d\n",numShare2);
     printf("The buy price is:                $%3.2f\n",stock2,buyPrice2);
     printf("The current price is:            $%3.2f\n",stock2,curPrice2);
     printf("The fees are:                    $%3.2f\n",stock2,yrFee2);
     iniCost2 = numShare2 * buyPrice2;//calculates initial stock cost
     curCost2 = numShare2 * curPrice2;//calculates current stock cost
     Prof2 = curCost2 - iniCost2 - yrFee2;//calculates profits
     printf("\nThe initial cost is:             $%3.2f\n", iniCost2);
     printf("The current cost is:             $%3.2f\n", curCost2);
     printf("The profit is:                   $%3.2f\n", Prof2);
     printf("\n");

     //Calculations/Processing/Output per stock
     printf("********************************************************\n");
     printf("                         Stock 3                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:               %s\n",stock3);
     printf("The number of shares:            %d\n",numShare3);
     printf("The buy price is:                $%3.2f\n",stock3,buyPrice3);
     printf("The current price is:            $%3.2f\n",stock3,curPrice3);
     printf("The fees are:                    $%3.2f\n",stock3,yrFee3);
     iniCost3 = numShare3 * buyPrice3;//calculates initial stock cost
     curCost3 = numShare3 * curPrice3;//calculates current stock cost
     Prof3 = curCost3 - iniCost3 - yrFee3;//calculates profits
     printf("\nThe initial cost is:             $%3.2f\n", iniCost3);
     printf("The current cost is:             $%3.2f\n", curCost3);
     printf("The profit is:                   $%3.2f\n", Prof3);
     printf("\n");

     //Calculations/Processing/Output per stock
     printf("********************************************************\n");
     printf("                         Stock 4                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:               %s\n",stock4);
     printf("The number of shares:            %d\n",numShare4);
     printf("The buy price is:                $%3.2f\n",stock4,buyPrice4);
     printf("The current price is:            $%3.2f\n",stock4,curPrice4);
     printf("The fees are:                    $%3.2f\n",stock4,yrFee4);
     iniCost4 = numShare4 * buyPrice4;//calculates initial stock cost
     curCost4 = numShare4 * curPrice4;//calculates current stock cost
     Prof4 = curCost4 - iniCost4 - yrFee4;//calculates profits
     printf("\nThe initial cost is:             $%3.2f\n", iniCost4);
     printf("The current cost is:             $%3.2f\n", curCost4);
     printf("The profit is:                   $%3.2f\n", Prof4);
     printf("\n");

     //Calculations/Processing/Output per stock
     printf("********************************************************\n");
     printf("                         Stock 5                        \n");
     printf("********************************************************\n");
     printf("\n");
     printf("The stock name is:               %s\n",stock5);
     printf("The number of shares:            %d\n",numShare5);
     printf("The buy price is:                $%3.2f\n",stock5,buyPrice5);
     printf("The current price is:            $%3.2f\n",stock5,curPrice5);
     printf("The fees are:                    $%3.2f\n",stock5,yrFee5);
     iniCost5 = numShare5 * buyPrice5;//calculates initial stock cost
     curCost5 = numShare5 * curPrice5;//calculates current stock cost
     Prof5 = curCost5 - iniCost5 - yrFee5;//calculates profits
     printf("\nThe initial cost is:             $%3.2f\n", iniCost5);
     printf("The current cost is:             $%3.2f\n", curCost5);
     printf("The profit is:                   $%3.2f\n", Prof5);
     printf("\n");

     //Final Calculations/Processing/Output for all five stocks
     printf("********************************************************\n");
     printf("                         Total Profits                  \n");
     printf("********************************************************\n");
     printf("\n");
     ProfT = Prof1 + Prof2 + Prof3 + Prof4 + Prof5;//calculates total profits for all five stocks
     printf("The total profits for all 5 stocks is: $%3.2f\n",ProfT);
     printf("\n");

     return 0;

}

//Output

//Test Run 1
//
//Enter stock name: IBM CORP
//Enter number of shares: 155
//Enter the buy price, current price, fees 15.33 13.33 5.00
//
//Enter stock name: ORACLE SYS
//Enter number of shares: 375
//Enter the buy price, current price, fees 11.77 12.25 3.50
//
//Enter stock name: SUN MICRO
//Enter number of shares: 350
//Enter the buy price, current price, fees 27.55 35.75 12.25
//
//Enter stock name: LINKSYS INC
//Enter number of shares: 85
//Enter the buy price, current price, fees 25.35 23.34 6.00
//
//Enter stock name: CISCO INC
//Enter number of shares: 50
//Enter the buy price, current price, fees 45.36 50.86 1.50
//
//********************************************************
//                         Stock 1
//********************************************************
//
//The stock name is:               IBM CORP
//The number of shares:            155
//The buy price is:                $15.33
//The current price is:            $13.33
//The fees are:                    $5.00
//
//The initial cost is:             $2376.15
//The current cost is:             $2066.15
//The profit is:                   $-315.00
//
//********************************************************
//                         Stock 2
//********************************************************
//
//The stock name is:               ORACLE SYS
//The number of shares:            375
//The buy price is:                $11.77
//The current price is:            $12.25
//The fees are:                    $3.50
//
//The initial cost is:             $4413.75
//The current cost is:             $4593.75
//The profit is:                   $176.50
//
//********************************************************
//                         Stock 3
//********************************************************
//
//The stock name is:               SUN MICRO
//The number of shares:            350
//The buy price is:                $27.55
//The current price is:            $35.75
//The fees are:                    $12.25
//
//The initial cost is:             $9642.50
//The current cost is:             $12512.50
//The profit is:                   $2857.75
//
//********************************************************
//                         Stock 4
//********************************************************
//
//The stock name is:               LINKSYS INC
//The number of shares:            85
//The buy price is:                $25.35
//The current price is:            $23.34
//The fees are:                    $6.00
//
//The initial cost is:             $2154.75
//The current cost is:             $1983.90
//The profit is:                   $-176.85
//
//********************************************************
//                         Stock 5
//********************************************************
//
//The stock name is:               CISCO INC
//The number of shares:            50
//The buy price is:                $45.36
//The current price is:            $50.86
//The fees are:                    $1.50
//
//The initial cost is:             $2268.00
//The current cost is:             $2543.00
//The profit is:                   $273.50
//
//********************************************************
//                         Total Profits
//********************************************************
//
// The total profits for all 5 stocks is: $2815.90

//Test Run 2
//
//Enter stock name: IBM CORP
//Enter number of shares: 145
//Enter the buy price, current price, fees 10.33 12.33 4.00
//
//Enter stock name: ORACLE SYS
//Enter number of shares: 214
//Enter the buy price, current price, fees 9.77 11.25 2.50
//
//Enter stock name: SUN MICRO
//Enter number of shares: 354
//Enter the buy price, current price, fees 24.55 34.55 10.25
//
//Enter stock name: LINKSYS INC
//Enter number of shares: 70
//Enter the buy price, current price, fees 21.34 20.34 5.00
//
//Enter stock name: CISCO INC
//Enter number of shares: 49
//Enter the buy price, current price, fees 44.36 49.86 2.50
//
//********************************************************
//                         Stock 1
//********************************************************
//
//The stock name is:               IBM CORP
//The number of shares:            145
//The buy price is:                $10.33
//The current price is:            $12.33
//The fees are:                    $4.00
//
//The initial cost is:             $1497.85
//The current cost is:             $1787.85
//The profit is:                   $286.00
//
//********************************************************
//                         Stock 2
//********************************************************
//
//The stock name is:               ORACLE SYS
//The number of shares:            214
//The buy price is:                $9.77
//The current price is:            $11.25
//The fees are:                    $2.50
//
//The initial cost is:             $2090.78
//The current cost is:             $2407.50
//The profit is:                   $314.22
//
//********************************************************
//                         Stock 3
//********************************************************
//
//The stock name is:               SUN MICRO
//The number of shares:            354
//The buy price is:                $24.55
//The current price is:            $34.55
//The fees are:                    $10.25
//
//The initial cost is:             $8690.70
//The current cost is:             $12230.70
//The profit is:                   $3529.75
//
//********************************************************
//                         Stock 4
//********************************************************
//
//The stock name is:               LINKSYS INC
//The number of shares:            70
//The buy price is:                $21.34
//The current price is:            $20.34
//The fees are:                    $5.00
//
//The initial cost is:             $1493.80
//The current cost is:             $1423.80
//The profit is:                   $-75.00
//
//********************************************************
//                         Stock 5
//********************************************************
//
//The stock name is:               CISCO INC
//The number of shares:            49
//The buy price is:                $44.36
//The current price is:            $49.86
//The fees are:                    $2.50
//
//The initial cost is:             $2173.64
//The current cost is:             $2443.14
//The profit is:                   $267.00
//
//********************************************************
//                         Total Profits
//********************************************************
//
//The total profits for all 5 stocks is: $4321.97

//Test Run 3
//
//Enter stock name: IBM CORP
//Enter number of shares: 250
//Enter the buy price, current price, fees 15.33 17.33 9.00
//
//Enter stock name: ORACLE SYS
//Enter number of shares: 415
//Enter the buy price, current price, fees 15.77 13.25 7.50
//
//Enter stock name: SUN MICRO
//Enter number of shares: 455
//Enter the buy price, current price, fees 28.55 38.76 17.25
//
//Enter stock name: LINKSYS INC
//Enter number of shares: 150
//Enter the buy price, current price, fees 23.36 29.34 8.00
//
//Enter stock name: CISCO INC
//Enter number of shares: 150
//Enter the buy price, current price, fees 48.36 55.86 4.50
//
//********************************************************
//                         Stock 1
//********************************************************
//
//The stock name is:               IBM CORP
//The number of shares:            250
//The buy price is:                $15.33
//The current price is:            $17.33
//The fees are:                    $9.00
//
//The initial cost is:             $3832.50
//The current cost is:             $4332.50
//The profit is:                   $491.00
//
//********************************************************
//                         Stock 2
//********************************************************
//
//The stock name is:               ORACLE SYS
//The number of shares:            415
//The buy price is:                $15.77
//The current price is:            $13.25
//The fees are:                    $7.50
//
//The initial cost is:             $6544.55
//The current cost is:             $5498.75
//The profit is:                   $-1053.30
//
//********************************************************
//                         Stock 3
//********************************************************
//
//The stock name is:               SUN MICRO
//The number of shares:            455
//The buy price is:                $28.55
//The current price is:            $38.76
//The fees are:                    $17.25
//
//The initial cost is:             $12990.25
//The current cost is:             $17635.80
//The profit is:                   $4628.30
//
//********************************************************
//                         Stock 4
//********************************************************
//
//The stock name is:               LINKSYS INC
//The number of shares:            150
//The buy price is:                $23.36
//The current price is:            $29.34
//The fees are:                    $8.00
//
//The initial cost is:             $3504.00
//The current cost is:             $4401.00
//The profit is:                   $889.00
//
//********************************************************
//                         Stock 5
//********************************************************
//
//The stock name is:               CISCO INC
//The number of shares:            150
//The buy price is:                $48.36
//The current price is:            $55.86
//The fees are:                    $4.50
//
//The initial cost is:             $7254.00
//The current cost is:             $8379.00
//The profit is:                   $1120.50
//
//********************************************************
//                         Total Profits
//********************************************************
//
//The total profits for all 5 stocks is: $6075.50

//Test Run 4
//
//Enter stock name: IBM CORP
//Enter number of shares: 650
//Enter the buy price, current price, fees 17.45 20.55 6.00
//
//Enter stock name: ORACLE SYS
//Enter number of shares: 760
//Enter the buy price, current price, fees 19.84 14.75 4.66
//
//Enter stock name: SUN MICRO
//Enter number of shares: 543
//Enter the buy price, current price, fees 34.55 67.34 29.43
//
//Enter stock name: LINKSYS INC
//Enter number of shares: 34
//Enter the buy price, current price, fees 45.87 44.87 4.33
//
//Enter stock name: CISCO INC
//Enter number of shares: 89
//Enter the buy price, current price, fees 89.43 86.55 3.40
//
//********************************************************
//                         Stock 1
//********************************************************
//
//The stock name is:               IBM CORP
//The number of shares:            650
//The buy price is:                $17.45
//The current price is:            $20.55
//The fees are:                    $6.00
//
//The initial cost is:             $11342.50
//The current cost is:             $13357.50
//The profit is:                   $2009.00
//
//********************************************************
//                         Stock 2
//********************************************************
//
//The stock name is:               ORACLE SYS
//The number of shares:            760
//The buy price is:                $19.84
//The current price is:            $14.75
//The fees are:                    $4.66
//
//The initial cost is:             $15078.40
//The current cost is:             $11210.00
//The profit is:                   $-3873.06
//
//********************************************************
//                         Stock 3
//********************************************************
//
//The stock name is:               SUN MICRO
//The number of shares:            543
//The buy price is:                $34.55
//The current price is:            $67.34
//The fees are:                    $29.43
//
//The initial cost is:             $18760.65
//The current cost is:             $36565.62
//The profit is:                   $17775.54
//
//********************************************************
//                         Stock 4
//********************************************************
//
//The stock name is:               LINKSYS INC
//The number of shares:            34
//The buy price is:                $45.87
//The current price is:            $44.87
//The fees are:                    $4.33
//
//The initial cost is:             $1559.58
//The current cost is:             $1525.58
//The profit is:                   $-38.33
//
//********************************************************
//                         Stock 5
//********************************************************
//
//The stock name is:               CISCO INC
//The number of shares:            89
//The buy price is:                $89.43
//The current price is:            $86.55
//The fees are:                    $3.40
//
//The initial cost is:             $7959.27
//The current cost is:             $7702.95
//The profit is:                   $-259.72
//
//********************************************************
//                         Total Profits
//********************************************************
//
//The total profits for all 5 stocks is: $15613.42

//Test Run 5
//
//Enter stock name: IBM CORP
//Enter number of shares: 650
//Enter the buy price, current price, fees 13.87 48.55 5.33
//
//Enter stock name: ORACLE SYS
//Enter number of shares: 498
//Enter the buy price, current price, fees 17.66 43.77 4.89
//
//Enter stock name: SUN MICRO
//Enter number of shares: 754
//Enter the buy price, current price, fees 34.89 65.43 6.89
//
//Enter stock name: LINKSYS INC
//Enter number of shares: 54
//Enter the buy price, current price, fees 74.33 59.32 4.87
//
//Enter stock name: CISCO INC
//Enter number of shares: 892
//Enter the buy price, current price, fees 34.88 38.43 6.78
//
//********************************************************
//                         Stock 1
//********************************************************
//
//The stock name is:               IBM CORP
//The number of shares:            650
//The buy price is:                $13.87
//The current price is:            $48.55
//The fees are:                    $5.33
//
//The initial cost is:             $9015.50
//The current cost is:             $31557.50
//The profit is:                   $22536.67
//
//********************************************************
//                         Stock 2
//********************************************************
//
//The stock name is:               ORACLE SYS
//The number of shares:            498
//The buy price is:                $17.66
//The current price is:            $43.77
//The fees are:                    $4.89
//
//The initial cost is:             $8794.68
//The current cost is:             $21797.46
//The profit is:                   $12997.89
//
//********************************************************
//                         Stock 3
//********************************************************
//
//The stock name is:               SUN MICRO
//The number of shares:            754
//The buy price is:                $34.89
//The current price is:            $65.43
//The fees are:                    $6.89
//
//The initial cost is:             $26307.06
//The current cost is:             $49334.22
//The profit is:                   $23020.27
//
//********************************************************
//                         Stock 4
//********************************************************
//
//The stock name is:               LINKSYS INC
//The number of shares:            54
//The buy price is:                $74.33
//The current price is:            $59.32
//The fees are:                    $4.87
//
//The initial cost is:             $4013.82
//The current cost is:             $3203.28
//The profit is:                   $-815.41
//
//********************************************************
//                         Stock 5
//********************************************************
//
//The stock name is:               CISCO INC
//The number of shares:            892
//The buy price is:                $34.88
//The current price is:            $38.43
//The fees are:                    $6.78
//
//The initial cost is:             $31112.96
//The current cost is:             $34279.56
//The profit is:                   $3159.82
//
//********************************************************
//                         Total Profits
//********************************************************
//
//The total profits for all 5 stocks is: $60899.24



