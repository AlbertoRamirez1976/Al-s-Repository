//Exercise 10.13 Solution 

#include <stdio.h>

/* prototypes */
void unpackCharacters( char *aPtr, char *bPtr, unsigned pack );
void displayBits( unsigned value );

int main()
{
char a; /* first character unpacked */
char b; /* second character unpacked */
    
    
unsigned packed = 16706; /* initialize packed value */

/* display bits of packed */
printf( "The packed character representation is:\n" );
displayBits( packed );

/* unpack packed and display results */
unpackCharacters( &a, &b, packed );
printf( "\nThe unpacked characters are \'%c\' and \'%c\'\n", a, b );
displayBits( a );
displayBits( b );

return 0; /* indicate successful termination */

} /* end main */

/* unpack two characters from pack */
void unpackCharacters( char *aPtr, char *bPtr, unsigned pack )
{
unsigned mask1 = 65280; /* mask for first character */
unsigned mask2 = 255; /* mask for second character */

*aPtr = ( pack & mask1 ) >> 8; /* separate first character */
*bPtr = ( pack & mask2 ); /* separate second character */
} /* end function unpackCharacters */

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
