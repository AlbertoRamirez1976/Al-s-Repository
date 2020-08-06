//Exercise 10.14 Solution

#include <stdio.h>

/* prototypes */
unsigned reverseBits( unsigned value );
void displayBits( unsigned value );

int main()
{
unsigned a; /* unsigned integer from user */

/* prompt user and read value */
printf( "Enter an unsigned integer: " );
scanf( "%u", &a );

/* display bits of a before reversed */
printf( "\nBefore bits are reversed:\n" );
displayBits( a );

/* reverse bits and display results */
a = reverseBits( a );
printf( "\nAfter bits are reversed:\n" );
displayBits( a );

return 0; /* indicate successful termination */

} /* end main */

/* reverseBits reverses the bits of value */
unsigned reverseBits( unsigned value )
{
unsigned mask = 1; /* bit mask */
unsigned temp = 0; /* reversed bits */
int i; /* loop counter */

/* loop through bits of value */
for ( i = 0; i <= 15; i++ ) {
temp <<= 1; /* right shift 1 bit */
temp |= ( value & mask ); /* separate bit and place in temp */
value >>= 1; /* left shift 1 bit */
} /* end for */

return temp;

} /* end function reverseBits */

/* display the bits of value */
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

