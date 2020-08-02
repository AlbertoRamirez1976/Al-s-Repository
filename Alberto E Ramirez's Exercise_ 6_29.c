//Exercise 6.29 Solution
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

/* function prototypes */
void clearBoard( int workBoard[][ 8 ] );
void printBoard( int workBoard[][ 8 ] );
int validMove( int row, int column, int workBoard[][ 8 ] );

int main( void )
{

int firstMoveRow; /* starting row */
int firstMoveCol; /* starting column */
int closedTour = 0; /* closed tour flag */
int currentRow; /* current row */
int currentColumn; /* current column */
int moveNumber = 0; /* move counter */
int testRow; /* possible next row */
int testColumn; /* possible next column */
int minRow; /* minimum row access number */
int minColumn; /* minimum column access number */
int minAccess = 9; /* access number reset */
int accessNumber; /* current access number */
int moveType; /* current move type */
int done; /* flag to indicate end */
int board[ 8 ][ 8 ]; /* chess board */

/* horizontal and vertical moves for the knight */
int horizontal[ 8 ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int vertical[ 8 ] = { -1, -2, -2, -1, 1, 2, 2, 1 };

/* access grid */
int access[ 8 ][ 8 ] = { 2, 3, 4, 4, 4, 4, 3, 2,
3, 4, 6, 6, 6, 6, 4, 3,
4, 6, 8, 8, 8, 8, 6, 4,
4, 6, 8, 8, 8, 8, 6, 4,
4, 6, 8, 8, 8, 8, 6, 4,
4, 6, 8, 8, 8, 8, 6, 4,
3, 4, 6, 6, 6, 6, 4, 3,
2, 3, 4, 4, 4, 4, 3, 2 };

srand( time( NULL ) );

clearBoard( board ); /* initialize array board */
currentRow = rand() % 8;
currentColumn = rand() % 8;
firstMoveRow = currentRow; /* store first moves row */
firstMoveCol = currentColumn; /* store first moves col */

board[ currentRow ][ currentColumn ] = ++moveNumber;
done = FALSE;

/* loop while knight can still move */
while ( !done ) {
accessNumber = minAccess;

/* test what moves knight can make */
for ( moveType = 0; moveType < 8; moveType++ ) {
testRow = currentRow + vertical[ moveType ];
testColumn = currentColumn + horizontal[ moveType ];

/* if the knight can make a valid move */
if ( validMove( testRow, testColumn, board ) ) {

/* if move has lowest accessNumber, move to that space */
if ( access[ testRow ][ testColumn ] < accessNumber ) {
accessNumber = access[ testRow ][ testColumn ];
minRow = testRow;
minColumn = testColumn;
} /* end if */

--access[ testRow ][ testColumn ];
} /* end if */

} /* end for */

/* if knight cannot access any more squares, loop terminates */
if ( accessNumber == minAccess ) {
done = TRUE;
} /* end if */
else {
currentRow = minRow;
currentColumn = minColumn;
board[ currentRow ][ currentColumn ] = ++moveNumber;

/* check for closed tour */
if ( moveNumber == 64 ) {

/* loop through possible next moves */
for ( moveType = 0; moveType < 8; moveType++ ) {
testRow = currentRow + vertical[ moveType ];
testColumn = currentColumn + horizontal[ moveType ];

/* test if knight is one move away from start */
if ( testRow == firstMoveRow && testColumn ==
firstMoveCol ) {
closedTour = 1;
} /* end if */

} /* end for */

} /* end if */

} /* end else */

} /* end while */

printf( "The tour ended with %d moves.\n", moveNumber );

/* display results of tour */
if ( moveNumber == 64 && closedTour == 1 ) {
printf( "This was a closed tour!\n\n" );
} /* end if */
else if ( moveNumber == 64 ) {
printf( "This was a full tour!\n\n" );
} /* end else if */
else {
printf( "This was not a full tour.\n\n" );
} /* end else */

printf( "The board for this test is:\n\n" );
printBoard( board );

return 0; /* indicate successful termination */

} /* end main */

/* function to clear the chess board */
void clearBoard( int workBoard[][ 8 ] )
{
int row; /* row counter */
int col; /* col counter */

/* set all values on board to 0 */
for ( row = 0; row < 8; row++ ) {

for ( col = 0; col < 8; col++ ) {
workBoard[ row ][ col ] = 0;
} /* end for */

} /* end for */

} /* end function clearBoard */

/* function to print the chesboard */
void printBoard( int workBoard[][ 8 ] )
{
int row; /* row counter */
int col; /* column counter */
printf( " 0 1 2 3 4 5 6 7\n" );

/* print rows of chessboard */
for ( row = 0; row < 8; row++ ) {
printf( "%d", row );

/* print columns of chess board */
for ( col = 0; col < 8; col++ ) {
printf( "%3d", workBoard[ row ][ col ] );
} /* end for */

printf( "\n" );
} /* end for */

printf( "\n" );
} /* end function printBoard */

/* function to determine if a move is valid */
int validMove( int row, int column, int workBoard[][ 8 ] )
{

/* NOTE: This test stops as soon as it becomes false */
return ( row >= 0 && row < 8 && column >= 0 &&
column < 8 && workBoard[ row ][ column ] == 0 );

} /* end function validMove */
