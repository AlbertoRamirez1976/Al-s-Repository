/****************************************************/
/* Lab 5 Question 1                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* Array Interchange Program                        */
/****************************************************/

//Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//Function Prototypes
void read_array(int *arr, int);//Function prototype will declare function read_array which will allow the user to read the elements into the array

void display_array(int arr[], int);//Function prototype will declare function display_array which will display the elements of the array

void interchange_array(int *arr, int);//Function prototype will declare function interchange_array which will interchange the largest and the smallest number in an array

void display_interchanged_array(int arr[], int);//Function prototype will declare function display_interchanged_array which will display interchanged number


int main()
{

    //Local variable declaration
    int size;//Variable size is declared and it wil be assigned the value of the user input for the desired size of array

    //Data/Input
    printf ("Enter the desired size of the array: ");
    scanf ("%d", &size);

    //Function calls
    int arr [size];

    read_array(arr, size);//Function read_array will be called and it will allow the user to read the elements into the array

    display_array(arr, size);//Function display_array will be called and it will display the elements of the array

    interchange_array(arr, size);//Function interchange_array will be called and it will interchange the largest and the smallest number in an array

    display_interchanged_array(arr, size);//Function display_interchanged_array will be called and it will display interchanged number

    return 0;

}


//Function read_array will allow the user to read the elements into the array
void read_array (int *arr, int size)
{

    for (int i = 0; i < size; i++)
        {
            printf ("Enter a number for position %d: ", i);
            scanf ("%d", &arr[i]);
        }

}


//Function display_array will display the elements of the array
void display_array(int arr[], int size)
{

    //Output of elements of array
    printf("\nThe elements of the array are:\n");

    for (int i = 0; i < size; i++)
        {
            printf ("arr[%d]=%d ", i, arr[i]);
        }
}


//Function interchange_array will interchange the largest and the smallest number in an array
void interchange_array(int *arr, int size)
{

    //Local variable declaration
    int min = INT_MAX, max = INT_MIN, minPos, maxPos, temp, i;

    for (i = 0; i < size; ++i)
        {
        if (arr [i] < min)
            {
                min = arr[i];
                minPos = i;
            }
            else if (arr [i] > max)
            {
                max = arr[i];
                maxPos = i;
            }

        }

            //Swap of values
            temp = arr[maxPos];
            arr[maxPos] = arr[minPos];
            arr[minPos] = temp;
}


//Function display_interchanged_array will display interchanged number
void display_interchanged_array(int arr[], int size)
{


    //Output of interchanged elements
    printf ("\n\nThe elements of the array after the interchange are:\n");

    for (int i = 0; i < size; i++)
    {
        printf ("arr[%d]=%d ", i, arr[i]);
    }

    printf ("\n");

}

//Output
//Test Run 1
//
//Enter the desired size of the array: 5
//Enter a number for position 0: 3
//Enter a number for position 1: 6
//Enter a number for position 2: 3
//Enter a number for position 3: 7
//Enter a number for position 4: 9
//
//The elements of the array are:
//arr[0]=3 arr[1]=6 arr[2]=3 arr[3]=7 arr[4]=9
//
//The elements of the array after the interchange are:
//arr[0]=9 arr[1]=6 arr[2]=3 arr[3]=7 arr[4]=3
//
//Test Run 2
//
//Enter the desired size of the array: 6
//Enter a number for position 0: 4
//Enter a number for position 1: 7
//Enter a number for position 2: 4
//Enter a number for position 3: 8
//Enter a number for position 4: 2
//Enter a number for position 5: 5
//
//The elements of the array are:
//arr[0]=4 arr[1]=7 arr[2]=4 arr[3]=8 arr[4]=2 arr[5]=5
//
//The elements of the array after the interchange are:
//arr[0]=4 arr[1]=7 arr[2]=4 arr[3]=2 arr[4]=8 arr[5]=5
//
//Test Run 3
//
//Enter the desired size of the array: 3
//Enter a number for position 0: 9
//Enter a number for position 1: 8
//Enter a number for position 2: 7
//
//The elements of the array are:
//arr[0]=9 arr[1]=8 arr[2]=7
//
//The elements of the array after the interchange are:
//arr[0]=7 arr[1]=8 arr[2]=9
