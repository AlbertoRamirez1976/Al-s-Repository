//Exercise 8.7 Solution */

#include <stdio.h>
#include <stdlib.h>

int main()
{
char stringValue[ 6 ]; /* integer string input by user */
int sum = 0; /* result of four integers */
int i; /* loop counter */

/* loop 4 times */
for ( i = 1; i <= 4; i++ ) {
printf( "Enter an integer string: " );
scanf( "%s", stringValue );

/* atoi converts stringValue to integer */
sum += atoi( stringValue );
} /* end for */

printf( "\nThe total of the values is %d\n", sum );

return 0; /* indicate successful termination */

} /* end main */
