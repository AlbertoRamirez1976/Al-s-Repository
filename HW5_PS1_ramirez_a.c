/*****************************************************/
/* Name : Alberto Ramirez                            */
/* Student ID : 1186065                              */
/* Homework 5 Program Set 1                          */
/* Date: 5/8/21                                      */
/* Program with functions to calculate salary raise  */
/* for employees using functions for an array        */
/*****************************************************/

//Preprocessor Directives
#include <stdio.h>//Standard input and output header defines several variable types, macros, and functions to perform input and output
#include <stdlib.h>//Standard library header defines several variable types, macros, and functions to perform general functions
#include <string.h>//Standard string header defines several variable types, macros, and functions to manipulate arrays of characters

#define SIZE 6//Constant declaration for SIZE declaration to a quantity of 6

//Struct data member declaration for Employee struct which contains different data types
struct Employee
{

    //Data member (data fields) declaration
    char empl_name[20];
    double salary, rate, raise, newSalary;//Variables are initialized to double value in order to avoid floating point inaccuracies such as off by one error

};//Semicolon at the end is part of the structure definition


//Function Prototypes
void load(struct Employee e[], int n);//Function prototype will declare function load in order to allow user to enter employee's name and salary

void ARate(struct Employee e[], int n);//Function prototype will declare function ARate in order to assign each employee rate to the struct's rate data member

void calcRaise(struct Employee e[], int n);//Function prototype will declare function calcRaise in order to calculate the raise and new salary for each employee and stores into struct

void sort(struct Employee e[], int n);//Function prototype will declare function sort in order to sort the struct in ascending order

void total(struct Employee e[], int n, double *ts, double *tr, double *tn);//Function prototype will declare function total in order to calculate totals for all employees

void title();//Function prototype will declare function title in order to display program title header

void print(struct Employee e[], int n);//Function prtotype will declare function print in order to display totals for each employee

void printTotals(double ts, double tr, double tn);//Function prototype will declare function printTotals in order to display total for all employees

void savetext(struct Employee e[], int n);//Function prototype will declare function savetext in order to save the struct to text file employees.txt

void gettext(struct Employee e[], int n);//Function prototype will declare function gettext in order to retrieve the data from employees.txt file

void savebn(struct Employee e[], int n);//Function prototype will declare function savebn in order to save the struct to a binary file employees.bin

void getbn(struct Employee e[], int n);//Function prototype will declare function getbn in order to retrive the data from the employees.bin file


int main()
{

    //Local variable declaration
    struct Employee e[SIZE];
    double ts, tr, tn;

    //Function calls to load data into struct, calculate raises, salaries and new salaries and print the original array of struct
    load(e, SIZE);//Function call to function load in order to load data into struct
    ARate(e, SIZE);//Function call to function ARate in order to calculate rate
    calcRaise(e, SIZE);//Function call to function calcRaise in order to calculate raise
    total(e, SIZE, &ts, &tr, &tn);//Function call to function total in order to calculate totals

    //Output of original array of structure before sorting
    printf("\nOriginal Array of Structure before Sorting\n\n");

    //Function call to function title which displays the title banner
    title();

    //Output of totals within declared SIZE constant
    print(e, SIZE);
    printTotals(ts, tr, tn);


    //Sorts the struct of array and prints the sorted struct of array
    sort(e, SIZE);
    total(e, SIZE, &ts, &tr, &tn);
    printf("Array of Structure after Sorting\n\n");
    title();
    print(e, SIZE);
    printTotals(ts, tr, tn);

    //*************Section for text files***************
    printf("\n\n");
    printf("From Save Text file\n\n");
    title();

    //Saves the struct of array to text file
    savetext(e, SIZE);

    //Retrieves the text file and prints the data
    gettext(e, SIZE);
    print(e, SIZE);
    total(e, SIZE, &ts, &tr, &tn);
    printTotals(ts, tr, tn);

    //*************Section for binary files***************
    printf("\n\n");
    printf("From Save Binary file\n\n");
    title();

    //Saves struct of array to a binary file
    savebn(e, SIZE);

    //Retrieves data from binary file and print the data
    getbn(e, SIZE);
    print(e, SIZE);
    total(e, SIZE, &ts, &tr, &tn);
    printTotals(ts,tr,tn);

}


//Function load allows the user to enter employee's name and salary
void load(struct Employee e[],int n)
{

    //Local variable declaration of 'i' and 'f' for the for loop
    int i;
    double f;

        for(i = 0;i < n;i++)//For loop will continue loop iteration while 'i' is less than 'n'
            {
                //Data/Input for employee's name
                printf("Enter the employee's name: ",i+1);
                scanf("%s",e[i].empl_name);
                getchar();

                //Data/Input for employee's salary
                printf("Enter salary: ",e[i].empl_name);
                scanf("%lf",&f);
                e[i].salary = f;

            }
}


