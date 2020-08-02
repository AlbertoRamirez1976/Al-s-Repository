//Exercise 5.52 Solution
#include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 void multiplication( void ); /* function prototype */
 void correctMessage( void ); /* function prototype */
 void incorrectMessage( void ); /* function prototype */

 int main()
 {
 srand( time( NULL ) ); /* seed random number generator */
 multiplication(); /* begin multiplication practice */

 return 0; /* indicate successful termination */

 } /* end main */

 /* multiplication produces pairs of random numbers and
 prompts user for product */
 void multiplication( void )
 {
 int i; /* loop counter */
 int x; /* first factor */
 int y; /* second factor */
 int response; /* user response for product */
 int right = 0; /* total number of right responses */
 int wrong = 0; /* total number of wrong responses */

 /* loop 10 times */
 for ( i = 1; i <= 10; i++ ) {
 x = rand() % 10; /* generate 1-digit random number */
 y = rand() % 10; /* generate another 1-digit random number */

 printf( "How much is %d times %d? ", x, y );
 scanf( "%d", &response );

 /* loop while not correct response */
 while ( response != x * y ) {
 wrong++; /* update total number of wrong responses */
 incorrectMessage();
 scanf( "%d", &response );
 } /* end while */

 right++; /* update total number of correct responses */
 correctMessage();
 } /* end for */

 /* determine if help is needed */
 if ( ( double ) right / ( right + wrong ) < .75 ) {
 printf( "Please ask your instructor for extra help.\n" );
 } /* end if */

 printf( "That's all for now. Bye.\n" );
 } /* end function multiplication */

 /* correctMessage randomly chooses response to correct answer */
 void correctMessage( void )
 {

 /* generate random number between 0 and 3 */
 switch ( rand() % 4 ) {

 /* display random response */
 case 0:
 printf( "Very good!\n\n" );
 break; /* exit switch */

case 1:
 printf( "Excellent!\n\n" );
 break; /* exit switch */

 case 2:
 printf( "Nice work!\n\n" );
 break; /* exit switch */

 case 3:
 printf( "Keep up the good work!\n\n" );
 break; /* exit switch */
 } /* end switch */

 } /* end function correctMessage */

 /* incorrectMessage randomly chooses response to incorrect answer */
 void incorrectMessage( void )
 {

 /* generate random number between 0 and 3 */
 switch ( rand() % 4 ) {

 /* display random response */
 case 0:
 printf( "No. Please try again.\n? " );
 break; /* exit switch */

 case 1:
 printf( "Wrong. Try once more.\n? " );
  break; /* exit switch */

 case 2:
 printf( "Don't give up!\n? " );
 break; /* exit switch */

 case 3:
 printf( "No. Keep trying.\n? " );
 break; /* exit switch */
 } /* end switch */

 } /* end function incorrectMessage */

