//Exercise 13.6 Solution

#include <stdio.h>

/* macro to determine smallest of two values */
#define MINIMUM2( x, y ) ( ( x ) < ( y ) ? ( x ) : ( y ) )

int main()
{
int a; /* first integer */
int b; /* second integer */
double c; /* first double */
double d; /* second double */

/* prompt user and read two integers */
printf( "Enter two integers: " );
scanf( "%d%d", &a, &b );

/* use macro MINIMUM to determine and display
smallest user entered integer */
printf( "The minimum of %d and %d is %d\n\n", a, b,
MINIMUM2( a,b ) );

/* prompt user and read two doubles */
printf( "Enter two doubles: " );
scanf( "%lf%lf", &c, &d );

/* use macro MINIMUM to determine and display
smallest user entered double */
printf( "The minimum of %.2f and %.2f is %.2f\n\n",
c, d, MINIMUM2( c,d ) );

return 0; /* indicate successful termination */

} /* end main */
