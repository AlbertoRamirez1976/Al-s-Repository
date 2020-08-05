//Exercise 8.36 solution
#include <stdio.h>

int main()
{

/* array of month names */
char *months[ 13 ] = { "", "January", "February", "March",
"April", "May", "June", "July",
"August", "September", "October",
"November", "December"};
int m; /* integer month */
int d; /* integer day */
int y; /* integer year */

/* read a date from user */
printf( "Enter a date in the form mm/dd/yyyy: " );
scanf( "%d/%d/%d", &m, &d, &y );

/* output date in new format */
printf( "The date is: %s %d, %d\n", months[ m ], d, y );

return 0; /* indicate successful termination */

} /* end main */
