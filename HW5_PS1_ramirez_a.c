/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 5 Program Set 1                          */
/* Date: 5/6/21                                     */
/* Program with functions to calculate salary raise  */
/* for employees using functions for an array        */
/*****************************************************/

//Preprocessor Directives
#include <stdio.h>//Standard input and output header defines several variable types, macros, and functions to perform input and output
#include <stdlib.h>//Standard library header defines several variable types, macros, and functions to perform general functions
#include <string.h>//Standard string header defines several variable types, macros, and functions to manipulate arrays of characters

#define SIZE 6

//Struct data member declaration
struct Employee
{
    char empl_name[20];
    float salary, rate, raise, newSalary;
};


//Function Prototypes
void load(struct Employee e[],int n);//Function prototype allows user to enter employee's name and salary

void ARate(struct Employee e[],int n);//Function prototype assigns each employee rate to the struct's rate data member

void calcRaise(struct Employee e[],int n);//Function prototype calculates the raise and new salary for each employee and stores into struct

void sort(struct Employee e[],int n);//Function prototype sorts the struct in ascending order

void total(struct Employee e[],int n,float *ts,float *tr,float *tn);//Function prototype calculates totals for all employees

void title();//Function prototype title dsiplays program title header

void print(struct Employee e[],int n);//Function prtotype displays total for each employee

void printTotals(float ts,float tr,float tn);//Function prototype displays total for all employees

void savetext(struct Employee e[],int n);//Function prtotype saves the struct to text file employees.txt

void gettext(struct Employee e[],int n);//Function prototype retrieves the data from employees.txt file

void savebn(struct Employee e[],int n);//Function prototype saves the struct to a binary file employees.bin

void getbn(struct Employee e[],int n);//Function prototype retrives the data from the employees.bin file


int main()
{

//Declaration of variables
struct Employee e[SIZE];
float ts, tr, tn;

//Function declaration
load(e, SIZE);//Function loads data into struct
ARate(e, SIZE);//Function calculates rate
calcRaise(e, SIZE);//Function calculates raise
total(e, SIZE,&ts, &tr, &tn);//Function calculates totals

printf("\nOriginal Array of Structure before Sorting\n\n");

title();
print(e, SIZE);
printTotals(ts, tr, tn);


//Sorts the struct of array and prints the sorted struct of array
sort(e, SIZE);
total(e, SIZE,&ts, &tr, &tn);
printf("Array of Structure after Sorting\n\n");
title();
print(e, SIZE);
printTotals(ts, tr, tn);

//*************Section for text files***************
printf("\n\n");
printf("From Save Text file\n\n");
title();

//Save the struct of array to text file
savetext(e, SIZE);

//Retrieve the text file and prints the data
gettext(e, SIZE);
print(e, SIZE);
total(e, SIZE,&ts, &tr, &tn);
printTotals(ts, tr, tn);

//*************Section for binary files***************
printf("\n\n");
printf("From Save Binary file\n\n");
title();

//Save struct of array to a binary file
savebn(e, SIZE);

//retrieve data from binary file and print the data
getbn(e, SIZE);
print(e, SIZE);
total(e, SIZE,&ts, &tr, &tn);
printTotals(ts,tr,tn);

}



void load(struct Employee e[],int n)//Function allows user to enter employee's name and salary
{
    int i;
    float f;
        for(i = 0;i < n;i++)
            {
                printf("Enter the employee's name: ",i+1);
                scanf("%s",e[i].empl_name);
                getchar();
                printf("Enter salary: ",e[i].empl_name);
                scanf("%f",&f);
                e[i].salary=f;
            }
}


void ARate(struct Employee e[],int n)//Function assigns each employee rate to the struct's rate data member
{
    int i;

    for(i = 0;i < n;i++)
        {
            if(e[i].salary > 0.00 && e[i].salary < 30000.00)
                {
                    e[i].rate = 7.00;
                }
                else if(e[i].salary >= 30000.00 && e[i].salary <= 40000.00)
                    {
                        e[i].rate = 5.5;
                    }
                    else if(e[i].salary > 40000.00)
                        {
                            e[i].rate = 4.0;
                        }
        }
}


void calcRaise(struct Employee e[],int n)//Functions calculates the raise and new salary for each employee and stores into struct
{
    int i;

    for(i = 0;i < n;i++)
        {
            e[i].raise = e[i].salary * e[i].rate/100;
            e[i].newSalary = e[i].salary + e[i].raise;
        }
}


