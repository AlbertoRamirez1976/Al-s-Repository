//Exercise 8.34 Part B solution 

#include <stdio.h>
#include <string.h>

int main()
{
char text[ 3 ][ 80 ]; /* 3 strings from user */
char *temp; /* token pointer */
int lengths[ 20 ] = { 0 }; /* array of length counts */
int i; /* loop counter */

printf( "Enter three lines of text:\n" );

/* read 3 lines of text */
for ( i = 0; i <= 2; i++ ) {
gets( &text[ i ][ 0 ] );
} /* end for */

/* loop through each string */
for ( i = 0; i <= 2; i++ ) {

/* get first token */
temp = strtok( &text[ i ][ 0 ], ". \n" );

/* while temp does not equal NULL */
while ( temp ) {

/* increment corresponding array element */
++lengths[ strlen( temp ) ];
temp = strtok( NULL, ". \n" );
} /* end while */

} /* end for */

putchar( '\n' );

/* display results in array */
for ( i = 1; i <= 19; i++ ) {

/* if length is not zero */
if ( lengths[ i ] ) {
printf( "%d word%s of length %d\n",
lengths[ i ], lengths[ i ] == 1 ? "" : "s", i );
} /* end if */

} /* end for */

return 0; /* indicate successful termination */

} /* end main */
