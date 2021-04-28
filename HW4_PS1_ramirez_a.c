/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 4 Program Set 1                          */
/* Date: 4/27/21                                     */
/* Program with functions to calculate salary raise  */
/*****************************************************/

#include <stdio.h>

//Function prototypes
void load(char *empl_name,float *salary);//Function prototype load declares load function in order to capture user input for emplaoyee name and salary

float calculate_Rate(float salary);//Function prototype calculate_Rate declares calculate_Rate function in order to calculate rate

float calculate_Raise(float salary,float rate);//Function prototype calculate_Raise declares calculate_Raise function in order to calculate raise

float calculate_NewSalary(float salary,float raise);//Function prototype calculate_NewSalary declares calculate_NewSalary function in order to calculate new salary

float calculate_TotalRaise(float totalRaise,float raise);//Function prototype calculate_TotalRaise declares calculate_TotalRaise function in order to calculate total raise

float calculate_TotalSalary(float totalSalary,float salary);//Function prototype calculate_TotalSalary declares calculate_Totalsalary function in order to calculate total salary

float calculate_TotalNewSalary(float totalNewSalary,float newSalary);//Function prototype calculate_TotalNewSalary declares calculate_TotalNewSalary function in order to calculate total new salary

void output(char* empl_name,float salary,float rate,float raise,float newSalary);//Function prototype output declares output function in order to display one employee's information

void total(float totalSalary,float totalRaise,float totalNewSalary);//Function prototype total declares total function in order to display the total for all employees

int main()
{

    //Local variable declaration within main function
    int i, empl_num;//i and empl_num variables are declared and will be utilized as counter control variables within the for loop
    float totalSalary = 0,totalRaise = 0,totalNewSalary = 0;//Local variable declaration for total variables that will capture the totals for all employees

    //Data/input for the number of employees that will be entered as part of the for loop
    printf("How many employees : ");
    scanf("%d",&empl_num);

        //Deterministic for loop that will continue to loop as long as the counter variable 'i' is less than the 'empl_num' variable
        for(i = 0; i < empl_num; i++)
            {

                //Local variable declaration within the for loop for the load function
                char empl_name[25];//Local variable declaration for empl_name which will capture the user input for empl_name
                float salary;//Local variable declaration for salary which will capture the user input for salary

                //Function call to function load in order to receive user input for empl_name and salary
                load(empl_name, &salary);//Function prototype load calls on load function which will pass by references the associated variable

                //Local variable declaration within the for loop for the functions associated with calculations. They are assigned the values associated with the called function on the right.
                float rate = calculate_Rate(salary);
                float raise = calculate_Raise(salary,rate);
                float newSalary = calculate_NewSalary(salary,raise);

                //Function call to all functions associated with totals
                totalRaise = calculate_TotalRaise(totalRaise,raise);
                totalSalary = calculate_TotalSalary(totalSalary,salary);
                totalNewSalary = calculate_TotalNewSalary(totalNewSalary,newSalary);

                //Function call to output function which displays one employee's information at a time
                output(empl_name,salary,rate,raise,newSalary);

            }

                //Function call to total function which displays totals for all employees
                total(totalSalary,totalRaise,totalNewSalary);

            return 0;

}


void load(char *empl_name,float *salary)//Function load captures user input for emplaoyee name and salary and then passes empl_name and salary by reference
{

    getchar();//getchar is utilized to clear memory before the next iteration whithin the for loop

    //Data/input for employee name
    printf("\nEnter the Employee's name: ");
    gets(empl_name);//gets is used as a way to capture full string to include space charcters. The scanf function will not work here because a space will cause it to end and return character value.

    //Data/input for employee salary
    printf("Enter salary : ");
    scanf("%f",salary);

}


float calculate_Rate(float salary)//Function calculate_Rate accepts salary parameter as an input and then calculates rate
{

    if(salary > 0 && salary < 30000)
        {
             return 7.0;
        }
        else if(salary >= 30000 && salary <= 40000)
            {
                return 5.5;
            }
            else if(salary > 40000)
                {
                    return 4.0;
                }

}


float calculate_Raise(float salary,float rate)//Function calculate_Raise accepts salary and rate parameters as an input and then calculates raise
{

    return salary * (rate / 100);//Rate is devided by 100 in order to return a decimal value to two decimal places from a percent.

}


float calculate_NewSalary(float salary,float raise)//Function calculate_NewSalary accepts salary and raise parameters as an input and then calculates new salary
{

    return salary + raise;

}


float calculate_TotalRaise(float totalRaise,float raise)//Function calculate_TotalRaise accepts totalRaise and raise parameters as an input and then calculates total raise
{

    return totalRaise + raise;

}


float calculate_TotalSalary(float totalSalary,float salary)//Function calculate_TotalSalary accepts totalSalary and salary parameters as an input and then calculates total salary
{

    return totalSalary + salary;

}


float calculate_TotalNewSalary(float totalNewSalary,float newSalary)//Function calculate_TotalNewSalary accepts totalNewSalary and newSalary parameters as an input and then calculates total new salary
{

    return totalNewSalary + newSalary;

}


