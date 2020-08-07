//Exercise 14.4 Solution 

#include <stdio.h>

int main( int argc, char *argv[] )
{
int a[ 100 ]; /* array of integers from user */
int count; /* count of integers entered */
int temp; /* temporary integer for swapping */
int i; /* loop counter */
int j; /* loop counter */
int order; /* sort in ascending or descending order */

/* tell user if improper arguments were passed */
if ( argc != 2 ) {
printf( "Usage: p14_4 -option\n" );
} /* end if */
else {

/* prompt user for integers to be sorted */
printf( "Enter up to 100 integers ( EOF to end input ): " );

/* store integers until 100 elements or EOF entered */
for ( count = 0; !feof( stdin ) && count < 100; count++ ) {
scanf( "%d", &a[ count ] );
} /* end for */

/* set order based on command-line argument */
order = ( argv[ 1 ][ 1 ] == 'd' ) ? 0 : 1;

/* loop through array and swap elements as needed */
for ( i = 1; i < count - 1; i++ ) {

for ( j = 0; j < count - 1; j++ ) {

/* swap in ascending order if that option specified */
if ( order == 1 ) {

if ( a[ i ] < a[ j ] ) {
temp = a[ i ];
a[ i ] = a[ j ];
a[ j ] = temp;
} /* end if */

} /* end if */
else { /* swap in descending order */

if ( a[ i ] > a[ j ] ) {
temp = a[ i ];
a[ i ] = a[ j ];
a[ j ] = temp;
} /* end if */

} /* end else */

} /* end for */
 
} /* end for */

printf( "\n\nThe sorted array is:\n" );

/* display sorted array */
for ( i = 0; i < count - 1; i++ ) {
printf( "%d ", a[ i ] );
} /* end for */

printf( "\n" );
} /* end else */

return 0; /* indicate successful termination */

} /* end main */
