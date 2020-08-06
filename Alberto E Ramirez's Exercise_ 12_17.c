// Exercise 12.17 Solution

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* TreeNode structure definition */
struct TreeNode {
struct TreeNode *leftPtr; /* pointer to left subtree */
char *token; /* node data */
struct TreeNode *rightPtr; /* pointer to right subtree */
}; /* end struct TreeNode */

typedef struct TreeNode TreeNode;
typedef TreeNode *TreeNodePtr;

/* function prototypes */
void insertNode( TreeNodePtr *treePtr, char *tokenPtr );
void inOrder( TreeNodePtr treePtr );
void preOrder( TreeNodePtr treePtr );
void postOrder( TreeNodePtr treePtr );

int main()
{
TreeNodePtr rootPtr = NULL; /* points to the tree root */
char sentence[ 80 ]; /* text from user */
char *tokenPtr; /* pointer to current token */

/* prompt user and read a sentence */
printf( "Enter a sentence:\n" );
gets( sentence );

/* tokenize the sentence */
tokenPtr = strtok( sentence, " " );

/* insert the tokens in the tree */
while ( tokenPtr ) {
insertNode( &rootPtr, tokenPtr );
tokenPtr = strtok( NULL, " " );
} /* end while */

/* traverse the tree preorder */
printf( "\nThe preorder traversal is:\n" );
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
void insertNode( TreeNodePtr *treePtr, char *tokenPtr )
{

/* if treePtr is NULL */
if ( !*treePtr ) {

/* dynamically allocate memory */
*treePtr = malloc( sizeof( TreeNode ) );

/* if memory was allocated, insert node */
if ( *treePtr ) {
( *treePtr )->token = tokenPtr;
( *treePtr )->leftPtr = NULL;
( *treePtr )->rightPtr = NULL;
} /* end if */
else {
printf( "\"%s\" not inserted. No memory available.\n",
tokenPtr );
} /* end else */

return;
} /* end if */
else { /* recursively call insertNode */

/* insert node in left subtree */
if ( strcmp( tokenPtr, ( *treePtr )->token ) <= 0 ) {
insertNode( &( ( *treePtr )->leftPtr ), tokenPtr );
} /* end if */
else { /* insert node in right subtree */
insertNode( &( ( *treePtr )->rightPtr ), tokenPtr );
} /* end else */

} /* end else */

} /* end function insertNode */

/* traverse the tree inorder */
void inOrder( TreeNodePtr treePtr )
{
 
/* traverse left subtree, print node, traverse right subtree */
if ( treePtr ) {
inOrder( treePtr->leftPtr );
printf( "%s ", treePtr->token );
inOrder( treePtr->rightPtr );
} /* end if */

} /* end function inOrder */

/* traverse the tree preorder */
void preOrder( TreeNodePtr treePtr )
{

/* print node, traverse left subtree, traverse right subtree */
 if ( treePtr ) {
printf( "%s ", treePtr->token );
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
printf( "%s ", treePtr->token );
} /* end if */

} /* end function postOrder */
