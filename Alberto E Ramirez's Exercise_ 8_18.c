//Exercise 8.18 Solution 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
char text[ 3 ][ 80 ]; /* array to hold text entered by user */
char search; /* search character */
char *searchPtr; /* pointer to search character */
int count = 0; /* total search characters found */
int i; /* loop counter */
int j; /* loop counter */

printf( "Enter three lines of text:\n" );

/* read 3 lines of text */
for ( i = 0; i <= 2; i++ ) {
gets( &text[ i ][ 0 ] );
} /* end for */

/* convert all letters to lowercase */
for ( i = 0; i <= 2; i++ ) {

/* loop through each character */
for ( j = 0; text[ i ][ j ] != '\0'; j++ ) {
text[ i ][ j ] = tolower( text[ i ][ j ] );
} /* end for */

} /* end for */

/* get search character */
printf( "\nEnter a search character: " );
scanf( "%c", &search );

/* loop through 3 lines of text */
for ( i = 0; i <= 2; i++ ) {

/* set pointer to first character in line */
searchPtr = &text[ i ][ 0 ];

/* loop while strchr does not return NULL */
while ( searchPtr = strchr( searchPtr, search ) ) {
++count;
searchPtr++;
} /* end while */

} /* end for */

printf( "\nThe total occurrences of '%c' in the text is %d\n",
search, count );

return 0; /* indicate successful termination */

} /* end main */
