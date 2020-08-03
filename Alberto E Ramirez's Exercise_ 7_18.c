//Exercise 7.20 Solution 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* function prototype */
void shuffleAndDeal( int workdeck[][ 13 ], char *workface[],
char *worksuit[] );

int main()
{

/* define card suit array and card face array */
char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades"};
char *face[ 13 ] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
"Eight", "Nine", "Ten", "Jack", "Queen", "King" };
int deck[ 4 ][ 13 ] = { 0 }; /* array of cards */

srand( time( NULL ) );

shuffleAndDeal( deck, face, suit );

return 0; /* indicate successful termination */

} /* end main */

/* integrate shuffling and dealing operation */
void shuffleAndDeal( int workdeck[][ 13 ], char *workface[],
char *worksuit[] )
{
int card; /* card loop counter */
int row; /* current suit */
int column; /* current face */

/* loop through the deck of cards, shuffle and print */
for ( card = 1; card <= 52; card++ ) {

/* choose random card until not equal to zero */
do {
row = rand() % 4;
column = rand() % 13;
} while( workdeck[ row ][ column ] != 0 ); /* end do...while */

workdeck[ row ][ column ] = card;

/* deal card */
printf( "%5s of %-8s", workface[ column ], worksuit[ row ] );

card % 2 == 0 ? printf( "\n" ) : printf( "\t" );
} /* end for */

} /* end function shuffleAndDeal */
