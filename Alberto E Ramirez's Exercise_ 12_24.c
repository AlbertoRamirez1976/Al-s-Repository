//Exercise 12.24 Solution

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* TreeNode structure definition */
struct TreeNode {
struct TreeNode *leftPtr; /* pointer to left subtree */
int data; /* node data */
struct TreeNode *rightPtr; /* pointer to right subtree */
}; /* end struct TreeNode */

typedef struct TreeNode TreeNode;
typedef TreeNode *TreeNodePtr;

/* function prototypes */
void insertNode( TreeNodePtr *treePtr, int value );
void outputTree( TreeNodePtr treePtr, int spaces );

int main()
{
int i; /* loop counter */
int item; /* random value to be inserted */
int totalSpaces = 0; /* spaces preceeding output */
TreeNodePtr rootPtr = NULL; /* points to the tree root */

srand( time( NULL ) ); /* randomize */
printf( "The numbers being placed in the tree are:\n" );

/* insert random values between 1 and 10 in the tree */
for ( i = 1; i <= 10; i++ ) {
item = rand() % 15;
printf( "%3d", item );
insertNode( &rootPtr, item );
} /* end for */

printf( "\n\n" );
outputTree( rootPtr, totalSpaces ); /* display tree */

return 0; /* indicate successful termination */

} /* end main */

/* insert a node into the tree */
void insertNode( TreeNodePtr *treePtr, int value )
{

/* if treePtr is NULL */
if ( *treePtr == NULL ) {

/* dynamically allocate memory */
*treePtr = malloc( sizeof( TreeNode ) );

/* if memory was allocated, insert node */
if ( *treePtr != NULL ) {
( *treePtr )->data = value;
( *treePtr )->leftPtr = NULL;
( *treePtr )->rightPtr = NULL;
} /* end if */
else {
printf( "%d not inserted. No memory available.\n", value );
} /* end else */

} /* end if */
else { /* recursively call insertNode */

/* insert node in left subtree */
if ( value < ( *treePtr )->data ) {
insertNode( &( ( *treePtr )->leftPtr ), value );
} /* end if */
else {
 
/* insert node in right subtree */
if ( value > ( *treePtr )->data ) {
insertNode( &( ( *treePtr )->rightPtr ), value );
} /* end if */
else { /* duplicate value */
printf( "dup" );
} /* end else */

} /* end else */

} /* end else */

} /* end function insertNode */

/* display the tree */
void outputTree( TreeNodePtr treePtr, int spaces )
{
int loop; /* loop counter */

/* while not the end of tree */
while ( treePtr != NULL ) {

/* recursive call with right subtree */
outputTree( treePtr->rightPtr, spaces + 5 );

/* loop and output spaces */
for ( loop = 1; loop <= spaces; loop++ ) {
printf( " " );
} /* end for */

printf( "%d\n", treePtr->data );

/* set pointer to left subtree and make recursive call */
outputTree( treePtr->leftPtr, spaces + 5 );
treePtr = NULL;
} /* end while */

} /* end function outputTree */
