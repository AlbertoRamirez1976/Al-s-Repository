//Exercise 8.9 Solution 

#include <stdio.h>
#include <string.h>

int main()
{
char string1[ 20 ]; /* first string input by user */
char string2[ 20 ]; /* second string input by user */
int result; /* result of comparing two strings */

printf( "Enter two strings: " );
scanf( "%s%s", string1, string2 ); /* read two strings */

result = strcmp( string1, string2 );

/* display appropriate message for result */
if ( result > 0 ) {
printf( "\"%s\" is greater than \"%s\"\n", string1, string2 );
} /* end if */
else if ( result == 0 ) {
printf( "\"%s\" is equal to \"%s\"\n", string1, string2 );
} /* end else if */
else {
printf( "\"%s\" is less than \"%s\"\n", string1, string2 );
} /* end else */

return 0; /* indicate successful termination */

} /* end main */
