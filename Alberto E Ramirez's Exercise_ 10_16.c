//Exercise 10_16.c 
    
/* This program determines if a value is a multiple of X. */
#include <stdio.h>

int multiple( int num ); /* prototype */

int main(void)
{
int y; /* y will hold an integer entered by the user */

puts( "Enter an integer between 1 and 32000: " );
scanf( "%d", &y );

/* if y is a multiple of X */
if ( multiple( y ) ) {
printf( "%d is a multiple of X\n", y );
} /* end if */
else {
printf( "%d is not a multiple of X\n", y );
} /* end else */
}

// determine whether num is a multiple of x
int multiple(int num)
{
int mask = 1; // initialize mask
int mult = 1; // initialize mult
  
for (int  i = 1; i <= 10; ++i, mask <<= 1 ) {
 
if ( ( num & mask ) != 0 ) {
mult = 0;
break;
}
}
 
return mult;
}
