//Exercise 13.4 Solution: sphere volume macro 

#include <stdio.h>

#define PI 3.14159 /* constant representing Pi */

/* define preprocessor directive sphere volume */
#define SPHEREVOLUME( r ) ( 4.0 / 3.0 * PI * ( r ) * ( r ) * ( r ) )

int main()
{
int i; /* loop counter */

/* print header */
printf( "%10s%10s\n", "Radius", "Volume" );

/* use sphere volume macro */
for ( i = 1; i <= 10; i++ ) {
printf( "%10d%10.3f\n", i, SPHEREVOLUME( i ) );
} /* end for */

return 0; /* indicate successful termination */

} /* end main */



