//Exercise 8.21 solution
#include <stdio.h>
#include <string.h>

void bubbleSort( char a[][ 50 ] ); /* function prototype */

int main()
{
char array[ 10 ][ 50 ]; /* 10 lines of text from user */
int i; /* counter */

/* read in 10 lines of text */
for ( i = 0; i <= 9; i++ ) {
printf( "Enter a string: " );
scanf( "%s", &array[ i ][ 0 ] );
} /* end for */

bubbleSort( array ); /* sort the array of strings */
printf( "\nThe strings in sorted order are:\n" );

/* display text in sorted order */
for ( i = 0; i <= 9; i++ ) {
printf( "%s\n", &array[ i ][ 0 ] );
} /* end for */

return 0; /* indicate successful termination */

} /* end main */

/* sort the array */
void bubbleSort( char a[][ 50 ] )
{
int i; /* loop counter */
int j; /* loop counter */
char temp[ 50 ]; /* temporary array */

/* make 9 passes */
for ( i = 0; i <= 8; i++ ) {

for ( j = 0; j <= 8; j++ ) {

/* swap strings if necessary */
if ( strcmp( &a[ j ][ 0 ], &a[ j + 1 ][ 0 ] ) > 0 ) {
strcpy( temp, &a[ j ][ 0 ] );
strcpy( &a[ j ][ 0 ], &a[ j + 1 ][ 0 ] );
strcpy( &a[ j + 1 ][ 0 ], temp );
} /* end if */

} /* end for */

} /* end for */

} /* end function bubbleSort */
