//Exercise 11.16 Solution 
    
#include <stdio.h>

int main()

{
FILE *outPtr; /* output file pointer */

/* open datasize.dat for writing */
outPtr = fopen( "datasize.dat", "w" );

/* write size of various data types */
fprintf( outPtr, "%s%16s\n", "Data type", "Size" );
fprintf( outPtr, "%s%21d\n", "char", sizeof( char ) );
fprintf( outPtr, "%s%12d\n", "unsigned char",
sizeof( unsigned char ) );
fprintf( outPtr, "%s%16d\n", "short int", sizeof( short int ) );
fprintf( outPtr, "%s%7d\n", "unsigned short int",
sizeof( unsigned short int ) );
fprintf( outPtr, "%s%22d\n", "int", sizeof( int ) );
fprintf( outPtr, "%s%13d\n", "unsigned int",
sizeof( unsigned int ) );
fprintf( outPtr, "%s%17d\n", "long int", sizeof( long int ) );
fprintf( outPtr, "%s%8d\n", "unsigned long int",
sizeof( unsigned long int ) );
fprintf( outPtr, "%s%20d\n", "float", sizeof( float ) );
fprintf( outPtr, "%s%19d\n", "double", sizeof( double ) );
fprintf( outPtr, "%s%14d\n", "long double", sizeof( long double ) );

fclose( outPtr ); /* close file pointer */

return 0; /* indicate successful termination */

} /* end main */

