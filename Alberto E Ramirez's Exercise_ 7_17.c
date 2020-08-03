//Exercise 7.17 Solution
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* function prototypes */
void moveTortoise( int *turtlePtr );
void moveHare( int *rabbitPtr );
void printCurrentPositions( int *snapperPtr, int *bunnyPtr );

int main()
{
int tortoise = 1; /* tortoise current position */
int hare = 1; /* hare current position */
int timer = 0; /* time elapsed during race */

srand( time( NULL ) );

printf( "ON YOUR MARK, GET SET\n" );
printf( "BANG !!!!\n" );
printf( "AND THEY'RE OFF !!!!\n" );

/* loop through the events */
while ( tortoise != 70 && hare != 70 ) {
moveTortoise( &tortoise );
moveHare( &hare );
printCurrentPositions( &tortoise, &hare );
++timer;
} /* end while */

/* determine the winner and print message */
if ( tortoise >= hare ) {
printf( "\nTORTOISE WINS!!! YAY!!!\n" );
} /* end if */
else {
printf( "Hare wins. Yuch.\n" );
} /* end else */

printf( "TIME ELAPSED = %d seconds", timer );

return 0; /* indicate successful termination */

} /* end main */

/* progress for the tortoise */
void moveTortoise( int *turtlePtr )
{
int x; /* random number */

x = rand() % 10 + 1; /* generate random number from 1-10 */

/* determine progress */
if ( x >= 1 && x <= 5 ) { /* fast plod */
*turtlePtr += 3;
} /* end if */
else if ( x == 6 || x == 7 ) { /* slip */
*turtlePtr -= 6;
} /* end else if */
else { /* slow plod */
++( *turtlePtr );
} /* end else */

/* check boundaries */
if ( *turtlePtr < 1 ) {
*turtlePtr = 1;
} /* end if */
if ( *turtlePtr > 70 ) {
*turtlePtr = 70;
} /* end if */

} /* end function moveTortoise */

/* progress for the hare */
void moveHare( int *rabbitPtr )
{
int y; /* random number */
y = rand() % 10 + 1; /* generate random number from 1-10 */

/* determine progress */
if ( y == 3 || y == 4 ) { /* big hop */
*rabbitPtr += 9;
} /* end if */
else if ( y == 5 ) { /* big slip */
*rabbitPtr -= 12;
} /* end else if */
else if ( y >= 6 && y <= 8 ) { /* small hop */
++( *rabbitPtr );
} /* end else if */
else if ( y == 10 ) { /* small slip */
*rabbitPtr -= 2;
} /* end else if */
	
/* check boundaries */
if ( *rabbitPtr < 1 ) {
*rabbitPtr = 1;
} /* end if */

if ( *rabbitPtr > 70 ) {
*rabbitPtr = 70;
} /* end if */

} /* end function moveHare */

/* display new position */
void printCurrentPositions( int *snapperPtr, int *bunnyPtr )
{
int count; /* counter */

/* loop through race */
for ( count = 1; count <= 70; count++ )

/* print current leader */
if ( count == *snapperPtr && count == *bunnyPtr ) {
printf( "OUCH!!!" );
} /* end if */
else if ( count == *bunnyPtr ) {
printf( "H" );
} /* end else if */
else if ( count == *snapperPtr ) {
printf( "T" );
} /* end else if */
else {
printf( " " );
} /* end else */

printf( "\n" );
} /* end function printCurrentPositions */
	
