//Exercise 6.25 Part A Solution
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NO 0
#define YES 1

/* function prototypes */
int validMove( int row, int column, int workBoard[][ 8 ] );
void printBoard( int board[][ 8 ] );

int main()
{
int currentRow; /* current row */
int currentColumn; /* current column */
int moveType; /* current move type */
int moveNumber = 0; /* move counter */
int testRow; /* possible next row */
int testColumn; /* possible next column */
int count; /* counter */
int done; /* flag to indicate end */
int goodMove; /* result of call to validMove */

/* horizontal and vertical moves for the knight, and board */
int horizontal[ 8 ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int vertical[ 8 ] = { -1, -2, -2, -1, 1, 2, 2, 1 };
int board[ 8 ][ 8 ] = { 0 };

srand( time( NULL ) );

currentRow = rand() % 8;
currentColumn = rand() % 8;
board[ currentRow ][ currentColumn ] = ++moveNumber;
done = NO;

/* continue while knight can still move */
while ( !done ) {
moveType = rand() % 8;
testRow = currentRow + vertical[ moveType ];
testColumn = currentColumn + horizontal[ moveType ];
goodMove = validMove( testRow, testColumn, board );

/* test if desired move is valid */
if ( goodMove ) {
currentRow = testRow;
currentColumn = testColumn;
board[ currentRow ][ currentColumn ] = ++moveNumber;
} /* end if */
else {

/* if move is not legal try another random move */
for ( count = 0; count < 7 && !goodMove; count++ ) {
moveType = ++moveType % 8;
testRow = currentRow + vertical[ moveType ];
testColumn = currentColumn + horizontal[ moveType ];
goodMove = validMove( testRow, testColumn, board );

/* test if new move is good */
if ( goodMove ) {
currentRow = testRow;
currentColumn = testColumn;
board[ currentRow ][ currentColumn ] = ++moveNumber;
} /* end if */

} /* end for */

/* if no valid moves, knight can no longer move */
if ( !goodMove ) {
done = YES;
} /* end if */

} /* end else */

/* if 64 moves have been made, a full tour is complete */
if ( moveNumber == 64 ) {
done = YES;
} /* end if */

} /* end while */

printf( "The tour has ended with %d moves.\n", moveNumber );

/* test if full tour was made */
if ( moveNumber == 64 ) {
printf( "This was a full tour!\n" );
} /* end if */
else {
printf( "This was not a full tour.\n" );
} /* end else */

printf( "The board for this random test was:\n\n" );
printBoard( board ); /* print the board */

return 0; /* indicate successful termination */

} /* end main */

/* function to test whether a square is on the board
and has not been visited yet */
int validMove( int row, int column, int workBoard[][ 8 ] )
{
/* NOTE: This test stops as soon as it becomes false */
return ( row >= 0 && row < 8 && column >= 0 &&
column < 8 && workBoard[ row ][ column ] == 0 );

} /* end function validMove */

/* function to print the chess board */
void printBoard( int board[][ 8 ] )
{
int row; /* row counter */
int col; /* column counter */

printf( " 0 1 2 3 4 5 6 7\n" );

/* print the rows and columns of the chess board */
for ( row = 0; row < 8; row++ ) {
printf( "%d", row );

for ( col = 0; col < 8; col++ ) {
printf( "%3d", board[ row ][ col ] );
} /* end for */

printf( "\n" );
} /* end for */

printf( "\n" );
} /* end function printBoard */
