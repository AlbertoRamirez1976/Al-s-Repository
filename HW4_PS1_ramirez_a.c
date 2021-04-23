/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 4 Program Set 1                          */
/* Date: 4/22/21                                     */
/* Program with functions to calculate salary raise  */
/*****************************************************/

#include<stdio.h>

//function Prototype Declaration

float load (float salary);

float calculate_raise(float sal, float raise, float rate, float newsal);

void output(char emplName, float salary);

//starting of main function

int main()

{

    //Varibale data type declaration
    int i, num;
    char emplName[25];
    float salary;


    printf("How many salaries do you want to enter? ");
    scanf("%d", &num);


    for(i = 0; i < num; i++)
    {

    load (salary);
    output(emplName, salary);

    }

    return 0;

}

//function defination

float load (float salary)

{

    char emplName[25];
    float raise, rate, newsal;

    float sal;

    printf("Enter the Employee's name: ");
    scanf("%s", &emplName);

    printf("Enter Salary: ");
    scanf("%f", &salary);

        if(salary<0)

            {

            return 0;

            }

    //call to function raise

    calculate_raise(salary, rate, rate, newsal);

}


float calculate_raise(float sal, float raise, float rate, float newsal)

{

    //Initialization of varibale
    float rate0 = 0.00;

    float rate1 = 7.00;

    float rate2 = 5.5;

    float rate3 = 4.0;

    float total_sal = 0;

    float total_raise = 0;

    float total_new = 0;

        if(sal == 0)

            {

            newsal = 0;

            raise = 0;

            total_sal = total_sal + sal;

            total_raise = total_raise + raise;

            total_new = total_new + newsal;

            //call to print function



            return;

            }

            if(sal>0 && sal<30000)

            {

            newsal = sal + sal*7/100;

            raise = newsal-sal;

            total_sal = total_sal + sal;

            total_raise = total_raise + raise;

            total_new = total_new + newsal;

            //call to print function



            return;

            }

            else if(sal >30000 && sal <=40000)

            {

            newsal = sal + sal*5.5/100;

            raise = newsal-sal;

            total_sal = total_sal + sal;

            total_raise = total_raise + raise;

            total_new = total_new + newsal;

            //call to print function



            return;

            }

            else if(sal>40000)

            {

            newsal = sal + sal*4.0/100;

            raise = newsal-sal;

            total_sal = total_sal + sal;

            total_raise = total_raise + raise;

            total_new = total_new + newsal;

            //call to print function



            return;

            }

}

void output(char emplName, float salary)

{


    printf("\nEmployee's Name    : %s", emplName);
    printf("\nSalary             : %10.2f", salary);



}
