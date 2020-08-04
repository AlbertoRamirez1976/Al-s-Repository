//Exercise 8.8 Solution

#include <stdio.h>
#include <stdlib.h>

int main()
{
char stringValue[ 15 ]; /* string input by user */
double sum = 0.0; /* sum of all four values */
int i; /* loop counter */

/* loop 4 times */
for ( i = 1; i <= 4; i++ ) {
printf( "Enter a doubleing point string: " );
gets( stringValue );

/* atof converts stringValue to a floating-point value */
sum += atof( stringValue );
} /* end for */

printf( "\nThe total of the values is %f\n", sum );

return 0; /* indicate successful termination */

} /* end main */
