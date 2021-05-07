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
void read_array(int *arr, int);
void display_array(int arr[], int);
void interchange(int *arr, int);
void display_array_interchanged(int arr[], int);


int main()
{

    int size;
    printf ("Enter the desired size of the array: ");
    scanf ("%d", &size);

    int arr [size];
    read_array(arr, size);
    display_array(arr, size);
    interchange(arr, size);
    display_array_interchanged(arr, size);

return 0;

}


void read_array (int *arr, int size)
{

    for (int i = 0; i < size; i++)
        {
            printf ("Enter a number for position %d: ", i);
            scanf ("%d", &arr[i]);
        }
}


void display_array(int arr[], int size)
{
    printf ("\nThe elements of the array are:\n");
    for (int i = 0; i < size; i++)
        {
            printf ("arr[%d]=%d ", i, arr[i]);
        }
}


void interchange(int *arr, int size)
{

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

    temp=arr[maxPos];
    arr[maxPos]=arr[minPos];
    arr[minPos]=temp;
}


void display_array_interchanged(int arr[], int size)
{

    printf ("\n\nThe elements of the array after the interchange are:\n");
    for (int i = 0; i < size; i++)
    {
        printf ("arr[%d]=%d ", i, arr[i]);
    }
}
