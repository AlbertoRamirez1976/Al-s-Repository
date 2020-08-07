//Exercise 13.10 Solution 

#include <stdio.h>

/* macro that adds values of a numeric array */
#define SUMARRAY( a, n ) for ( i = 0; i < ( n ); i++ ) \
sum += a[ i ]

int main()
{
int i; /* loop counter */
int sum = 0; /* sum of array elements */

/* initialize array whose values will be added */
int b[ 10 ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

/* use macro SUMARRAY to add elements of array */
SUMARRAY( b, 10 );
printf( "The sum of the elements of array b is %d\n", sum );

return 0; /* indicate successful termination */

} /* end main */
