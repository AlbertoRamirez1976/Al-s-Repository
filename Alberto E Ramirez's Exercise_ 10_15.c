//Exercise 10.15 Solution

#include <stdio.h>

void displayBits( unsigned value ); /* prototype */

int main()
{
unsigned x; /* value from user */

/* prompt user and read value */
printf( "Enter an unsigned integer: " );
scanf( "%u", &x );
displayBits( x );

return 0; /* indicate successful termination */

} /* end main */

/* display the bits of value */
void displayBits( unsigned value )
{
unsigned c; /* bit counter */
unsigned displayMask; /* bit mask */

/* if system uses 4-byte integers */
if ( sizeof( int ) == 4 ) {
displayMask = 1 << 31;
} /* end if */
else { /* assume default of 2-byte integers */
displayMask = 1 << 15;
} /* end else */
    
printf( "%7u = ", value );

/* loop through bits */
for ( c = 1; c <= sizeof( int ) * 8; c++ ) {
putchar( value & displayMask ? '1' : '0' );
value <<= 1; /* shift value 1 bit to the left */

if ( c % 8 == 0 ) { /* print a space */
putchar( ' ' );
} /* end if */
    
} /* end for */

putchar( '\n' );
} /* end function displayBits */
