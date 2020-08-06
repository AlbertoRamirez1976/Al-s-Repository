//Exercise 11.15 Solution 
    
#include <stdio.h>
#include <stdlib.h>

int main()
{
char c; /* current character */
char sentence[ 80 ]; /* text from user or input file */
char input[ 20 ]; /* input file */
char output[ 20 ]; /* output file */
char choice[ 2 ]; /* user's menu choice */
int i = 0; /* character counter */
FILE *infilePtr; /* input file pointer */
FILE *outfilePtr; /* output file pointer */

/* display choices to user */
printf( "%s%s\n%s\n%s", "1 Read from standard input; ",
"write to standard output", "2 Read from a file; write to file",
"Enter choice: " );
scanf( "%s", choice );

/* while user does not enter a valid choice */
while ( choice[ 0 ] != '1' && choice[ 0 ] != '2' ) {
printf( "Invalid choice. Choose again: " );
scanf( "%s", choice );
} /* end while */
    
/* if user chooses option 2 */
if ( choice[ 0 ] == '2' ) {
printf( "Enter input file name: " ); /* get input file name */
scanf( "%s", input );

printf( "Enter output file name: " ); /* get output file name */
scanf( "%s", output );

/* exit program if unable to open input file */
if ( ( infilePtr = fopen( input, "r" ) ) == NULL ) {
printf( "Unable to open %s\n", input );
exit( 1 );
} /* end if */

/* exit program if unable to open output file */
else if ( ( outfilePtr = fopen( output, "w" ) ) == NULL ) {
printf( "Unable to open %s\n", output );
fclose( infilePtr );
exit( 1 );
} /* end if */

} /* end if */
else { /* if user chooses option 1 */
infilePtr = stdin;
outfilePtr = stdout;
} /* end else */

/* if user chooses option 1 */
if ( choice[ 0 ] == '1' ) {

/* prompt user for text */
printf( "Enter a line of text:\n" );
scanf( " " ); /* Eliminate spaces and newlines at the
start of the input stream */
} /* end if */

/* read each character using fgetc */
while ( ( c = fgetc( infilePtr ) ) != '\n' && !feof( infilePtr ) ) {
sentence[ i++ ] = c;
} /* end while */

/* add terminating character and output text with fputs */
sentence[ i ] = '\0';
fprintf( outfilePtr, "\nThe line entered was:\n" );
fputs( sentence, outfilePtr );
    
/* close file pointers */
if ( choice[ 0 ] == '2' ) {
fclose( infilePtr );
fclose( outfilePtr );
} /* end if */
    
return 0; /* indicate successful termination */
