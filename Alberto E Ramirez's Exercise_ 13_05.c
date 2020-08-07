/Exercise 13.5 Solution 

#include <stdio.h>

/* macro to add two value */
#define SUM( x, y ) ( ( x ) + ( y ) )

int main()
{

/* display sum of x and y using macro SUM */
printf( "The sum of x and y is %d\n", SUM( 6, 7 ) );

return 0; /* indicate successful termination */

} /* end main */
