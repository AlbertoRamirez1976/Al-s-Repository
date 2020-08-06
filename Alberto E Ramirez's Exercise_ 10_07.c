//Exercise 10.7 Solution 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* bitCard structure definition */
struct bitCard {
unsigned face : 4; /* 4 bits; 0-15 */
unsigned suit : 2; /* 2 bits; 0-3 */
unsigned color : 1; /* 1 bit; 0-1 */
}; /* end structure bitCard */

/* new type name Card */
typedef struct bitCard Card;

/* prototypes */
void fillDeck( Card *wDeck );
void shuffle( Card *wDeck );
void deal( Card *wDeck2 );

int main()
{
Card deck[ 52 ]; /* create array of Cards */

srand( time( NULL ) ); /* randomize */

fillDeck( deck );
shuffle( deck );
deal( deck );

return 0; /* indicate successful termination */

} /* end main */

/* create 52 cards */
void fillDeck( Card *wDeck )
{
 int i; /* loop counter */

/* loop 52 times and create cards */
for ( i = 0; i <= 51; i++ ) {
wDeck[ i ].face = i % 13;
wDeck[ i ].suit = i / 13;
wDeck[ i ].color = i / 26;
} /* end for */
    
} /* end function fillDeck */

/* shuffle cards */
void shuffle( Card *wDeck )
{
int i; /* current card */
int j; /* random card to swap with current card */
Card temp; /* temporary Card */
/* loop through deck */
for ( i = 0; i <= 51; i++ ) {
j = rand() % 52;

/* swap cards if not equal */
if ( i != j ) {
temp = wDeck[ i ];
wDeck[ i ] = wDeck[ j ];
wDeck[ j ] = temp;
} /* end if */

} /* end for */

} /* end function shuffle */

/* deal the cards */
void deal( Card *wDeck2 )
{

/* arrays face, suit and color hold all possible string
descriptions of the cards */
char *face[] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
"Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};
char *color[] = { "Red", "Black"};
int i; /* loop counter */

/* loop through deck and print string description of each card */
for ( i = 0; i <= 51; i++ ) {
printf( "%5s: %5s of %-8s", color[ wDeck2[ i ].color ],
face[ wDeck2[ i ].face ], suit[ wDeck2[ i ].suit ] );
putchar( ( i + 1 ) % 2 ? '\t' : '\n' );
} /* end for */

} /* end function deal */
