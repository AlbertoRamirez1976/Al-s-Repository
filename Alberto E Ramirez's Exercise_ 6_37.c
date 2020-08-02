//Exercise 6.37 Solution 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define MAXRANGE 1000

/* function prototype */
int recursiveMinimum( int array[], int low, int high );

int main()
{
int array[ SIZE ]; /* array to be searched */
int loop; /* loop counter */
int smallest; /* smallest element */

srand( time( NULL ) );

/* initialize elements of array to random numbers */
for ( loop = 0; loop < SIZE; loop++ ) {
array[ loop ] = 1 + rand() % MAXRANGE;
} /* end for */

printf( "Array members are:\n" );

/* display array */
for ( loop = 0; loop < SIZE; loop++ ) {
printf( " %d ", array[ loop ] );
} /* end for */

/* find and display smallest array element */
printf( "\n" );
smallest = recursiveMinimum( array, 0, SIZE - 1 );
printf( "\nSmallest element is: %d\n", smallest );
	
return 0; /* indicate successful termination */

} /* end main */

/* function to recursively find minimum array element */
int recursiveMinimum( int array[], int low, int high )
{
static int smallest = MAXRANGE; /* largest possible value */
	
/* if first element of array is smallest so far,
set smallest equal to that element */
if ( array[ low ] < smallest ) {
smallest = array[ low ];
} /* end if */
	
/* if only one element in array, return smallest */
if ( low == high ) {
return smallest;
} /* end if */
else { /* recursively call recursiveMinimum with new subarray */
return recursiveMinimum( array, low + 1, high );
} /* end else */

} /* end function recursiveMinimum */
