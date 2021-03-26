/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 3 Program Set 2                          */
/* Date: 3/25/21                                     */
/* This Program will ask and calculate employee raise*/
/*****************************************************/

#include <stdio.h>

int main()
{

    //Declaration
    int i, num;
    float salary,rate,raise,newSalary,totalSalary = 0,totalRaise = 0,totalnewSalary = 0;

    //Data/Input will capture user input for the number of salaries to calculate and then feed it to the while loop function
    printf("How many salaries do you want to enter? ");
    scanf("%d", &num);

    //Header output includes tabed headers and blank line
    printf("\n                                  Salary\tRate\tRaise\t New Salary\t\n");
    printf("---------------------------------------------------------------------------\n");

    for(i = 0; i < num; i++)
    {
    //Data/Input will capture user input and feed it to the while loop function
    printf("Salary: ");
    scanf("%f", &salary);

    //Calculation of total salary will be used later on to test sentinel value
    totalSalary = totalSalary + salary;

    //If statement to calculate rate which will then be fed into the several calculations for total
    if(salary > 0 && salary < 30000)
    {
        rate = 7.0;
    }
    else if(salary >= 30000 && salary <= 40000)
    {
        rate = 5.5;
    }
    else if(salary > 40000)
    {
        rate = 4.0;
    }

    //Calculation will calculate totals for raise, new salary, total raise, and total new salary
    raise = salary * (rate / 100);//Rate will be divided by 100 in order to move the decimal two places to the left and then the result will be multiplied by salary
    newSalary = salary + raise;
    totalRaise = totalRaise + raise;
    totalnewSalary = totalnewSalary + newSalary;

    //Output of salary, rate, raise, new salary
    printf(" %41.2f %9.2f %10.2f %9.2f\n", salary,rate, raise, newSalary);
    }

    //Output of total salary, total raise, total new salary
    printf("---------------------------------------------------------------------------\n");
    printf("Total           %27.2f %19.2f %10.2f\n", totalSalary, totalRaise, totalnewSalary);

    return 0;//End of program which will return back to the main function.
}



//Output
//
//Test Run 1
//
//How many salaries do you want to enter? 4
//
//                                   Salary	      Rate    Raise    New Salary
//---------------------------------------------------------------------------
//Salary: 25000
//                                  25000.00      7.00    1750.00  26750.00
//Salary: 30000
//                                  30000.00      5.50    1650.00  31650.00
//Salary: 35000
//                                  35000.00      5.50    1925.00  36925.00
//Salary: 40000
//                                  40000.00      5.50    2200.00  42200.00
//---------------------------------------------------------------------------
//Total                             130000.00             7525.00  137525.00
//
//Test Run 2
//
//How many salaries do you want to enter? -1
//
//                                  Salary	Rate	Raise	 New Salary
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//Total                                  0.00                0.00       0.00
//
//Test Run 3
//
//How many salaries do you want to enter? 3
//
//                                  Salary	Rate	Raise	 New Salary
//---------------------------------------------------------------------------
//Salary: 38000
//                                  38000.00      5.50    2090.00  40090.00
//Salary: 48000
//                                  48000.00      4.00    1920.00  49920.00
//Salary: 58000
//                                  58000.00      4.00    2320.00  60320.00
//---------------------------------------------------------------------------
//Total                             144000.00             6330.00  150330.00
//
//Test Run 4
//
//How many salaries do you want to enter? 2
//
//                                  Salary	Rate	Raise	 New Salary
//---------------------------------------------------------------------------
//Salary: 12000
//                                  12000.00      7.00     840.00  12840.00
//Salary: 9000
//                                   9000.00      7.00     630.00   9630.00
//---------------------------------------------------------------------------
//Total                              21000.00             1470.00   22470.00
//
//Test Run 5
//
//How many salaries do you want to enter? 5
//
//                                  Salary	Rate	Raise	 New Salary
//---------------------------------------------------------------------------
//Salary: 1256
//                                   1256.00      7.00      87.92   1343.92
//Salary: 345682
//                                 345682.00      4.00   13827.28 359509.28
//Salary: 7477262525
//                             7477262336.00      4.00 299090496.00 7776352768.00
//Salary: 36373
//                                  36373.00      5.50    2000.52  38373.52
//Salary: 44
//                                     44.00      7.00       3.08     47.08
//---------------------------------------------------------------------------
//Total                         7477645824.00        299106432.00 7776752128.00

