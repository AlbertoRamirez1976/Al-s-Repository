//Exercise 3.48 part a solution

#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int counter,number,digit= 0 ;
    int first_digit,second_digit,third_digit,fourth_digit;
    printf("Enter a four-digit integer number:");
    scanf("%d",&number);
    for (counter = 0 ; counter < 4 ; counter++)
    {
	//digits separation
	digit = number% 10 ;
	number = number /10;
	//encryption algorithm
	digit = (digit + 7) % 10;
	/*
	 *  swapping the first digit with the third
         *  the second with the fourth.
	 */
        switch(counter)
	{
            case 0 :third_digit  = digit ;
	    break;
	    case 1 :fourth_digit  = digit ;
      	    break;
	    case 2 :first_digit  = digit ;
	    break;
	    case 3 :second_digit  = digit ;
	}
    }
    printf("The encrypted number is :%d%d%d%d",fourth_digit,third_digit,second_digit,first_digit);
    return 0 ;
}
