//Exercise 6.33 Solution 
#include <stdio.h>
#define SIZE 15

/* function prototypes */
int binarySearch( int b[], int searchKey, int low, int high );
void printHeader( void );
void printRow( int b[], int low, int mid, int high );

int main()
{
int a[ SIZE ]; /* array to be searched */
int i; /* loop counter */
int key; /* search key */
int result; /* result of search */

/* initialize array elements */
for ( i = 0; i < SIZE; i++ ) {
a[ i ] = 2 * i;
} /* end for */

/* obtain key from user */
printf( "Enter a number between 0 and 28: " );
scanf( "%d", &key );

printHeader();
	
/* search array for key */
result = binarySearch( a, key, 0, SIZE - 1 );

/* display results of the search */
if ( result != -1 ) {
printf( "\n%d found in array element %d\n", key, result );
} /* end if */
else {
printf( "\n%d not found\n", key );
} /* end else */

return 0; /* indicate successful termination */

} /* end main */

/* function to search array for specified key */
int binarySearch( int b[], int searchKey, int low, int high )
{
int middle; /* middle of array */

/* find middle of array and print current subarray */
if ( low <= high ) {
middle = ( low + high ) / 2;
printRow( b, low, middle, high );

/* determine if middle element is the key and if not,
recursively call binarySearch */
if ( searchKey == b[ middle ] ) {
return middle;
} /* end if */
else if ( searchKey < b[ middle ] ) {
/* recursive call on bottom half of array */
return binarySearch( b, searchKey, low, middle - 1 );
} /* end else if */
else {
/* recursive call on upper half of array */
return binarySearch( b, searchKey, middle + 1, high );
} /* end else */

} /* end if */

return -1; /* searchKey not found */

} /* end function binarySearch */

/* Print a header for the output */
void printHeader( void )
{
int i; /* loop counter */
	
printf( "\nSubscripts:\n" );

/* print subscripts of array */
for ( i = 0; i < SIZE; i++ ) {
printf( "%3d ", i );
} /* end for */
	
printf( "\n" );

/* print dividing line */
for ( i = 1; i <= 4 * SIZE; i++ ) {
printf( "-" );
} /* end for */

printf( "\n" );
} /* end function printHeader */

/* print one row of output showing the current
part of the array being processed. */
void printRow( int b[], int low, int mid, int high )
{
int i; /* loop counter */

/* print subarray currently being processed */
for ( i = 0; i < SIZE; i++ ) {

if ( i < low || i > high ) {
printf( " " );
} /* end if */
else if ( i == mid ) { /* mark middle value */
printf( "%3d*", b[ i ] );
} /* end else if */
else {
printf( "%3d ", b[ i ] );
} /* end else */

} /* end for */
	
printf( "\n" );
} /* end function printRow */
