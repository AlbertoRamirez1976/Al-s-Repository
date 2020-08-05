//Exercise 9.8 Solution 

#include <stdio.h>

int main()
{
int i; /* loop counter */
int x; /* first integer from user */
int y; /* second integer from user */
/* loop four times */
for ( i = 1; i <= 4; i++ ) {
printf( "\nEnter two integers: " );
scanf( "%i%d", &x, &y );
printf( "%d %d\n", x, y );
} /* end for */

return 0; /* indicate successful termination */

} /* end main */
