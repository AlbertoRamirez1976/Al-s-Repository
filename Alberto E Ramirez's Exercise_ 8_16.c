//Exercise 8.16 Solution

#include <stdio.h>
#include <string.h>
int main()
{
char text[ 80 ]; /* line of text */
char search[ 15 ]; /* search string */
char *searchPtr; /* poiner to search string */

/* get line of text from user */
printf( "Enter a line of text:\n" );
gets( text );

/* get search string from user */
printf( "Enter a search string: " );
scanf( "%s", search );

/* search for search string in text */
searchPtr = strstr( text, search );

/* if searchPtr is not NULL */
if ( searchPtr ) {
printf( "\n%s\n%s\"%s\":\n%s\n",
"The remainder of the line beginning with",
"the first occurrence of ", search, searchPtr );

/* search for a second occurrence */
searchPtr = strstr( searchPtr + 1, search );

/* if searchPtr is not NULL */
if ( searchPtr ) {
printf( "\n%s\n%s\"%s\":\n%s\n",
"The remainder of the line beginning with",
"the second occurrence of ", search, searchPtr );
} /* end if */
else {
printf( "The search string appeared only once.\n" );
} /* end else */

} /* end if */
else {
printf( "\"%s\" not found.\n", search );
} /* end else */

return 0; /* indicate successful termination */

} /* end main */
