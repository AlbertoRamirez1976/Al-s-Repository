//Exercise 6.28 Solution 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main()
{
int loop; /* loop counter */
int randNumber; /* current random number */
int loop2; /* loop counter */
int subscript = 0; /* array subscript counter */
int duplicate; /* duplicate flag */
int array[ SIZE ] = { 0 }; /* array of random numbers */

srand( time( NULL ) );

/* loop 20 times */
for ( loop = 0; loop <= SIZE - 1; loop++ ) {
duplicate = 0;
randNumber = 1 + rand() % 20; /* generate random number */

/* loop through current numbers in array */
for ( loop2 = 0; loop2 <= subscript; loop2++ ) {

/* compare randNumber with previous numbers */
if ( randNumber == array[ loop2 ] ) {
duplicate = 1;
break;
} /* end if */

} /* end for */

/* if not a duplicate */
if ( !duplicate ) {
array[ subscript++ ] = randNumber;
} /* end if */

} /* end while */

printf( "Non-repetitive array values are:\n" );

/* display array */
for ( loop = 0; array[ loop ] != 0; loop++ ) {
printf( "\t\t\t\tArray[ %d ] = %d\n", loop, array[ loop ] );
} /* end for */

return 0; /* indicate successful termination */
} /* end main */
