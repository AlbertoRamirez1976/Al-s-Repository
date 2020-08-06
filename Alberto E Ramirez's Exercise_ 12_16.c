//Exercise 12.16 Solution 

/* This is a modification of figure 12.19 */
/* Only function insertNode has been modified */
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
void inOrder( TreeNodePtr treePtr );
void preOrder( TreeNodePtr treePtr );
void postOrder( TreeNodePtr treePtr );

int main()
{
int i; /* loop counter */
int item; /* random value to insert in tree */
TreeNodePtr rootPtr = NULL; /* points to the tree root */

srand( time( NULL ) ); /* randomize */
printf( "The numbers being placed in the tree are:\n" );

/* insert random values between 1 and 15 in the tree */
for ( i = 1; i <= 10; i++ ) {
item = rand() % 15;
printf( "%3d", item );
insertNode( &rootPtr, item );
} /* end for */
 
/* traverse the tree preorder */
printf( "\n\nThe preorder traversal is:\n" );
preOrder( rootPtr );

/* traverse the tree inorder */
printf( "\n\nThe inorder traversal is:\n" );
inOrder( rootPtr );

/* traverse the tree postorder */
printf( "\n\nThe postorder traversal is:\n" );
postOrder( rootPtr );

return 0; /* indicate successful termination */

} /* end main */

/* insert a node into the tree */
void insertNode( TreeNodePtr *treePtr, int value )
{

/* if treePtr is NULL */
if ( !*treePtr ) {

/* dynamically allocate memory */
*treePtr = malloc( sizeof( TreeNode ) );

/* if memory was allocated, insert node */
if ( *treePtr ) {
( *treePtr )->data = value;
( *treePtr )->leftPtr = NULL;
( *treePtr )->rightPtr = NULL;
} /* end if */
else {
printf( "%d not inserted. No memory available.\n", value );
} /* end else */

return;
} /* end if */
else { /* recursively call insertNode */

/* insert node in left subtree */
if ( value <= ( *treePtr )->data ) {
insertNode( &( ( *treePtr )->leftPtr ), value );
} /* end if */
else { /* insert node in right subtree */
insertNode( &( ( *treePtr )->rightPtr ), value );
} /* end else */

} /* end else */

} /* end function insertNode */

/* traverse the tree inorder */
void inOrder( TreeNodePtr treePtr )
{

/* traverse left subtree, print node, traverse right subtree */
if ( treePtr ) {
inOrder( treePtr->leftPtr );
printf( "%3d", treePtr->data );
inOrder( treePtr->rightPtr );
} /* end if */

} /* end function inOrder */

/* traverse the tree preorder */
void preOrder( TreeNodePtr treePtr )
{

/* print node, traverse left subtree, traverse right subtree */
if ( treePtr ) {
printf( "%3d", treePtr->data );
preOrder( treePtr->leftPtr );
preOrder( treePtr->rightPtr );
} /* end if */

} /* end function preOrder */
/* traverse the tree postorder */
void postOrder( TreeNodePtr treePtr )
{

/* traverse left subtree, traverse right subtree, print node */
if ( treePtr ) {
postOrder( treePtr->leftPtr );
postOrder( treePtr->rightPtr );
printf( "%3d", treePtr->data );
} /* end if */

} /* end function postOrder */
