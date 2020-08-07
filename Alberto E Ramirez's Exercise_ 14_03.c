//Exercise 14.3 Solution 

#include <stdio.h>

int main( int argc, char *argv[] )
{
int i; /* loop counter */

printf( "The command line arguments are:\n" );

/* display arguments given to program at command line */
for ( i = 0; i < argc; i++ ) {
printf( "%s ", argv[ i ] );
} /* end for */

return 0; /* indicate successful termination */

} /* end main */
