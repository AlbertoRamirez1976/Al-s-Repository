//Exercise 8.37 solution

#include <stdio.h>

int main()
{
double amount; /* check amount */
double base = 100000.0; /* base to check number of digits */
int i; /* loop counter */
int j; /* loop counter */

/* get check amount */
printf( "Enter check amount: " );
scanf( "%lf", &amount );

printf( "The protected amount is $" );

/* loop until amount is less than base */
for ( i = 0; amount < base; i++ ) {
base /= 10;
} /* end for */

/* print i leading asterisks */
for ( j = 1; j <= i; j++ ) {
printf( "*" );
} /* end for */

printf( "%*.2f\n", 9 - i, amount );

return 0; /* indicate successful termination */

} /* end main */
