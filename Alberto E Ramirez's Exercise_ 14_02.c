//Exercise 14.2 Solution 

#include <stdio.h>
#include <stdarg.h>

/* function with variable length argument list */
int sum( int i, ... );

int main()
{
int a = 1; /* values to sum */
int b = 2;
int c = 3;
int d = 4;
int e = 5;

/* display integer values */
printf( "%s%d, %s%d, %s%d, %s%d, %s%d\n", "a = ", a, "b = ",
b, "c = ", c, "d = ", d, "e = ", e );

/* call sum with different number of arguments in each call */
printf( "%s%d\n%s%d\n%s%d\n%s%d\n", "The sum of a and b is: ",
sum( 2, a, b ), "The sum of a, b, and c is: ", sum( 3, a, b, c ),
"The sum of a, b, c, and d is: ", sum( 4, a, b, c, d ),
"The sum of a, b, c, d, and e is: ", sum( 5, a, b, c, d, e ) );

return 0; /* indicate successful termination */
 
} /* end main */

/* sums integers passed as arguments */
int sum( int i, ... )
{
int total = 0; /* sum of integers */
int j; /* loop counter */
va_list ap; /* variable length argument list */

va_start( ap, i ); /* invoke macro to access arguments */

/* calculate total */
for ( j = 1; j <= i; j++ ) {
total += va_arg( ap, int );
} /* end for */

va_end( ap ); /* perform termination housekeeping */

return total; /* return sum of arguments */
 
} /* end function sum */
