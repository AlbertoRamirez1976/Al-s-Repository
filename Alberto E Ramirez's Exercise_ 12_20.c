//Exercise 12.20 Solution 

#include <stdio.h>
#include <stdlib.h>

/* ListNode structure definition */
struct ListNode {
int data; /* node data */
struct ListNode *nextPtr; /* pointer to next node */
}; /* end struct ListNode */

typedef struct ListNode ListNode;
typedef ListNode *ListNodePtr;

/* function prototype */
void printList( ListNodePtr currentPtr );
void printListBackwards( ListNodePtr currentPtr );
void insertItem( ListNodePtr *sPtr, int value );

int main()
{
ListNodePtr startPtr = NULL; /* list pointer */
int item; /* loop counter */

/* insert integers into list */
for ( item = 1; item < 11; item++ ) {
insertItem( &startPtr, item );
} /* end for */

printList( startPtr );
printf( "\n" );
printListBackwards( startPtr );

return 0; /* indicate successful termination */

} /* end main */

/* Insert a new value into the list in sorted order */
void insertItem( ListNodePtr *sPtr, int value )
{
ListNodePtr newPtr; /* new node */
ListNodePtr previousPtr; /* previous node */
ListNodePtr currentPtr; /* current node */

/* dynamically allocate memory */
newPtr = malloc( sizeof( ListNode ) );

/* if newPtr does not equal NULL */
if ( newPtr ) {
newPtr->data = value;
newPtr->nextPtr = NULL;

previousPtr = NULL;
currentPtr = *sPtr; /* set currentPtr to start of list */

/* loop to find correct location in list */
while ( currentPtr != NULL && value > currentPtr->data ) {
previousPtr = currentPtr;
currentPtr = currentPtr->nextPtr;
} /* end while */

/* insert at beginning of list */
if ( previousPtr == NULL ) {
newPtr->nextPtr = *sPtr;
*sPtr = newPtr;
} /* end if */
else { /* insert node between previousPtr and currentPtr */
previousPtr->nextPtr = newPtr;
newPtr->nextPtr = currentPtr;
} /* end else */

} /* end if */
else {
printf( "%c not inserted. No memory available.\n", value );
} /* end else */

} /* end function insertItem */

/* Print the list */
void printList( ListNodePtr currentPtr )
{

/* if list is empty */
if ( !currentPtr ) {
printf( "List is empty.\n\n" );
} /* end if */
else {

/* loop while currentPtr does not equal NULL */
while ( currentPtr ) {
printf( "%d ", currentPtr->data );
currentPtr = currentPtr->nextPtr;
} /* end while */

printf( "*\n\n" );
} /* end else */

} /* end function printList */

/* Print the list recursively backwards */
void printListBackwards( ListNodePtr currentPtr )
{

/* if at end of list */
if ( currentPtr == NULL ) {
printf( "The list reversed is:\n" );
} /* end if */
else { /* recursive call */
printListBackwards( currentPtr->nextPtr );
printf( "%d ", currentPtr->data );
} /* end else */

} /* end function printListBackwards */