//Function ARate assigns each employee rate to the struct's rate data member
void ARate(struct Employee e[],int n)
{

    //Local variable declaration of 'i' for the for loop
    int i;

    for(i = 0;i < n;i++)//For loop will continue loop iteration while 'i' is less than 'n'
        {
            if(e[i].salary > 0 && e[i].salary < 30000)
                {
                    e[i].rate = 7.00;
                }
                else if(e[i].salary >= 30000 && e[i].salary <= 40000)
                    {
                        e[i].rate = 5.5;
                    }
                    else if(e[i].salary > 40000)
                        {
                            e[i].rate = 4.0;
                        }
        }
}


//Function calcRaise will calculate the raise and new salary for each employee and store into struct
void calcRaise(struct Employee e[],int n)
{

    //Local variable declaration of 'i' for the for loop
    int i;

    for(i = 0;i < n;i++)//For loop will continue loop iteration while 'i' is less than 'n'
        {

            e[i].raise = e[i].salary * e[i].rate/100;//Raise variable is assigned the value of salary * rate/100
            e[i].newSalary = e[i].salary + e[i].raise;//New salary variable is assigned the value of salary + raise

        }

}


//Function sort will sort the struct in ascending order
void sort(struct Employee e[],int n)
{

    //Local variable declaration
    char name[20];
    int i,j;//Loop iteration control variables
    double temp;//Temporary variable for swap function

    for(i = 0;i < n;i++)//Nested for loop will continue loop iteration while 'i' is less than 'n'
        {
        for(j = i+1;j < n;j++)
            {
            if(strcmp(e[i].empl_name,e[j].empl_name) > 0)
                {
                    //swap function for employee name
                    strcpy(name,e[i].empl_name);
                    strcpy(e[i].empl_name,e[j].empl_name);
                    strcpy(e[j].empl_name,name);

                    //swap function for employee salary
                    temp = e[i].salary;
                    e[i].salary = e[j].salary;
                    e[j].salary = temp;

                    //swap function for employee rate
                    temp = e[i].rate;
                    e[i].rate = e[j].rate;
                    e[j].rate = temp;

                    //swap function for employee raise
                    temp = e[i].raise;
                    e[i].raise = e[j].raise;
                    e[j].raise = temp;

                    //swap function for employee new salary
                    temp = e[i].newSalary;
                    e[i].newSalary = e[j].newSalary;
                    e[j].newSalary = temp;

                }

            }

        }
}


//Function total calculates totals for all employees
void total(struct Employee e[],int n,double *ts,double *tr,double *tn)
{
    //Local variable declaration
    int i;
    double sal = 0,r = 0,newsal = 0;

    for(i = 0;i < n;i++)//For loop will continue loop iteration while 'i' is less than 'n'
        {
            sal = sal + e[i].salary;//Variable sal is assigned the value of sal + salary in order to calculate salary
            r = r + e[i].raise;//Variable r is assigned the value of r + raise in order to calculate raise
            newsal= newsal + e[i].newSalary;//Variable newsal is assigned the value of newsal + newsalary in order to calculate new salary
        }
            *ts = sal;//Total salary(sum the salaries of all 6 employees)
            *tr = r;//Total raise(sum the raises of all 6 employees)
            *tn = newsal;//Total new salary(sum the new salaries of all 6 employees)

}


//Function title displays the program title header
void title()
{

    printf("\t\t\tCalculation of Salary Raises\n\n");

    printf("Employee\t");
    printf("    Salary\t");//Salary header is offset with whitespace in order to maintain alignment with other headers
    printf("Rate\t");
    printf("   Raise\t");//Salary header is offset with whitespace in order to maintain alignment with other headers
    printf("New Salary\n\n");

}


//Function print displays the total for each employee
void print(struct Employee e[],int n)
{
    //Local variable declaration
    int i;

    for(i = 0;i < n;i++)//For loop will continue loop iteration while 'i' is less than 'n'
        {

            printf("%s\t\t",e[i].empl_name);
            printf("%10.2lf\t",e[i].salary);
            printf("%4.2lf\t",e[i].rate);
            printf("%8.2lf\t",e[i].raise);
            printf("%8.2lf\t\n",e[i].newSalary);

        }

}


//Function printTotals displays the total for all employees
void printTotals(double ts, double tr, double tn)
{

    printf("Total \t\t");
    printf("%10.2lf\t\t",ts);
    printf("%8.2lf\t",tr);
    printf("%8.2lf\n\n",tn);

}


