//Exercise 6.36 Solution 
#include <stdio.h>
#define SIZE 30

void stringReverse( char strArray[] ); /* function prototype */

int main()
{
int loop; /* loop counter */

/* initialize string strArray */
char strArray[ SIZE ] = "Print this string backwards.";

/* display original string */
for ( loop = 0; loop < SIZE; loop++ ) {
printf( "%c", strArray[ loop ] );
} /* end for */

printf( "\n" );
stringReverse( strArray ); /* reverse the string */
printf( "\n" );

return 0; /* indicate successful termination */

} /* end main */

/* function to reverse a string */
void stringReverse( char strArray[] )
{

/* return when null character is encountered */
if ( strArray[ 0 ] == '\0' ) {
return;
} /* end if */

/* recursively call stringReverse with new substring */
stringReverse( &strArray[ 1 ] );
printf( "%c", strArray[ 0 ] ); /* output string elements */
} /* end function stringReverse */