void output(char* empl_name,float salary,float rate,float raise,float newSalary)//Function output accepts empl_name, salary, rate, raise, and newSalary parameters as an input and then displays one employee's information
{

    //Precision of 10 columns and two decimal places will keep all outputs in line
    printf("\nEmployee's Name   : %9s", empl_name);
    printf("\nSalary            : %10.2f", salary);
    printf("\nRate              : %10.1f%%", rate);
    printf("\nRaise             : %10.2f", raise);
    printf("\nNew salary        : %10.2f\n", newSalary);

}


void total(float totalSalary,float totalRaise,float totalNewSalary)//Function total accepts totalSalary, totalRaise, and totalNewSalary parameters as an input and then displays the totals for all employees
{

    //Precision of 10 columns and two decimal places will keep all outputs in line
    printf("\nTotal salary      : %10.2f", totalSalary);
    printf("\nTotal Raise       : %10.2f", totalRaise);
    printf("\nTotal New Salary  : %10.2f\n", totalNewSalary);

}


//Output
//
// Test Run 1
//How many employees : 2
//
//Enter the Employee's name: Daisy Yellow
//Enter salary : 25000.00
//
//Employee's Name   : Daisy Yellow
//Salary            :   25000.00
//Rate              :        7.0%
//Raise             :    1750.00
//New salary        :   26750.00
//
//Enter the Employee's name: Rose Red
//Enter salary : 30000.00
//
//Employee's Name   :  Rose Red
//Salary            :   30000.00
//Rate              :        5.5%
//Raise             :    1650.00
//New salary        :   31650.00
//
//Total salary      :   55000.00
//Total Raise       :    3400.00
//Total New Salary  :   58400.00
//
// Test Run 2
//
//How many employees : 2
//
//Enter the Employee's name: Periwinkle Pink
//Enter salary : 35000.00
//
//Employee's Name   : Periwinkle Pink
//Salary            :   35000.00
//Rate              :        5.5%
//Raise             :    1925.00
//New salary        :   36925.00
//
//Enter the Employee's name: Marigold Orange
//Enter salary : 40000.00
//
//Employee's Name   : Marigold Orange
//Salary            :   40000.00
//Rate              :        5.5%
//Raise             :    2200.00
//New salary        :   42200.00
//
//Total salary      :   75000.00
//Total Raise       :    4125.00
//Total New Salary  :   79125.00
//
// Test Run 3
//
//How many employees : 1
//
//Enter the Employee's name: Iris Blue
//Enter salary : 40001.00
//
//Employee's Name   : Iris Blue
//Salary            :   40001.00
//Rate              :        4.0%
//Raise             :    1600.04
//New salary        :   41601.04
//
//Total salary      :   40001.00
//Total Raise       :    1600.04
//Total New Salary  :   41601.04
//
// Test Run 4
//
//How many employees : 1
//
//Enter the Employee's name: Lilacs Purple
//Enter salary : 45000.00
//
//Employee's Name   : Lilacs Purple
//Salary            :   45000.00
//Rate              :        4.0%
//Raise             :    1800.00
//New salary        :   46800.00
//
//Total salary      :   45000.00
//Total Raise       :    1800.00
//Total New Salary  :   46800.00
//
// Test Run 5
//
//How many employees : 6
//
//Enter the Employee's name: Daisy Yellow
//Enter salary : 25000.00
//
//Employee's Name   : Daisy Yellow
//Salary            :   25000.00
//Rate              :        7.0%
//Raise             :    1750.00
//New salary        :   26750.00
//
//Enter the Employee's name: Rose Red
//Enter salary : 30000.00
//
//Employee's Name   :  Rose Red
//Salary            :   30000.00
//Rate              :        5.5%
//Raise             :    1650.00
//New salary        :   31650.00
//
//Enter the Employee's name: Periwinkle Pink
//Enter salary : 35000.00
//
//Employee's Name   : Periwinkle Pink
//Salary            :   35000.00
//Rate              :        5.5%
//Raise             :    1925.00
//New salary        :   36925.00
//
//Enter the Employee's name: Marigold Orange
//Enter salary : 40000.00
//
//Employee's Name   : Marigold Orange
//Salary            :   40000.00
//Rate              :        5.5%
//Raise             :    2200.00
//New salary        :   42200.00
//
//Enter the Employee's name: Iris Blue
//Enter salary : 40001.00
//
//Employee's Name   : Iris Blue
//Salary            :   40001.00
//Rate              :        4.0%
//Raise             :    1600.04
//New salary        :   41601.04
//
//Enter the Employee's name: Lilacs Purple
//Enter salary : 45000.00
//
//Employee's Name   : Lilacs Purple
//Salary            :   45000.00
//Rate              :        4.0%
//Raise             :    1800.00
//New salary        :   46800.00
//
//Total salary      :  215001.00
//Total Raise       :   10925.04
//Total New Salary  :  225926.03

