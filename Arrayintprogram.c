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

void read_array(int numbers[], int n);
void display_array(int numbers[], int n);
void find_max(int numbers[], int n);



int main()
{
int n, numbers[100];
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
read_array(numbers, n);
display_array(numbers, n);
find_max(numbers, n);


return 0;
}



void read_array(int numbers[], int n)
{

    int i;
    printf("\n");
    for(i=0; i<n; i++)
    {

        printf("Enter the number: ");
        scanf("%d", &numbers[i]);
    }
}


void display_array(int numbers[], int n)
{

    int i;
    printf("\nThe numbers you entered are: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", numbers[i]);
    }
        printf("\n");
}

void find_max(int numbers[], int n)
{

    int i, max1=numbers[0], max2=numbers[0];
    for(i=1; i<n; i++)
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

printf("The largest of these numbers is: %d \n", max1);
printf("The second largest of these numbers is: %d \n",max2);

}
