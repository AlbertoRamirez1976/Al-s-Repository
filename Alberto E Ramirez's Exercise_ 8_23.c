//Exercise 8.23 solution 
#include <stdio.h>

int main()
{
int i; /* loop counter */
char array[ 5 ][ 20 ]; /* 5 strings from user */

/* read 5 strings from user */
for ( i = 0; i <= 4; i++ ) {
printf( "Enter a string: " );
scanf( "%s", &array[ i ][ 0 ] );
} /* end for */

printf( "\nThe strings starting with 'b' are:\n" );

/* loop through strings */
for ( i = 0; i <= 4; i++ ) {

/* print if first character is 'b' */
if ( array[ i ][ 0 ] == 'b' ) {
printf( "%s\n", &array[ i ][ 0 ] );
} /* end if */

} /* end for */

return 0; /* indicate successful termination */

} /* end main */
