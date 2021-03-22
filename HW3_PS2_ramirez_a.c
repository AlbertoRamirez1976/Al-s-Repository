/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 3 Program Set 2                          */
/* Date: 3/20/21                                     */
/* This Program calculates the salary raise          */
/* for employees after asking for quantity           */
/*****************************************************/

#include<stdio.h>

int main()
{

        //Declaration
        int iValue, num = 0;
        double salary, rate, raise, newSalary, totalSalary = 0, totalRaise = 0, totalnewSalary = 0;



        while(salary != -1)
        {
        //Data/Input
        printf("\nHow many salaries do you want to enter? ");
        scanf("%d", &num);

        for(iValue = 0; iValue < num; iValue++)
        {

        printf("\nEnter salary, or -1 to quit : ");
        scanf("%lf", &salary);

        if (salary == -1)
            return 0;

            if(salary > 0 && salary < 30000)
                {
                    rate = 7.00;
                }
                    else if(salary >= 30000 && salary <= 40000)
                    {
                        rate = 5.50;
                    }
                        else if(salary >= 41000)
                        {
                            rate = 4.00;
                        }

        //Calculations
        raise = rate * salary / 100;
        newSalary = salary + raise;
        totalRaise = totalRaise + raise;
        totalSalary = totalSalary + salary;
        totalnewSalary = totalnewSalary + newSalary;

        }

        //Output
        printf("\n                     Salary\tRate\tRaise\tNew Salary");
        printf("\n----------------------------------------------------------");
        printf("\nSalary: %.2lf     %.2lf\t%.2lf\t%.2lf\t% .2lf\t\n",salary, salary, rate, raise, newSalary);
        printf("\n----------------------------------------------------------");
        printf("\nTotal                %.2lf\t        %.2lf\t %.2lf\t\n",totalSalary,totalRaise,totalnewSalary);


        }

        return 0;

}
