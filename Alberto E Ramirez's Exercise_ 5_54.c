//Exercise 5.54 Solution
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int menu( void ); /* function prototype */
 void arithmetic( void ); /* function prototype */
 void correctMessage( void ); /* function prototype */
 void incorrectMessage( void ); /* function prototype */

 int main()
 {
 srand( time( NULL ) ); /* seed random number generator */
 arithmetic(); /* begin arithmetic process */

 return 0; /* indicate successful termination */

 } /* end main */

 /* menu displays user menu of choices */
 int menu( void )
 {
 int choice; /* user's choice */

 /* display menu and read user's choice */
 do {
 printf( "Choose type of problem to study.\n" );
 printf( "Enter: 1 for addition, 2 for subtraction\n" );
 printf( "Enter: 3 for multiplication, 4 for division\n" );
 printf( "Enter: 5 for a combination of 1 through 4\n " );
 printf( "? " );
 scanf( "%d", &choice );
 } while ( choice < 1 || choice > 5 ); /* end do...while */

 return choice; /* return user's choice */

 } /* end function menu */

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


 void arithmetic( void )
 {
 int i; /* loop counter */
 int x; /* first number */
 int y; /* second number */
 int response; /* user response for product */
 int answer; /* correct answer */
 int selection; /* menu selection */
 int right = 0; /* total correct responses */
 int wrong = 0; /* total incorrect responses */
 int type; /* type of problems chosen */
 int problemMix; /* random choice of type of problem */
 char operator; /* arithmetic operator */

 selection = menu();
 type = selection;

 /* loop 10 times */
 for ( i = 1; i <= 10; i++ ) {
 x = rand() % 10; /* generate first random number */
 y = rand() % 10; /* generate second random number */

 /* if option 5, randomly select type */
 if ( selection == 5 ) {
 problemMix = 1 + rand() % 4;
 type = problemMix;
 } /* end if */

 /* generate answer and define operator depending on option */
 switch ( type ) {

 /* option 1: addition */
 case 1:
 operator = '+';
 answer = x + y;
 break; /* exit switch */

 /* option 2: subtraction */
 case 2:
 operator = ‘‘-';
 answer = x - y;
 break; /* exit switch */

 /* option 3: multiplication */
 case 3:
 operator = '*';
 answer = x * y;
 break; /* exit switch */

 /* option 4: integer division */
 case 4:
 operator = '/';

 /* eliminate divide by zero error */
 if ( y == 0 ) {
 y = 1;
 answer = x / y;
 } /* end if */
 else {
 x *= y; /* create "nice" division */
 answer = x / y;
 } /* end else */

 break; /* exit switch */
 } /* end switch */

 printf( "How much is %d %c %d? ", x, operator, y );

 scanf( "%d", &response );

 /* while not correct answer */
 while ( response != answer ) {
 ++wrong;
 incorrectMessage();
 scanf( "%d", &response );
 } /* end while */

 ++right;
 correctMessage();
 } /* end for */

 /* if < 75% right, suggest help */
 if ( ( double ) right / ( right + wrong) < .75 ) {
 printf( "Please ask your instructor for extra help.\n" );
 } /* end if */

 printf( "That's all for now. Bye.\n" );
 } /* end function arithmetic */
