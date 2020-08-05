//Exercise 8.34 Part A Solution

#include <stdio.h>
#include <ctype.h>

int main()
{
char letters[ 26 ] = { 0 }; /* letters of the alphabet */
char text[ 3 ][ 80 ]; /* three lines of text */
int i; /* loop counter */
int j; /* loop counter */

printf( "Enter three lines of text:\n" );

/* read 3 lines of text */
for ( i = 0; i <= 2; i++ ) {
gets( &text[ i ][ 0 ] );
} /* end for */

/* loop through 3 strings */
for ( i = 0; i <= 2; i++ ) {

/* loop through each character */
for ( j = 0; text[ i ][ j ] != '\0'; j++ ) {

/* if letter, update corresponding array element */
if ( isalpha( text[ i ][ j ] ) ) {
++letters[ tolower( text[ i ][ j ] ) - 'a' ];
} /* end if */

} /* end for */

} /* end for */

printf( "\nTotal letter counts:\n" );

/* print letter totals */
for ( i = 0; i <= 25; i++ ) {
printf( "%c:%3d\n", 'a' + i, letters[ i ] );
} /* end for */

return 0; /* indicate successful termination */

} /* end main */
