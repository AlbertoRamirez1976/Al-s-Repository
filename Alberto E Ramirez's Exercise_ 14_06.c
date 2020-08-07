//Exercise 14.6 Solution 

#include <stdio.h>
#include <stdlib.h>

int main()
{
int count; /* number of elements in array */
int i; /* loop counter */
int *array; /* pointer to the array */

/* prompt user and read integer size of array */
printf( "This program dynamically allocates an array of integers.\n"
"Enter the number of elements in the array: " );
scanf( "%d", &count );

/* dynamically allocate memory */
array = calloc( count, sizeof( int ) );

/* initialize elements of array with user-entered data */
for ( i = 0; i < count; i++ ) {
printf( "Enter an integer: " );
scanf( "%d", &array[ i ] );
} /* end for */

printf( "\nThe elements of the array are:\n" );

/* display the original array */
for ( i = 0; i < count; i++ ) {
printf( "%d ", array[ i ] );
} /* end for */

/* reallocate to half the original size */
realloc( array, count / 2 * sizeof( int ) );

printf( "\n\nThe elements of the array after reallocation are:\n" );
 
/* display array after cut in half */ 
for ( i = 0; i < count / 2; i++ ) {
printf( "%d ", array[ i ] );
} /* end for */
 
return 0; /* indicate successful termination */

} /* end main */
