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
float calcRaises(float num, float *rate);//Function prototype calcRaises calls on calc raises function in order to calculate raise
void output(char *empl_name, float num, float rate);//Function prototype calls on output function in order to display one employee's information


int main()
{

     //Local Variable declaration
     int i = 1, empl = 1;
     char empl_name[25];
     float rate, raise, num;
     float total;


     //Data/input to capture the number of employess
     printf("How many employees : ");
     scanf("%d", &empl);


     for (i; i<= empl; i++)
     {

        //Function calls
        load(empl_name, &num);//Function load is assigned to salary variable in order to pass the value of salary
        calcRaises(num, &rate);//Function calcRaises is assigned to incr variable
        output(empl_name, num, rate);//Function output displays one employee's information

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


float calcRaises(float num, float *rate)//Function calc raises calculates raises
{


     //If statement to calculate rate and then return it
     if(num > 0 && num < 30000)
        {
            return .07;

        }
        else if(num >= 30000 && num <= 40000)
            {
               return 0.55;

            }
            else if(num > 40000)
                {
                    return .04;

                }




}


void output(char *empl_name, float num, float rate)//Function output displays one employee's information
{

     //Local variable declaration
     float raise, newSalary;

     //Calculation of totals
     rate = rate * 100;
     raise = num * (rate / 100);
     newSalary = num + raise;

     printf("\n");
     printf("Employee's name    :  %s\n", empl_name);
     printf("Salary             :  %10.2f\n", num);
     printf("Rate               :  %10.1f%%\n",rate);
     printf("Raise              :  %10.2f\n", raise);
     printf("New Salary         :  %10.2f\n", newSalary);
}


