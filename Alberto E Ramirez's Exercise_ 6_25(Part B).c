//Exercise 6.25 Part B Solution 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NO 0
#define YES 1

int validMove( int, int, int [][ 8 ] );

int main()
{
int currentRow; /* current row */
int currentColumn; /* current column */
int moveType; /* current move type */
int moveNumber; /* move counter */
int testRow; /* possible next row */
int testColumn; /* possible next column */
int count; /* counter */
int i; /* counter */
int row; /* row */
int col; /* column */
int done; /* flag to indicate end */
int goodMove; /* result of call to validMove */
int board[ 8 ][ 8 ]; /* chess board */
int moveTotal[ 65 ] = { 0 }; /* array of tour totals */

/* horizontal and vertical moves for the knight */
int horizontal[ 8 ] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int vertical[ 8 ] = { -1, -2, -2, -1, 1, 2, 2, 1 };

srand( time( NULL ) );

/* attempt 1000 tours */
for ( i = 0; i < 1000; i++ ) {

/* set all squares equal to 0 */
for ( row = 0; row < 8; row++ ) {

for ( col = 0; col < 8; col++ ) {
board[ row ][ col ] = 0;
} /* end for */

} /* end for */

moveNumber = 0;

currentRow = rand() % 8;
currentColumn = rand() % 8;
board[ currentRow ][ currentColumn ] = ++moveNumber;
done = NO;

/* continue while knight still has valid moves */
while ( !done ) {
moveType = rand() % 8;
testRow = currentRow + vertical[ moveType ];
testColumn = currentColumn + horizontal[ moveType ];
goodMove = validMove( testRow, testColumn, board );

/* if desired move is valid, move knight to square */
if ( goodMove ) {
currentRow = testRow;
currentColumn = testColumn;
board[ currentRow ][ currentColumn ] = ++moveNumber;
} /* end if */
else {

/* if move is invalid, test other possible moves */
for ( count = 0; count < 7 && !goodMove; count++ ) {
moveType = ++moveType % 8;
testRow = currentRow + vertical[ moveType ];
testColumn = currentColumn + horizontal[ moveType ];
goodMove = validMove( testRow, testColumn, board );

/* if move is valid, move knight to square */
if ( goodMove ) {
currentRow = testRow;
currentColumn = testColumn;
board[ currentRow ][ currentColumn ] = ++moveNumber;
} /* end if */

} /* end for */

/* if no valid moves, while loop exits */
if ( !goodMove ) {
done = YES;
} /* end if */

} /* end else */

/* if full tour is made, while loop exits */
if ( moveNumber == 64 ) {
done = YES;
} /* end if */

} /* end while */

++moveTotal[ moveNumber ];
} /* end for */

/* dislay how many tours of each move number were made */
for ( i = 1; i < 65; i++ ) {

if ( moveTotal[ i ] ) {
printf( "There were %d tours of %d moves.\n",
moveTotal[ i ], i );
} /* end if */

} /* end for */

return 0; /* indicate successful termination */

} /* end main */

/* function to determine if a move is legal */
int validMove( int testRow, int testColumn, int board[][ 8 ] )
{

/* test if square is on board and if knight has previously
visited it */
if ( testRow >= 0 && testRow < 8 && testColumn >= 0 &&
testColumn < 8 ) {
return board[ testRow ][ testColumn ] != 0 ? NO : YES;

} /* end if */
else {
return NO;
} /* end else */

} /* end function validMove */
