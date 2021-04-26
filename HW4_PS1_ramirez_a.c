/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 4 Program Set 1                          */
/* Date: 4/25/21                                     */
/* Program with functions to calculate salary raise  */
/*****************************************************/

#include<stdio.h>

//Function prototypes
float load();//Function prototype load calls on load function in order to capture user input
float calcRaises(float num);//Function prototype calcRaises calls on calc raises function in order to calculate raise
void output(float salary, float rate);//Function prototype calls on output function in order to display one employee's information


int main()
{

     //Local Variable declaration
     int i = 1, empl = 1;
     float rate, raise, salary;
     float total;


     //Data/input to capture the number of employess
     printf("How many employees : ");
     scanf("%d", &empl);


     for (i; i<= empl; i++)
     {

        //Function calls
        salary = load();//Function load is assigned to salary variable in order to pass the value of salary
        rate = calcRaises(salary);//Function calcRaises is assigned to incr variable
        output(salary, rate);//Function output displays one employee's information

     }



     return 0;

}



float load()//Function load captures user input for employee name and salary
{

    char empl_name[25];
    float num;

    printf("\nEnter the Employee's name : ");
    empl_name = gets();

    printf("\nEnter salary : ");
    scanf("%f",&num);



}


float calcRaises(float num)//Function calc raises calculates raises
{
    float raise;

     //If statement to calculate rate and then return it
    if(num > 0 && num < 30000)
        {
            raise = .07;
        }
        else if(num >= 30000 && num <= 40000)
            {
                raise = .055;
            }
            else if(num > 40000)
                {
                    raise = .04;
                }

                return raise;

}


void output(float salary, float rate)//Function output displays one employee's information
{

     //Local variable declaration
     float raise, newSalary;

     //Calculation of totals
     rate = rate * 100;
     raise = salary * (rate / 100);
     newSalary = salary + raise;

     printf("\n");
     printf("Salary             :  %10.2f\n", salary);
     printf("Rate               :  %10.1f%%\n",rate);
     printf("Raise              :  %10.2f\n", raise);
     printf("New Salary         :  %10.2f\n", newSalary);
}


