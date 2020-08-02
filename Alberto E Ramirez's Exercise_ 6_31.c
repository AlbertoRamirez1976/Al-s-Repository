//Exercise 6.31 Solution 
#include <stdio.h>

/* symbolic constant SIZE must be defined as the array size
for bucketSort to work */
#define SIZE 12

/* function prototypes */
void bucketSort( int a[] );
void distributeElements( int a[], int buckets[][ SIZE ], int digit );
void collectElements( int a[], int buckets[][ SIZE ] );
int numberOfDigits( int b[], int arraySize );
void zeroBucket( int buckets[][ SIZE ] );

int main()
{

/* array to be sorted */
int array[ SIZE ] = { 19, 13, 5, 27, 1, 26, 31, 16, 2, 9, 11, 21 };
int i; /* loop counter */

printf( "Array elements in original order:\n" );

/* display the unsorted array */
for ( i = 0; i < SIZE; i++ ) {
printf( "%3d", array[ i ] );
} /* end for */

putchar( '\n' );
bucketSort( array ); /* sort the array */

printf( "\nArray elements in sorted order:\n" );

/* display sorted array */
for ( i = 0; i < SIZE; i++ ) {
printf( "%3d", array[ i ] );
} /* end for */

putchar( '\n' );

return 0; /* indicate successful termination */

} /* end main */

/* Perform the bucket sort algorithm */
void bucketSort( int a[] )
{
int totalDigits; /* largest # of digits in array */
int i; /* loop counter */
int bucket[ 10 ][ SIZE ] = { 0 }; /* initialize bucket array */

totalDigits = numberOfDigits( a, SIZE );

/* put elements in buckets for sorting
one sorted, get elements from buckets */
for ( i = 1; i <= totalDigits; i++ ) {
distributeElements( a, bucket, i );
collectElements( a, bucket );

/* set all bucket contents to zero */
if ( i != totalDigits ) {
zeroBucket( bucket );
} /* end if */

} /* end for */

} /* end function bucketSort */

/* Determine the number of digits in the largest number */
int numberOfDigits( int b[], int arraySize )
{
int largest = b[ 0 ]; /* assume first element is largest */
int i; /* loop counter */
int digits = 0; /* total number of digits */

/* find largest array element */
for ( i = 1; i < arraySize; i++ ) {

if ( b[ i ] > largest ) {
largest = b[ i ];
} /* end if */

} /* end for */

/* find number of digits of largest element */
while ( largest != 0 ) {
++digits;
largest /= 10;
} /* end while */

return digits; /* return number of digits */

} /* end function numberOfDigits */

/* Distribute elements into buckets based on specified digit */
void distributeElements( int a[], int buckets[][ SIZE ], int digit )
{
int divisor = 10; /* used to get specific digit */
int i; /* loop counter */
int bucketNumber; /* current bucket number */
int elementNumber; /* current element number */

/* determine the divisor */
for ( i = 1; i < digit; i++ ) {
divisor *= 10;
} /* end for */

/* bucketNumber example for hundreds digit: */
/* ( 1234 % 1000 - 1234 % 100 ) / 100 --> 2 */
for ( i = 0; i < SIZE; i++ ) {
bucketNumber = ( a[ i ] % divisor - a[ i ] % ( divisor / 10 ) ) /
( divisor / 10 );

/* retrieve value in buckets[ bucketNumber ][ 0 ] to determine */
/* which element of the row to store a[ i ] in. */
elementNumber = ++buckets[ bucketNumber ][ 0 ];
buckets[ bucketNumber ][ elementNumber ] = a[ i ];
} /* end for */

} /* end function distributeElements */

/* Return elements to original array */
void collectElements( int a[], int buckets[][ SIZE ] )
{
int i; /* loop counter */
int j; /* loop counter */
int subscript = 0; /* current subscript */

/* retrieve elements from buckets */
for ( i = 0; i < 10; i++ ) {

for ( j = 1; j <= buckets[ i ][ 0 ]; j++ ) {
a[ subscript++ ] = buckets[ i ][ j ];
} /* end for */

} /* end for */

} /* end function collectElements */

/* Set all buckets to zero */
void zeroBucket( int buckets[][ SIZE ] )
{
int i; /* loop counter */
int j; /* loop counter */

for ( i = 0; i < 10; i++ ) {

for ( j = 0; j < SIZE; j++ ) {
buckets[ i ][ j ] = 0;
} /* end for */

} /* end for */

} /* end function zeroBucket */
