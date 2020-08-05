//Exercise 8.26 Solution
  
#include <stdio.h>

/* function prototypes */
int isDigit( int c );
int isAlpha( int c );
int isAlNum( int c );
int isLower( int c );
int isUpper( int c );
int toLower( int c );
int isSpace( int c );
int isPunct( int c );
int isPrint( int c );
int isGraph( int c );
int toLower( int c );
int toUpper( int c );

int main()
{
int v; /* function result */
char array[ 2 ] = { '\0' }; /* character from user */

/* read a character from the user */
printf( "Enter a character: " );
scanf( "%c", &array[ 0 ] );

/* test isDigit function */
v = isDigit( ( int ) array[ 0 ] );
printf( "According to isDigit" );
v == 0 ? printf( " %c is not a digit\n", array[ 0 ] ):
printf( " %c is a digit\n", array[ 0 ] );

/* test isAlpha function */
v = isAlpha( ( int ) array[ 0 ] );
printf( "According to isAlpha" );
v == 0 ? printf( " %c is not a letter\n", array[ 0 ] ):
printf( " %c is a letter\n", array[ 0 ] );

/* test isAlNum function */
v = isAlNum( ( int ) array[ 0 ] );
printf( "According to isAlNum" );
v == 0 ? printf( " %c is not a letter or digit\n", array[ 0 ] ):
printf( " %c is a letter or digit\n", array[ 0 ] );

/* test isLower function */
v = isLower( ( int ) array[ 0 ] );
printf( "According to isLower" );
v == 0 ? printf( " %c is not a lowercase letter\n", array[ 0 ] ):
printf( " %c is a lowercase letter\n", array[ 0 ] );

/* test isUpper function */
v = isUpper( ( int ) array[ 0 ] );
printf( "According to isUpper" );
v == 0 ? printf( " %c is not an uppercase letter\n", array[ 0 ] ):
printf( " %c is an uppercase letter\n", array[ 0 ] );

/* test isSpace function */
v = isSpace( ( int ) array[ 0 ] );
printf( "According to isSpace" );
v == 0 ? printf( " %c is not a white-space character\n", array[ 0 ] ):
printf( " character is a white-space character\n" );
/* test isPunct function */
v = isPunct( ( int ) array[ 0 ] );
printf( "According to isPunct" );
v == 0 ? printf( " %c is not a punctuation character\n", array[ 0 ] ):
printf( " %c is a punctuation character\n", array[ 0 ] );

/* test isPrint function */
v = isPrint( ( int ) array[ 0 ] );
printf( "According to isPrint" );
v == 0 ? printf( " %c is not a printing character\n", array[ 0 ] ):
printf( " %c is a printing character\n", array[ 0 ] );

/* test isGraph function */
v = isGraph( ( int ) array[ 0 ] );
printf( "According to isGraph" );
v == 0 ? printf( " %c is not a printing character\n", array[ 0 ] ):
printf( " %c is a printing character other than space\n", array[ 0 ] );

/* test toLower function */
v = toLower( ( int ) array[ 0 ] );
printf( "According to toLower" );
v == 0 ? printf( " %c is unchanged\n", array[ 0 ] ):
printf( " %c has been converted to lowercase\n", v );

/* test toUpper function */
v = toUpper( ( int ) array[ 0 ] );
printf( "According to toUpper" );
v == 0 ? printf( " %c is unchanged\n", array[ 0 ] ):
printf( " %c has been converted to uppercase\n", v );

return 0; /* indicate successful termination */

} /* end main */

/* determines whether argument is a digit */
int isDigit( int c )
{
return ( c >= 48 && c <= 57 ) ? 1 : 0;

} /* end function isDigit */

/* determines whether argument is a letter */
int isAlpha( int c )
{
return ( ( c >= 65 && c <= 90 ) || ( c >= 97 && c <= 122 ) ) ? 1 : 0;

} /* end function isAlpha */

/* determines whether argument is a letter or digit */
int isAlNum( int c )
{
return ( isDigit( c ) == 1 || isAlpha( c ) == 1 ) ? 1 : 0;

} /* end function isAlNum */

/* determines whether argument is a lowercase letter */
int isLower( int c )
{
return ( c >= 97 && c <= 122 ) ? 1 : 0;

} /* end function isLower */

/* determines whether argument is an uppercase letter */
int isUpper( int c )
{
return ( c >= 65 && c <= 90 ) ? 1 : 0;

} /* end function isUpper */

/* determines whether argument is a whitespace character */
int isSpace( int c )
{
return ( ( c == 32 ) || ( c >= 9 && c <= 13 ) ) ? 1 : 0;

} /* end function isSpace */

/* determines whether argument is a printing character
other than a space, a digit or a letter */
int isPunct( int c )
{
return ( isAlNum( c ) == 0 && isSpace( c ) == 0 ) ? 1 : 0;

} /* end function isPunct */

/* determines whether argument is a printing character
including the space character */
int isPrint( int c )
{
return ( c >= 32 && c <= 126 ) ? 1 : 0;

} /* end function isPrint */

/* determines whether argument is a printing character
other than the space character */
int isGraph( int c )
{
return ( c >= 33 && c <= 126 ) ? 1 : 0;

} /* end function isGraph */

/* converts and uppercase letter to lowercase */
int toLower( int c )
{
return ( isUpper( c ) == 1 ) ? c + 32 : c;

} /* end function toLower */

/* converts a lowercase letter to uppercase */
int toUpper( int c )
{
return ( isLower( c ) == 1 ) ? c - 32 : c;

} /* end function toUpper */
