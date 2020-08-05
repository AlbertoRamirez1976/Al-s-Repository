//Exercise 9.13 Solution

#include <stdio.h>

int main()
{
int array[ 5 ]; /* holds the value 437 five times */
int loop; /* loop counter */

/* array of table headers */
char *s[] = { "Read with %d:", "Read with %i:", "Read with %o:",
"Read with %u:", "Read with %x:"};

/* prompt the user and read 5 values */
printf( "Enter the value 437 five times: " );
scanf( "%d%i%o%u%x", &array[ 0 ], &array[ 1 ], &array[ 2 ],
&array[ 3 ], &array[ 4 ] );

/* loop through all 5 values */
for ( loop = 0; loop <= 4; loop++ ) {

/* print each of the 5 values */
printf( "%s\n%d %i %o %u %x\n\n", s[ loop ], array[ loop ],
array[ loop ], array[ loop ], array[ loop ], array[ loop ] );
} /* end for */

return 0; /* indicate successful termination */

} /* end main */
