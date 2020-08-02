//Exercise 6.32 Solution 
#include <stdio.h>
#define SIZE 100

/* function prototypes */
int linearSearch( int array[], int key, int low, int high );

int main()
{
int array[ SIZE ]; /* array to be searched */
int loop; /* loop counter */
int searchKey; /* element to search for */
int element; /* result of linear search */

/* initialize array elements */
for ( loop = 0; loop < SIZE; loop++ ) {
array[ loop ] = 2 * loop;
} /* end for */
	
/* obtain search key from user */
printf( "Enter the integer search key: " );
scanf( "%d", &searchKey );

/* search array for search key */
element = linearSearch( array, searchKey, 0, SIZE - 1 );

/* display message if search key was found */
if ( element != -1 ) {
printf( "Found value in element %d\n", element );
} /* end if */
else {
printf( "Value not found\n" );
} /* end else */

return 0; /* indicate successful termination */

} /* end main */

/* function to search array for specified key */
int linearSearch( int array[], int key, int low, int high )
{

/* recursively search array */
if ( array[ low ] == key ) {
return low;
} /* end if */
else if ( low == high ) {
return -1;
} /* end else if */
else { /* recursive call */
return linearSearch( array, key, low + 1, high );
} /* end else */

} /* end function linearSearch */
