//Exercise 3.45 part b solution

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


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function prototype
int calc_factorial (int number);


int main(void)
{
    int terms = 20 ;
    float eular = 0;
    int counter =0 ;
    //calculation formula
    for ( counter = 0 ; counter < terms ;counter++ )
    {
       	eular = eular + 1./calc_factorial(counter);
    }
    //printing result
    printf("Eular constant is equal to:%f\n",eular);
    return 0 ;
}

//function defintion
int calc_factorial (number)
{
    //check if number is zero
    int factorial = 1 ;
    if (number == 0 )
    {
 	return factorial;
    }
    //check if the number  > zero
    else
    {
  	while(number !=0)
	{
            //calculate factorial
	    factorial = factorial * number;
	    --number;
	}
    }
    return factorial ;
}
