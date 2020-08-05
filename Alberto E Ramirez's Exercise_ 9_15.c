//Exercise 9.15 Solution 
#include <stdio.h>

int main()
{
char a[ 10 ]; /* first string */
char b[ 10 ]; /* second string */
char c[ 10 ]; /* third string */

/* prompt user and read three strings */
printf( "Enter the strings suzy, \"suzy\", and 'suzy':\n" );
scanf( "%s%s%s", a, b, c );

printf( "%s %s %s\n", a, b, c ); /* display strings */

return 0; /* indicate successful termination */

} /* end main */
