//Exercise 6.30 Solution 
#include <stdio.h>
#define SIZE 1000

int main()
{
int array[ SIZE ]; /* array to indicate prime numbers */
int loop; /* loop counter */
int loop2; /* loop counter */
int count = 0; /* total prime numbers */

/* set all array elements to 1 */
for ( loop = 0; loop < SIZE; loop++ ) {
array[ loop ] = 1;
} /* end for */

/* test for multiples of current subscript */
for ( loop = 1; loop < SIZE; loop++ ) {

/* start with array subscript two */
if ( array[ loop ] == 1 && loop != 1 ) {

/* loop through remainder of array */
for ( loop2 = loop; loop2 <= SIZE; loop2++ ) {

/* set to zero all multiples of loop */
if ( loop2 % loop == 0 && loop2 != loop ) {
array[ loop2 ] = 0;
} /* end if */
	
} /* end for */

} /* end if */
	
} /* end for */
	
/* display prime numbers in the range 2 - 197 */
for ( loop = 2; loop < SIZE; loop++ ) {

if ( array[ loop ] == 1 ) {
printf( "%3d is a prime number.\n", loop );
++count;
} /* end if */

} /* end for */

printf( "A total of %d prime numbers were found.\n", count );

return 0; /* indicate successful termination */

} /* end main */
