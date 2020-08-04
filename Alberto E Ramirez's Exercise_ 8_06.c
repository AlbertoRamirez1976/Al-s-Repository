//Exercise 8.6 Solution 

#include <stdio.h>
#include <ctype.h>

int main()
{
char s[ 100 ]; /* define character array of size 100 */
int i; /* loop counter */

/* use gets to get text from user */
printf( "Enter a line of text:\n" );
gets( s );
printf( "\nThe line in uppercase is:\n" );

/* convert each character to uppercase and output */
for ( i = 0; s[ i ] != '\0'; i++ ) {
printf( "%c", toupper( s[ i ] ) );
} /* end for */

printf( "\n\nThe line in lowercase is:\n" );

/* convert each character to lowercase and output */
for ( i = 0; s[ i ] != '\0'; i++ ) {
printf( "%c", tolower( s[ i ] ) );
} /* end for */

return 0; /* indicate successful termination */

} /* end main */
