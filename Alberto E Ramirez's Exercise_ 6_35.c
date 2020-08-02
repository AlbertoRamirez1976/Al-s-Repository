//Exercise 6.35 Solution 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

/* function prototype */
void printArray( int array[], int low, int high );

int main()
{
int array[ SIZE ]; /* array to be printed */
int loop; /* loop counter */

srand( time( NULL ) );

/* initialize array elements to random numbers */
for ( loop = 0; loop < SIZE; loop++ ) {
array[ loop ] = 1 + rand() % 500;
} /* end for */

printf( "Array values printed in main:\n" );

/* print array elements */
for ( loop = 0; loop < SIZE; loop++ ) {
printf( "%d ", array[ loop ] );
} /* end for */

printf( "\n\nArray values printed in printArray:\n" );
printArray( array, 0, SIZE - 1 );
printf( "\n" );

return 0; /* indicate successful termination */

} /* end main */

/* function to recursively print an array */
void printArray( int array[], int low, int high )
{
/* print first element of array passed */
printf( "%d ", array[ low ] );

/* return if array only has 1 element */
if ( low == high ) {
return;
} /* end if */
else { /* call printArray with new subarray */
printArray( array, low + 1, high );
} /* end else */

} /* end function printArray */
