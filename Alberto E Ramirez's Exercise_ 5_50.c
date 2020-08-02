//Exercise 5.50 solution 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplication( void ); /* function prototype */

 int main( void )
 {
 srand( time( NULL ) ); /* seed random number generator */
 multiplication(); /* begin multiplication practice */

 return 0; /* indicate successful termination */

 } /* end main */

 /* multiplication produces pairs of random numbers and
 prompts user for product */
 void multiplication( void )
 {
 int x; /* first factor */
 int y; /* second factor */
 int response = 0; /* user response for product */

 /* use sentinel-controlled repetition */
 printf( "Enter -1 to end.\n" );

 /* loop while sentinel value not read from user */
 while ( response != -1 ) {
 x = rand() % 10; /* generate 1-digit random number */
 y = rand() % 10; /* generate another 1-digit random number */

 printf( "How much is %d times %d? ", x, y );
 scanf( "%d", &response );

 /* loop while not sentinel value or correct response */
 while ( response != -1 && response != x * y ) {
 printf( "No. Please try again.\n? " );
 scanf( "%d", &response );
 } /* end while */

 /* correct response */
 if ( response != -1 ) {
 printf( "Very good!\n\n" );
 } /* end if */

 } /* end while */

 printf( "That's all for now. Bye.\n" );

 } /* end function multiplication */
