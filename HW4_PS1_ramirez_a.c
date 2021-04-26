/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 4 Program Set 1                          */
/* Date: 4/25/21                                     */
/* Program with functions to calculate salary raise  */
/*****************************************************/

#include<stdio.h>

//Function prototypes
void load(char *empl_name, float *num);//Function prototype load calls on load function in order to capture user input
float calcRaises(float num);//Function prototype calcRaises calls on calc raises function in order to calculate raise
float getRaise(float num);
float calc(float num, float *raise, float *total, float *newSalary);
void output(char *empl_name, float num, float rate, float newSalary);//Function prototype calls on output function in order to display one employee's information


int main()
{

     //Local Variable declaration
     int i = 1, empl = 1;
     char empl_name[25];
     float rate, raise, num;
     float newSalary, total;


     //Data/input to capture the number of employess
     printf("How many employees : ");
     scanf("%d", &empl);


     for (i; i<= empl; i++)
     {

        //Function calls
        load(empl_name, &num);//Function load is assigned to salary variable in order to pass the value of salary
        calcRaises(num);//Function calcRaises is assigned to incr variable
        calc(num, &raise, &total, &newSalary);
        output(empl_name, num, rate, newSalary);//Function output displays one employee's information

     }

     return 0;

}


void load(char *empl_name, float *num)//Function load captures user input for employee name and salary
{

    getchar();


    printf("\nEnter the Employee's name : ");
    gets(empl_name);

    printf("\nEnter salary : ");
    scanf("%f",&*num);



}


float calcRaises(float num)//Function calc raises calculates raises
{


     //If statement to calculate rate and then return it
     if(num > 0 && num < 30000)
        {
            num = 0.07;

        }
        if(num >= 30000 && num <= 40000)
            {
               num = 0.055;

            }
            if(num > 40000)
                {
                    num = 0.04;

                }

                return num;

}

float getRaise(float num)
{

    return num* calcRaises(num);

}

float calc(float num, float *raise, float *total, float *newSalary)
{


    *total += num;
    *raise = getRaise(num);
    *newSalary = *total + *raise;

}


void output(char *empl_name, float num, float rate, float newSalary)//Function output displays one employee's information
{

     float raise;

     //Calculation of totals
     rate = calcRaises(num) * 100;
     raise = num * (rate / 100);
     newSalary = num + raise;

     printf("\n");
     printf("Employee's name    :  %s\n", empl_name);
     printf("Salary             :  %10.2f\n", num);
     printf("Rate               :  %10.1f%%\n",rate);
     printf("Raise              :  %10.2f\n", raise);
     printf("New Salary         :  %10.2f\n", newSalary);
}


