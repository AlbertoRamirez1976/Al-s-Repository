/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 3 Program Set 1                          */
/* Date: 3/25/21                                     */
/* This Program calculates employee raise            */
/*****************************************************/

#include <stdio.h>

int main()
{

    //Declaration
    float salary,rate,raise,newSalary,totalSalary = 0,totalRaise = 0,totalnewSalary = 0;

    //Header output includes tabed headers and blank line
    printf("                                  Salary\tRate\tRaise\t New Salary\t\n");
    printf("---------------------------------------------------------------------------\n");

    //Data/Input will capture user input and feed it to the while loop function
    printf("Salary: ");
    scanf("%f", &salary);

    //While loop that will continue to loop while salary is true
    while(salary > 0)
    {
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

    //Data/Input will be capture once again before the end of the while loop.
    printf("Salary: ");
    scanf("%f", &salary);

    }

    //If statement to test for sentinel value
    if(totalSalary <= 0)//If statement will capture the total salary variable from earlier in order to test for sentinel value
    {
    //Output of total salary, total raise, total new salary. The total raise variable will be type conversioned to integer according to the HW display requirements
    printf("---------------------------------------------------------------------------\n");
    printf("Total           %24.2f %20.2d %13.2f\n", totalSalary, (int)totalRaise, totalnewSalary);
    }
    else
    {
    //Output of total salary, total raise, total new salary
    printf("---------------------------------------------------------------------------\n");
    printf("Total           %27.2f %19.2f %10.2f\n", totalSalary, totalRaise, totalnewSalary);
    }

    return 0;//End of program which will return back to the main function.
}


//Output
//
//Test Run 1
//
//                                  Salary	Rate	Raise	 New Salary
//---------------------------------------------------------------------------
//Salary: 25000
//                                  25000.00      7.00    1750.00  26750.00
//Salary: 30000
//                                  30000.00      5.50    1650.00  31650.00
//Salary: 35000
//                                  35000.00      5.50    1925.00  36925.00
//Salary: 40000
//                                  40000.00      5.50    2200.00  42200.00
//Salary: -1
//---------------------------------------------------------------------------
//Total                             130000.00             7525.00  137525.00
//
//
//Test Run 2
//
//                                  Salary	Rate	Raise	 New Salary
//---------------------------------------------------------------------------
//Salary: -1
//---------------------------------------------------------------------------
//Total                               0.00                   00          0.00
//
//Test Run 3
//
//                                  Salary	Rate	Raise	 New Salary
//---------------------------------------------------------------------------
//Salary: 26000
//                                  26000.00      7.00    1820.00  27820.00
//Salary: 31000
//                                  31000.00      5.50    1705.00  32705.00
//Salary: 36000
//                                  36000.00      5.50    1980.00  37980.00
//Salary: 41000
//                                  41000.00      4.00    1640.00  42640.00
//Salary: -1
//---------------------------------------------------------------------------
//Total                             134000.00             7145.00  141145.00
//
//Test Run 4
//
//                                  Salary	Rate	Raise	 New Salary
//---------------------------------------------------------------------------
//Salary: 21000
//                                  21000.00      7.00    1470.00  22470.00
//Salary: 39000
//                                  39000.00      5.50    2145.00  41145.00
//Salary: 33000
//                                  33000.00      5.50    1815.00  34815.00
//Salary: 49000
//                                  49000.00      4.00    1960.00  50960.00
//Salary: -1
//---------------------------------------------------------------------------
//Total                             142000.00             7390.00  149390.00
//
//Test Run 5
//
//                                  Salary	Rate	Raise	 New Salary
//---------------------------------------------------------------------------
//Salary: 13000
//                                  13000.00      7.00     910.00  13910.00
//Salary: 26000
//                                  26000.00      7.00    1820.00  27820.00
//Salary: 34000
//                                  34000.00      5.50    1870.00  35870.00
//Salary: 55000
//                                  55000.00      4.00    2200.00  57200.00
//Salary: -1
//---------------------------------------------------------------------------
//Total                             128000.00             6800.00  134800.00
