//Exercise 8.25 solution

#include <stdio.h>

int main()
{
int c; /* ASCII character */

printf( "Enter an ASCII character code ( EOF to end ): " );

/* while user does not enter EOF */
while ( scanf( "%d", &c ) != EOF ) {

/* check if character code is valid */
if ( c >= 0 && c <= 255 ) {
printf( "The corresponding character is '%c'\n", c );
} /* end if */
else {
printf( "Invalid character code\n" );
} /* end else */

printf( "\nEnter an ASCII character code ( EOF to end ): " );
} /* end while */

return 0; /* indicate successful termination */

} /* end main */
