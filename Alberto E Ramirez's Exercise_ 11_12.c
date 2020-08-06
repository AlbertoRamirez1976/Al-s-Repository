//Exercise 11.12 Solution
 
#include <stdio.h>

void wordGenerator( int number[] ); /* prototype */

int main()
{
int loop; /* loop counter */
int phoneNumber[ 7 ] = { 0 }; /* holds phone number */

/* prompt user to enter phone number */
printf( "Enter a phone number one digit at a time" );
printf( " using the digits 2 thru 9:\n" );

/* loop 7 times to get number */
for ( loop = 0; loop <= 6; loop++ ) {
printf( "? " );
scanf( "%d", &phoneNumber[ loop ] );

/* test if number is between 0 and 9 */
while ( phoneNumber[ loop ] < 2 || phoneNumber[ loop ] > 9 ) {
printf( "\nInvalid number entered. Please enter again: " );
scanf( "%d", &phoneNumber[ loop ] );
} /* end while */

} /* end for */

wordGenerator( phoneNumber ); /* form words from phone number */

return 0; /* indicate successful termination */

} /* end main */

/* function to form words based on phone number */
void wordGenerator( int number[] )
{
int loop; /* loop counter */
int loop1; /* loop counter for first digit of phone number */
int loop2; /* loop counter for second digit of phone number */
int loop3; /* loop counter for third digit of phone number */
int loop4; /* loop counter for fourth digit of phone number */
int loop5; /* loop counter for fifth digit of phone number */
int loop6; /* loop counter for sixth digit of phone number */
int loop7; /* loop counter for seventh digit of phone number */
FILE *foutPtr; /* output file pointer */

/* letters corresponding to each number */
char *phoneLetters[ 10 ] = { "", "", "ABC", "DEF", "GHI", "JKL",
"MNO", "PRS", "TUV", "WXY"};

/* open output file */
if ( ( foutPtr = fopen( "phone.out", "w" ) ) == NULL ) {
printf( "Output file was not opened.\n" );
} /* end if */
else { /* print all possible combinations */

for ( loop1 = 0; loop1 <= 2; loop1++ ) {

for ( loop2 = 0; loop2 <= 2; loop2++ ) {

for ( loop3 = 0; loop3 <= 2; loop3++ ) {

for ( loop4 = 0; loop4 <= 2; loop4++ ) {

for ( loop5 = 0; loop5 <= 2; loop5++ ) {

for ( loop6 = 0; loop6 <= 2; loop6++ ) {

for ( loop7 = 0; loop7 <= 2; loop7++ ) {
fprintf( foutPtr, "%c%c%c%c%c%c%c\n",
phoneLetters[ number[ 0 ] ][ loop1 ],
phoneLetters[ number[ 1 ] ][ loop2 ],
phoneLetters[ number[ 2 ] ][ loop3 ],
phoneLetters[ number[ 3 ] ][ loop4 ],
phoneLetters[ number[ 4 ] ][ loop5 ],
phoneLetters[ number[ 5 ] ][ loop6 ],
phoneLetters[ number[ 6 ] ][ loop7 ] );
} /* end for */

} /* end for */

} /* end for */

} /* end for */

} /* end for */

} /* end for */
 
} /* end for */

/* output phone number */
fprintf( foutPtr, "\nPhone number is " );

/* loop through digits */
for ( loop = 0; loop <= 6; loop++ ) {

/* insert hyphen */
if ( loop == 3 ) {
fprintf( foutPtr, "-" );
} /* end if */

fprintf( foutPtr, "%d", number[ loop ] );
} /* end for */

} /* end else */

fclose( foutPtr ); /* close file pointer */
} /* end function wordGenerator

