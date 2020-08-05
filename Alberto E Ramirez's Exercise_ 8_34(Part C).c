//Exercise 8.34 Part C solution 

#include <stdio.h>
#include <string.h>

int main()
{
char text[ 3 ][ 80 ]; /* 3 string from user */
char *temp; /* token pointer */
char words[ 100 ][ 20 ] = { "" }; /* array of words */
int i; /* loop counter */
int j; /* loop counter */
int count[ 100 ] = { 0 }; /* array of word counts */

printf( "Enter three lines of text:\n" );

/* read three lines of text */
for ( i = 0; i <= 2; i++ ) {
gets( &text[ i ][ 0 ] );
} /* end for */

/* loop through 3 strings */
for ( i = 0; i <= 2; i++ ) {

/* get first token */
temp = strtok( &text[ i ][ 0 ], ". \n" );

/* while temp does not equal NULL */
while ( temp ) {
/* loop through words for match */
for ( j = 0; words[ j ][ 0 ] && strcmp( temp,
&words[ j ][ 0 ] ) != 0; j++ ) {
; /* empty body */
} /* end for */

++count[ j ]; /* increment count */

/* if temp could not be found in words array */
if ( !words[ j ][ 0 ] ) {
strcpy( &words[ j ][ 0 ], temp );
} /* end if */

temp = strtok( NULL, ". \n" );
} /* end while */

} /* end for */

putchar( '\n' );

/* loop through words array */
for ( j = 0; words[ j ][ 0 ] != '\0' && j <= 99; j++ ) {
printf( "\"%s\" appeared %d time%s\n",
&words[ j ][ 0 ], count[ j ], count[ j ] == 1 ? "" : "s" );
} /* end for */

return 0; /* indicate successful termination */

} /* end main */