void sort(struct Employee e[],int n)//Function sorts the struct in ascending order
{

    char name[20];
    int i,j;
    float temp;

    for(i = 0;i < n;i++)
        {
        for(j = i+1;j < n;j++)
        {
        if(strcmp(e[i].empl_name,e[j].empl_name) > 0)
            {   //swap names
                strcpy(name,e[i].empl_name);
                strcpy(e[i].empl_name,e[j].empl_name);
                strcpy(e[j].empl_name,name);
                //swap salary
                temp = e[i].salary;
                e[i].salary = e[j].salary;
                e[j].salary = temp;
                //swap rate
                temp = e[i].rate;
                e[i].rate = e[j].rate;
                e[j].rate = temp;
                //swap raise
                temp = e[i].raise;
                e[i].raise = e[j].raise;
                e[j].raise = temp;
                //swap new salary
                temp = e[i].newSalary;
                e[i].newSalary = e[j].newSalary;
                e[j].newSalary = temp;
            }
        }
        }
}


void total(struct Employee e[],int n,float *ts,float *tr,float *tn)//Function calculates totals for all employees
{
    int i;
    float sal = 0,r = 0,newsal = 0;

    for(i = 0;i < n;i++)
        {
            sal = sal + e[i].salary; //compute total salary
            r = r + e[i].raise; //compute total raise
            newsal= newsal +e[i].newSalary; //compute total new salary
        }
            *ts = sal;//Total salary(sum the salaries of all 6 employees)
            *tr = r;//Total raise(sum the raises of all 6 employees)
            *tn = newsal;//Total new salary(sum the new salaries of all 6 employees)
}


void title()//Function title dsiplays program title header
{
    printf("\t\t\tCalculation of Salary Raises\n\n");

    printf("Employee\t");
    printf("    Salary\t");
    printf("Rate\t");
    printf("   Raise\t");
    printf("New Salary\n\n");
}


void print(struct Employee e[],int n)//Function displays total for each employee
{
    int i;

    for(i = 0;i < n;i++)
        {
            printf("%s\t\t",e[i].empl_name);
            printf("%10.2f\t",e[i].salary);
            printf("%4.2f\t",e[i].rate);
            printf("%8.2f\t",e[i].raise);
            printf("%8.2f\t\n",e[i].newSalary);
        }
}


void printTotals(float ts,float tr,float tn)//Function displays total for all employees
{
    printf("Total \t\t");
    printf("%10.2f\t\t",ts);
    printf("%8.2f\t",tr);
    printf("%8.2f\n\n",tn);
}


void savetext(struct Employee e[],int n)//Function saves the struct to text file employees.txt
{
    int i;

    FILE *fp;
    //open the file
    fp = fopen("employees.txt","w");

    if(fp==NULL)//condition for unable to open the file
        {
            printf("\n Unable to open the file to write.");
            exit(0);
        }


        for(i = 0;i < n;i++);
            {
                fprintf(fp,"%s\t\t",e[i].empl_name);
                fprintf(fp,"%10.2f\t",e[i].salary);
                fprintf(fp,"%4.2f\t",e[i].rate);
                fprintf(fp,"%8.2f\t",e[i].raise);
                fprintf(fp,"%8.2f\t\n",e[i].newSalary);
            }


            fclose(fp);//close the file

}


void gettext(struct Employee e[],int n)//Function retrieves the data from employees.txt file
{
    int i;

    FILE *fp;
    //open the file to read data
    fp = fopen("employees.txt","r");
    //condition for unable to open the file
        if(fp==NULL)
            {
                printf("\n Unable to open the file to Read.");
                exit(0);
            }


            for(i = 0;i < n;i++);
                {
                    fscanf(fp,"%s\t\t",e[i].empl_name);
                    fscanf(fp,"%10.2f\t",e[i].salary);
                    fscanf(fp,"%4.2f\t",e[i].rate);
                    fscanf(fp,"%8.2f\t",e[i].raise);
                    fscanf(fp,"%8.2f\t\n",e[i].newSalary);
                }


                fclose(fp);//close the file

}


void savebn(struct Employee e[],int n)//Function saves the struct to a binary file employees.bin
{
    int i;

    FILE *fp;
    fp = fopen("employees.bin","wb");
    //condition for unable to open the file
        if(fp==NULL)
            {
                printf("\n Unable to open the file to write.");
                exit(0);
            }


            //loop to write the data into binary file
            for(i = 0;i < n;i++)
                {
                    fwrite(&e[i], sizeof(struct Employee), 1, fp);
                }


                fclose(fp);
}


void getbn(struct Employee e[],int n)//Function retrives the data from the employees.bin file
{
    int i;

    FILE *fp;
    fp = fopen("employees.bin","rb");
        if(fp==NULL)
            {
                printf("\n Unable to open the file to Read.");
                exit(0);
            }


            for(i = 0;i < n;i++)
                {
                    fread(&e[i], sizeof(struct Employee), 1, fp);
                }

                fclose(fp);
}