//Function savetext saves the struct to text file employees.txt
void savetext(struct Employee e[],int n)
{
    //Local variable declaration
    int i;

    FILE *fp;

    //Fp is assigned the value of fopen which opens the file "employees.txt"
    fp = fopen("employees.txt","w");

    if(fp == NULL)//If statement in order to test condition for the inability to open the file
        {
            printf("\n Unable to open the file to write.");
            exit(0);
        }


        for(i = 0;i < n;i++);//For loop will continue loop iteration while 'i' is less than 'n'
            {

                fprintf(fp,"%s\t\t",e[i].empl_name);
                fprintf(fp,"%10.2lf\t",e[i].salary);
                fprintf(fp,"%4.2lf\t",e[i].rate);
                fprintf(fp,"%8.2lf\t",e[i].raise);
                fprintf(fp,"%8.2lf\t\n",e[i].newSalary);

            }

            //Fp parameter is assigned to fclose which closes the file
            fclose(fp);

}


//Function gettext retrieves the data from the employees.txt file
void gettext(struct Employee e[],int n)
{
    //Local variable declaration
    int i;

    FILE *fp;

    //Fp is assigned the value of fopen which opens the file "employees.txt"
    fp = fopen("employees.txt","r");

        if(fp == NULL)//If statement in order to test condition for the inability to open the file
            {
                printf("\n Unable to open the file to Read.");
                exit(0);
            }


            for(i = 0;i < n;i++);//For loop will continue loop iteration while 'i' is less than 'n'
                {

                    fscanf(fp,"%s\t\t",e[i].empl_name);
                    fscanf(fp,"%10.2lf\t",e[i].salary);
                    fscanf(fp,"%4.2lf\t",e[i].rate);
                    fscanf(fp,"%8.2lf\t",e[i].raise);
                    fscanf(fp,"%8.2lf\t\n",e[i].newSalary);

                }

                //Fp parameter is assigned to fclose which closes the file
                fclose(fp);

}


//Function savebn saves the struct to a binary file employees.bin
void savebn(struct Employee e[],int n)
{
    //Local variable declaration
    int i;

    FILE *fp;

    //Fp is assigned the value of fopen which opens the file "employees.bin"
    fp = fopen("employees.bin","wb");

        if(fp == NULL)//If statement in order to test condition for the inability to open the file
            {
                printf("\n Unable to open the file to write.");
                exit(0);
            }

            for(i = 0;i < n;i++)//For loop will continue loop iteration while 'i' is less than 'n'
                {

                    fwrite(&e[i], sizeof(struct Employee), 1, fp);

                }

                 //Fp parameter is assigned to fclose which closes the file
                fclose(fp);
}


//Function getbn retrives the data from the employees.bin file
void getbn(struct Employee e[],int n)
{
     //Local variable declaration
    int i;

    FILE *fp;

    //Fp is assigned the value of fopen which opens the file "employees.bin"
    fp = fopen("employees.bin","rb");

        if(fp == NULL)//If statement in order to test condition for the inability to open the file
            {

                printf("\n Unable to open the file to Read.");
                exit(0);

            }


            for(i = 0;i < n;i++)//For loop will continue loop iteration while 'i' is less than 'n'
                {

                    fread(&e[i], sizeof(struct Employee), 1, fp);

                }

                 //Fp parameter is assigned to fclose which closes the file
                fclose(fp);

}


