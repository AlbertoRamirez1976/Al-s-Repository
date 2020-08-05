//Exercise 9.11 Solution

#include <stdio.h>

int main()
{

/* test all escape sequences */
printf( "The single quote : \'\n" );
printf( "The double quote : \"\n" );
printf( "The question mark: \?\n" );
printf( "The backslash : \\\n" );
printf( "The letter a : \a\n" );
printf( "The letter b : \b\n" );
printf( "The letter n : \n\n" );
printf( "The letter r : \r\n" );
printf( "The letter t : \t\n" );

printf( "Move cursor back one position on current line. *\b*\n" );
printf( "Move cursor to start of next logical page. *\f*\n" );

printf( "Move cursor to the beginning of next line. *\n*\n" );
printf( "Move cursor to the beginning of current line. *\r*\n" );

printf( "Move cursor to the next horizontal tab position. *\t*\n" );
printf( "Move cursor to the next vertical tab position. *\v*\n" );

return 0; /* indicate successful termination */

} /* end main */
