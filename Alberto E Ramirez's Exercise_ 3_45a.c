//Exercise 3.45 part a solution

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 0 ;
    int factorial = 1 ;
    int counter = 0 ;
    float eular = 2 ;
    printf("Please Enter integer Number:");
    scanf("%d",&number);
    if (number == 0 )
    {
	printf("The factorial of [%d] is :%d",number,factorial);
    }
    else
    {
        while(number !=0)
	{
       	    factorial = factorial * number;
	    printf("%d\n",factorial);
	    --number;
	    ++counter;
	}
    }
    printf("\nThe factorial of [%d] is :%d",number+counter,factorial);
    return 0 ;
}
