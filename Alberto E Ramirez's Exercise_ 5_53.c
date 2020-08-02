//Exercise 5.53 Solution
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int randValue( int level ); /* function prototype */
 void multiplication( void ); /* function prototype */
 void correctMessage( void ); /* function prototype */
 void incorrectMessage( void ); /* function prototype */

int main()
 {
 srand( time( NULL ) ); /* seed random number generator */
 multiplication(); /* being multiplication practice */

 return 0; /* indicate successful termination */

 } /* end main */

 /* randValue generates random numbers based on grade level */
 int randValue( int level )
 {

 /* level determines size of random number */
 switch ( level ) {

 case 1:
 return rand() % 10;

 case 2:
 return rand() % 100;

 case 3:
 return rand() % 1000;

 default:
 return rand() % 10;
 } /* end switch */

 } /* end function randValue */

 /* multiplication produces pairs of random numbers and
 prompts user for product; level determines size of numbers */
 void multiplication( void )
 {
 int i; /* loop counter */
 int x; /* first factor */
 int y; /* second factor */
 int gradeLevel; /* grade-level capability */
 int right = 0; /* total number of right responses */
 int wrong = 0; /* total number of wrong responses */
 unsigned int response; /* user response for product */

 printf( "Enter the grade-level ( 1 to 3 ): " );
 scanf( "%d", &gradeLevel );

 /* loop 10 times */
 for ( i = 1; i <= 10; i++ ) {

 /* generate random numbers depending on level */
 x = randValue( gradeLevel );
 y = randValue( gradeLevel );

 printf( "How much is %d times %d? ", x, y );
 scanf( "%u", &response );

 /* loop while response is incorrect */
 while ( response != x * y ) {
 ++wrong; /* update total number of wrong answers */
 incorrectMessage();
 scanf( "%u", &response );
 } /* end while */

 ++right; /* update total number of right answers */
 correctMessage();
 } /* end for */

 /* if < 75% right */
 if ( ( double ) right / ( right + wrong) < .75 ) {
 printf( "Please ask your instructor for extra help.\n" );
 } /* end if */

 printf( "That's all for now. Bye.\n" );
 } /* end function multiplication */

 /* correctMessage randomly chooses response to correct answer */
 void correctMessage( void )
 {

 /* generate random number between 0 and 3 */
 switch ( rand() % 4 ) {

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

