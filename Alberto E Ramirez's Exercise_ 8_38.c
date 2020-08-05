//Exercise 8.38 solution

/* NOTE THAT THIS PROGRAM ONLY HANDLES VALUES UP TO $99.99 */
/* The program is easily modified to process larger values */
#include <stdio.h>

int main()
{

/* word equivalents of single digits */
char *digits[ 10 ] = { "", "ONE", "TWO", "THREE", "FOUR",
"FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

/* word equivalents of 10-19 */
char *teens[ 10 ] = { "TEN", "ELEVEN", "TWELVE", "THIRTEEN",
"FOURTEEN", "FIFTEEN", "SIXTEEN",
"SEVENTEEN", "EIGHTEEN", "NINETEEN"};

/* word equivalents of tens digits */
char *tens[ 10 ] = { "", "TEN", "TWENTY", "THIRTY", "FORTY",
"FIFTY", "SIXTY", "SEVENTY", "EIGHTY",
"NINETY"};

int dollars; /* check dollar amount */
int cents; /* check cents amount */
int digit1; /* ones digit */
int digit2; /* tens digit */

/* get check amount */
printf( "Enter the check amount ( 0.00 to 99.99 ): " );
scanf( "%d.%d", &dollars, &cents );
printf( "\nThe check amount in words is:\n" );

/* print equivalent words */
if ( dollars < 10 ) {
printf( "%s ", digits[ dollars ] );
} /* end if */
else if ( dollars < 20 ) {
printf( "%s ", teens[ dollars - 10 ] );
} /* end else if */
else {
digit1 = dollars / 10; /* ones digit */
digit2 = dollars % 10; /* tens digit */

/* if ones digit is zero */
if ( digit2 == 0 ) {
printf( "%s ", tens[ digit1 ] );
} /* end if */
else {
printf( "%s-%s ", tens[ digit1 ], digits[ digit2 ] );
} /* end else */

} /* end else */

printf( "and %d/100\n", cents );

return 0; /* indicate successful termination */

} /* end main */
