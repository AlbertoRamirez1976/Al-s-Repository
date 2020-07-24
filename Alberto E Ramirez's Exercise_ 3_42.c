//Exercise 3.42 solution

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 5;
	int y = 7;
	if ( y == 7 )
	{
	    if ( x != 5 )
	    {
	        puts( "@@@@@" );
	    }
	    else
	    {
	    }
	        puts( "#####" );
	        puts( "$$$$$" );
	        puts( "&&&&&" );
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 1 ;
	int y = 2 ;
	int sum = x+y ;
	/*	printf( "%d", ++( x + y ) );
	 * The programmer wants to add x to y and use
	 * predecrment operator but it is invalid as
	 * it is unary operator and operate on single operand.
	 * so we declare another variable and name it sum
     */
	printf( "%d", ++(sum) );
	return 0;
}
