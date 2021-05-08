
/****************************************************/
/* Lab 5 Question 2                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* Array Program to find second largest integer     */
/****************************************************/

//Preprocessor Directive
#include <stdio.h>

//Function Prototypes
void read_array(int numbers[], int n);//Function prototype will declare function read_array which will allow the user to read the elements into the array

void display_array(int numbers[], int n);//Function prototype will declare function display_array which will display the elements of the array

void find_max_array(int numbers[], int n);//Function prototype will declare function find_max_array which will find the largest integer number


int main()
{

    //Local variable declaration
    int n, numbers[100];

    //Data/Input
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    //Function calls
    read_array(numbers, n);//Function read_array will be called and it will allow the user to read the elements into the array

    display_array(numbers, n);//Function display_array will be called and it will display the elements of the array

    find_max_array(numbers, n);//Function find_max_array will be called and it will find the largest integer number

    return 0;

}


//Function read_array will allow the user to read the elements into the array
void read_array(int numbers[], int n)
{

    //Local variable declaration
    int i;

    printf("\n");

    for(i = 0; i < n; i++)
    {

        printf ("Enter the number: ");
        scanf ("%d", &numbers[i]);
    }

}


//Function display_array will display the elements of the array
void display_array(int numbers[], int n)
{

    //Local variable declaration
    int i;

    //Output of function
    printf ("\nThe numbers you entered are: ");

    for(i = 0; i < n; i++)
    {
        printf ("%d ", numbers[i]);
    }
        printf ("\n");

}


//Function find_max_array will find the largest integer number
void find_max_array(int numbers[], int n)
{

    //Local variable declaration
    int i, max1 = numbers[0], max2 = numbers[0];

    for(i = 1; i < n; i++)
    {
    if(numbers[i] > max1)
    {
        max2 = max1;
        max1 = numbers[i];
    }
    else if(numbers[i] > max2 && numbers[i] < max1)
        {
            max2 = numbers[i];
        }
}


//Outputs
printf ("The largest of these numbers is: %d \n", max1);

printf ("The second largest of these numbers is: %d \n",max2);

}

//Output
//Test Run 1
//
//Enter the number of elements in the array: 6
//
//Enter the number: 10
//Enter the number: 35
//Enter the number: 60
//Enter the number: 34
//Enter the number: 20
//Enter the number: 46
//
//The numbers you entered are: 10 35 60 34 20 46
//The largest of these numbers is: 60
//The second largest of these numbers is: 46
//
//Test Run 2
//
//Enter the number of elements in the array: 4
//
//Enter the number: 11
//Enter the number: 36
//Enter the number: 61
//Enter the number: 35
//
//The numbers you entered are: 11 36 61 35
//The largest of these numbers is: 61
//The second largest of these numbers is: 36
//
//Test Run 3
//
//Enter the number of elements in the array: 3
//
//Enter the number: 45
//Enter the number: 21
//Enter the number: 38
//
//The numbers you entered are: 45 21 38
//The largest of these numbers is: 45
//The second largest of these numbers is: 45
