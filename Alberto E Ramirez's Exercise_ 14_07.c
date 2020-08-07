/Exercise 14.7 Solution

#include <stdio.h>

/* function prototype */
void reverseFile( FILE *inPtr, FILE *outPtr );

int main( int argc, int *argv[] )
{
FILE *inFilePtr; /* input file pointer */
FILE *outFilePtr; /* output file pointer */

/* tell user if invalid arguments */
if ( argc != 3 ) {
printf( "Usage: copy infile outfile\n" );
} /* end if */
else {

/* exit program if input file cannot be opened */
if ( ( inFilePtr = fopen( argv[ 1 ], "r" ) ) != NULL ) {

/* exit program if output file cannot be opened */
if ( ( outFilePtr = fopen( argv[ 2 ], "w" ) ) != NULL ) {
reverseFile( inFilePtr, outFilePtr );
} /* end if */
else {
printf( "File \"%s\" could not be opened\n", argv[ 2 ] );
} /* end else */

} /* end if */
else {
printf( "File \"%s\" could not be opened\n", argv[ 1 ] );
} /* end else */

} /* end else */

return 0; /* indicate successful termination */
 
} /* end main */

/* function that writes characters in reverse order */
void reverseFile( FILE *inPtr, FILE *outPtr )
{
int c; /* current character */

/* if not end of file */
if ( ( c = fgetc( inPtr ) ) != EOF ) {
reverseFile( inPtr, outPtr );
} /* end if */

fputc( c, outPtr ); /* write character to output file */
} /* end function reverseFile */
