/****************************************************/
/* Lab 5 Question 3                                 */
/* Name : Alberto Ramirez                           */
/* Student ID : 1186065                             */
/* Date: 5/6/21                                     */
/* Array Program to find duplicate numbers          */
/****************************************************/

#include <stdio.h>

//Function Prototypes
void read_array(int [100],int);
void display_array(int [100],int);
void check_duplicate(int [100],int);
int ischecked(int );


int main()
{

    int n,array[100];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    read_array(array,n);
    printf("\nThe numbers you entered are: ");
    display_array(array,n);
    check_duplicate(array,n);

    return 0;
}


void read_array(int array[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        //printf("\nEnter the number:");
        scanf("%d",&array[i]);
    }
}


void display_array(int array[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {

        printf("%d ",array[i]);
    }
}


void check_duplicate(int array[100],int n)
{
    int i,j,count,flag,temp,first;
    for(i=0;i<n;i++)
    {
        if(!ischecked(i))
        {
            flag=0;
            count=0;
            first=1;
            for(j=i;j<n;j++)
            {
                if(array[i]==array[j])
                {
                    count++;
                    if( count>1 && first==0)
                    {
                        if(flag==0)
                        {
                            printf("\nDuplicate number %d found at location ",array[i]);
                            flag=1;

                        }
                        printf("%d ",temp);
                        temp=j;
                    }
                    else
                    {
                        temp=j;
                        first=0;
                        ischecked(j);
                    }
                }
            }

        }
        if(count>1)
        printf("and %d\n",temp);
    }
}


int ischecked(int x)
{
    static int checked[100];
    if(checked[x]==1)
        return 1;
    else
    {
        checked[x]=1;
        return 0;
    }
}
