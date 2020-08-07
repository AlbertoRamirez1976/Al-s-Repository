/Exercise 13.9 Solution 

#include <stdio.h>

/* macro that prints an array of values */
#define PRINTARRAY( a, n ) for ( i = 0; i < ( n ); i++ ) \
printf( "%d ", a[ i ] )

int main()
{
int i; /* defines i for use in PRINTARRAY */

/* initialize array to be printed */
int b[ 10 ] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

printf( "The array values are:\n" );
PRINTARRAY( b, 10 ); /* print the array */

return 0; /* indicate successful termination */

} /* end main */
