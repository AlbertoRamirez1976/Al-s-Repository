//Exercise 9.14 Solution

#include <stdio.h>

int main()
{
float a[ 3 ]; /* holds the value 1.2345 three times */

/* array of table headers */
char *s[] = { "Read with %e:", "Read with %f:", "Read with %g:" };

/* prompt the user and read 3 values */
printf( "Enter the value 1.2345 three times: " );
scanf( "%e%f%g", &a[ 0 ], &a[ 1 ], &a[ 2 ] );

printf( "%s%e\n\n", s[ 0 ], a[ 0 ] );
printf( "%s%f\n\n", s[ 1 ], a[ 1 ] );
printf( "%s%g\n\n", s[ 2 ], a[ 2 ] );

return 0; /* indicate successful termination */

} /* end main */
