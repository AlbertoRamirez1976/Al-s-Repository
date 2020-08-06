//Exercise 10.10 Solution

#include <stdio.h>

void displayBits( unsigned value ); /* prototype */

int main()
{
unsigned val; /* value from user */

/* prompt user and read value */
printf( "Enter an integer: " );
scanf( "%u", &val );

/* display value before shifting */
printf( "%u before right shifting 4 bits is:\n", val );
displayBits( val );

/* display value after shifting */
printf( "%u after right shifting 4 bits is:\n", val );
displayBits( val >> 4 );

return 0; /* indicate successful termination */

} /* end main */

/* function displayBits prints each bit of value */
void displayBits( unsigned value )
{
unsigned c; /* bit counter */
unsigned displayMask = 1 << 15; /* bit mask */

printf( "%7u = ", value );

/* loop through bits */
for ( c = 1; c <= 16; c++ ) {
value & displayMask ? putchar( '1' ) : putchar( '0' );
value <<= 1; /* shift value 1 bit to the left */

if ( c % 8 == 0 ) { /* print a space */
putchar( ' ' );
} /* end if */

} /* end for */

putchar( '\n' );
} /* end function displayBits */
