
/****************************************************/
/* Lab 5 Question 3                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* Array Program to find duplicate numbers          */
/****************************************************/

//Preprocessor Directive
#include <stdio.h>

//Function Prototypes
void read_array(int [100],int);//Function prototype will declare function read_array which will allow the user to read the elements into the array

void display_array(int [100],int);//Function prototype will declare function display_array which will display the elements of the array

void check_duplicate_number(int [100],int);//Function prototype will declare function check_duplicate_number which will check for duplicate numbers

int dupl_num_checked(int x);//Function prototype will declare function dupl_num_checked which will check for duplicate numbers


int main()
{

    //Local variable declaration
    int n,array[100];

    //Data/Input
    printf ("Enter the size of the array: ");
    scanf ("%d",&n);

    //Function calls
    read_array(array,n);//Function read_array will be called and it will allow the user to read the elements into the array

    //Output of the numbers entered by the user
    printf("\nThe numbers you entered are: ");

    display_array(array,n);//Function display_array will be called and it will display the elements of the array

    check_duplicate_number(array,n);//Function check_duplicate_number will be called and it will check for duplicate numbers

    return 0;

}


//Function read_array will allow the user to read the elements into the array
void read_array(int array[100],int n)
{

    //Local variable declaration
    int i;

    for(i = 0;i < n;i++)
    {
        //scanf function will capture user input for duplicate number location number 2
        scanf ("%d",&array[i]);
    }
}


//Function display_array will display the elements of the array
void display_array(int array[100],int n)
{

    //Local variable declaration
    int i;

    for(i = 0;i < n;i++)
    {

        printf ("%d ",array[i]);
    }

}


//Function check_duplicate_number will check for duplicate numbers
void check_duplicate_number(int array[100],int n)
{

    //Local variable declaration
    int i,j,count,flag,temp,first;


    //Nested loop function to check for multiple conditions
    for(i = 0;i < n;i++)
    {
        if(!dupl_num_checked(i))//Boolean negation operator is utilized in order to reverse the meaning of its operand
        {
            flag = 0;
            count = 0;
            first = 1;

            for(j = i;j < n;j++)
            {
                if(array[i]==array[j])
                {
                    count++;
                    if( count > 1 && first == 0)
                    {
                        if(flag == 0)
                        {
                            printf ("\nDuplicate number %d found at location ",array[i]);
                            flag = 1;

                        }
                        printf ("%d ",temp);
                        temp = j;
                    }
                    else
                    {
                        temp = j;
                        first = 0;
                        dupl_num_checked(j);
                    }
                }
            }

        }
        if(count > 1)
        printf ("and %d\n",temp);
    }
}


int dupl_num_checked(int x)//Function dupl_num_checked which will check for duplicate numbers
{

    //Local variable declaration
    static int checked[100];

    if(checked[x]==1)
        {
            return 1;
        }
        else
            {
                checked[x] = 1;

                return 0;
            }

}

//Output
//
//Test Run 1
//
//Enter the size of the array: 6
//1
//2
//3
//3
//4
//5
//
//The numbers you entered are: 1 2 3 3 4 5
//Duplicate number 3 found at location 2 and 3
//
//Test Run 2
//
//Enter the size of the array: 5
//9
//8
//8
//7
//6
//
//The numbers you entered are: 9 8 8 7 6
//Duplicate number 8 found at location 1 and 2
//
//Test Run 3
//
//Enter the size of the array: 9
//7
//6
//6
//4
//3
//2
//1
//1
//8
//
//The numbers you entered are: 7 6 6 4 3 2 1 1 8
//Duplicate number 6 found at location 1 and 2
//
//Duplicate number 1 found at location 6 and 7