//Output
//
//Test Run 1
//Enter the employee's name: Susan
//Enter salary: 25000
//Enter the employee's name: Jim
//Enter salary: 30000
//Enter the employee's name: Gloria
//Enter salary: 35000
//Enter the employee's name: Ros
//Enter salary: 40000
//Enter the employee's name: Ben
//Enter salary: 40001
//Enter the employee's name: Tim
//Enter salary: 45000
//
//Original Array of Structure before Sorting
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Susan		  25000.00	7.00	 1750.00	26750.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Ros		  40000.00	5.50	 2200.00	42200.00
//Ben		  40001.00	4.00	 1600.04	41601.04
//Tim		  45000.00	4.00	 1800.00	46800.00
//Total 	 215001.00		    10925.04   225926.04
//
//Array of Structure after Sorting
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Ben		  40001.00	4.00	 1600.04	41601.04
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Ros		  40000.00	5.50	 2200.00	42200.00
//Susan		  25000.00	7.00	 1750.00	26750.00
//Tim		  45000.00	4.00	 1800.00	46800.00
//Total 	 215001.00		    10925.04   225926.04
//
//From Save Text file
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Ben		  40001.00	4.00	 1600.04	41601.04
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Ros		  40000.00	5.50	 2200.00	42200.00
//Susan		  25000.00	7.00	 1750.00	26750.00
//Tim		  45000.00	4.00	 1800.00	46800.00
//Total      215001.00		    10925.04   225926.04
//
//From Save Binary file
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Ben		  40001.00	4.00	 1600.04	41601.04
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Ros		  40000.00	5.50	 2200.00	42200.00
//Susan		  25000.00	7.00	 1750.00	26750.00
//Tim		  45000.00	4.00	 1800.00	46800.00
//Total 	 215001.00		    10925.04   225926.04
//
//
//Test Run 2
//
//Enter the employee's name: Tim
//Enter salary: 45000
//Enter the employee's name: Ben
//Enter salary: 40001
//Enter the employee's name: Ros
//Enter salary: 40000
//Enter the employee's name: Gloria
//Enter salary: 35000
//Enter the employee's name: Jim
//Enter salary: 30000
//Enter the employee's name: Susan
//Enter salary: 25000
//
//Original Array of Structure before Sorting
//
//		Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Tim		  45000.00	4.00	 1800.00	46800.00
//Ben		  40001.00	4.00	 1600.04	41601.04
//Ros		  40000.00	5.50	 2200.00	42200.00
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Susan		  25000.00	7.00	 1750.00	26750.00
//Total 	 215001.00		    10925.04   225926.04
//
//Array of Structure after Sorting
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Ben		  40001.00	4.00	 1600.04	41601.04
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Ros		  40000.00	5.50	 2200.00	42200.00
//Susan		  25000.00	7.00	 1750.00	26750.00
//Tim		  45000.00	4.00	 1800.00	46800.00
//Total 	 215001.00		    10925.04   225926.04
//
//From Save Text file
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Ben		  40001.00	4.00	 1600.04	41601.04
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Ros		  40000.00	5.50	 2200.00	42200.00
//Susan		  25000.00	7.00	 1750.00	26750.00
//Tim		  45000.00	4.00	 1800.00	46800.00
//Total 	 215001.00		    10925.04   225926.04
//
//From Save Binary file
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Ben		  40001.00	4.00	 1600.04	41601.04
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Ros		  40000.00	5.50	 2200.00	42200.00
//Susan		  25000.00	7.00	 1750.00	26750.00
//Tim		  45000.00	4.00	 1800.00	46800.00
//Total 	 215001.00		    10925.04   225926.04
//
//Test Run 3
//
//Enter the employee's name: Ros
//Enter salary: 40000
//Enter the employee's name: Tim
//Enter salary: 45000
//Enter the employee's name: Susan
//Enter salary: 25000
//Enter the employee's name: Jim
//Enter salary: 30000
//Enter the employee's name: Ben
//Enter salary: 40001
//Enter the employee's name: Gloria
//Enter salary: 35000
//
//Original Array of Structure before Sorting
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Ros		  40000.00	5.50	 2200.00	42200.00
//Tim		  45000.00	4.00	 1800.00	46800.00
//Susan		  25000.00	7.00	 1750.00	26750.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Ben		  40001.00	4.00	 1600.04	41601.04
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Total 	 215001.00		    10925.04   225926.04
//
//Array of Structure after Sorting
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Ben		  40001.00	4.00	 1600.04	41601.04
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Ros		  40000.00	5.50	 2200.00	42200.00
//Susan		  25000.00	7.00	 1750.00	26750.00
//Tim		  45000.00	4.00	 1800.00	46800.00
//Total 	 215001.00		    10925.04   225926.04
//
//From Save Text file
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Ben		  40001.00	4.00	 1600.04	41601.04
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Ros		  40000.00	5.50	 2200.00	42200.00
//Susan		  25000.00	7.00	 1750.00	26750.00
//Tim		  45000.00	4.00	 1800.00	46800.00
//Total      215001.00		    10925.04   225926.04
//
//From Save Binary file
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Ben		  40001.00	4.00	 1600.04	41601.04
//Gloria	  35000.00	5.50	 1925.00	36925.00
//Jim		  30000.00	5.50	 1650.00	31650.00
//Ros		  40000.00	5.50	 2200.00	42200.00
//Susan		  25000.00	7.00	 1750.00	26750.00
//Tim		  45000.00	4.00	 1800.00	46800.00
//Total 	 215001.00		    10925.04   225926.04
//
//Test Run 4
//
//Enter the employee's name: Bob
//Enter salary: 22000
//Enter the employee's name: Jorge
//Enter salary: 32500
//Enter the employee's name: Gaby
//Enter salary: 36000
//Enter the employee's name: Ron
//Enter salary: 38500
//Enter the employee's name: Suzy
//Enter salary: 40003
//Enter the employee's name: Tom
//Enter salary: 65000
//
//Original Array of Structure before Sorting
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Bob		  22000.00	7.00	 1540.00	23540.00
//Jorge		  32500.00	5.50	 1787.50	34287.50
//Gaby		  36000.00	5.50	 1980.00	37980.00
//Ron		  38500.00	5.50	 2117.50	40617.50
//Suzy		  40003.00	4.00	 1600.12	41603.12
//Tom		  65000.00	4.00	 2600.00	67600.00
//Total 	 234003.00		    11625.12   245628.12
//
//Array of Structure after Sorting
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Bob		  22000.00	7.00	 1540.00	23540.00
//Gaby		  36000.00	5.50	 1980.00	37980.00
//Jorge		  32500.00	5.50	 1787.50	34287.50
//Ron		  38500.00	5.50	 2117.50	40617.50
//Suzy		  40003.00	4.00	 1600.12	41603.12
//Tom		  65000.00	4.00	 2600.00	67600.00
//Total 	 234003.00		    11625.12   245628.12
//
//From Save Text file
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Bob		  22000.00	7.00	 1540.00	23540.00
//Gaby		  36000.00	5.50	 1980.00	37980.00
//Jorge		  32500.00	5.50	 1787.50	34287.50
//Ron		  38500.00	5.50	 2117.50	40617.50
//Suzy		  40003.00	4.00	 1600.12	41603.12
//Tom		  65000.00	4.00	 2600.00	67600.00
//Total 	 234003.00		    11625.12   245628.12
//
//From Save Binary file
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Bob		  22000.00	7.00	 1540.00	23540.00
//Gaby		  36000.00	5.50	 1980.00	37980.00
//Jorge		  32500.00	5.50	 1787.50	34287.50
//Ron		  38500.00	5.50	 2117.50	40617.50
//Suzy		  40003.00	4.00	 1600.12	41603.12
//Tom		  65000.00	4.00	 2600.00	67600.00
//Total 	 234003.00		    11625.12   245628.12
//
//Test Run 5
//
//Enter the employee's name: Susana
//Enter salary: 25001
//Enter the employee's name: Jimmy
//Enter salary: 31000
//Enter the employee's name: Gigi
//Enter salary: 35001
//Enter the employee's name: Robert
//Enter salary: 40000
//Enter the employee's name: Billy
//Enter salary: 40001
//Enter the employee's name: Trevor
//Enter salary: 45001
//
//Original Array of Structure before Sorting
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Susana		  25001.00	7.00	 1750.07	26751.07
//Jimmy		  31000.00	5.50	 1705.00	32705.00
//Gigi		  35001.00	5.50	 1925.06	36926.06
//Robert	  40000.00	5.50	 2200.00	42200.00
//Billy		  40001.00	4.00	 1600.04	41601.04
//Trevor	  45001.00	4.00	 1800.04	46801.04
//Total      216004.00		    10980.21   226984.21
//
//Array of Structure after Sorting
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Billy		  40001.00	4.00	 1600.04	41601.04
//Gigi		  35001.00	5.50	 1925.06	36926.06
//Jimmy		  31000.00	5.50	 1705.00	32705.00
//Robert	  40000.00	5.50	 2200.00	42200.00
//Susana	  25001.00	7.00	 1750.07	26751.07
//Trevor	  45001.00	4.00	 1800.04	46801.04
//Total 	 216004.00		    10980.21   226984.21
//
//From Save Text file
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Billy		  40001.00	4.00	 1600.04	41601.04
//Gigi		  35001.00	5.50	 1925.06	36926.06
//Jimmy		  31000.00	5.50	 1705.00	32705.00
//Robert	  40000.00	5.50	 2200.00	42200.00
//Susana	  25001.00	7.00	 1750.07	26751.07
//Trevor	  45001.00	4.00	 1800.04	46801.04
//Total 	 216004.00		    10980.21   226984.21
//
//From Save Binary file
//
//			Calculation of Salary Raises
//
//Employee	    Salary	Rate	   Raise	New Salary
//
//Billy		  40001.00	4.00	 1600.04	41601.04
//Gigi		  35001.00	5.50	 1925.06	36926.06
//Jimmy		  31000.00	5.50	 1705.00	32705.00
//Robert	  40000.00	5.50	 2200.00	42200.00
//Susana	  25001.00	7.00	 1750.07	26751.07
//Trevor	  45001.00	4.00	 1800.04	46801.04
//Total 	 216004.00		    10980.21   226984.21

