//Exercise 12.21 Solution 

#include <stdio.h>
#include <stdlib.h>

/* ListNode structure definition */
struct ListNode {
int data; /* node data */
struct ListNode *nextPtr; /* pointer to next node */
}; /* end struct ListNode */

typedef struct ListNode ListNode;
typedef ListNode *ListNodePtr;

/* function prototypes */
void insertItem( ListNodePtr *sPtr, int value );
void printList( ListNodePtr currentPtr );
void instructions( void );
ListNodePtr searchList( ListNodePtr currentPtr, const int key );

int main()
{
ListNodePtr startPtr = NULL; /* list pointer */
ListNodePtr searchResultPtr; /* pointer to search result */
int choice; /* user's menu choice */
int item; /* value to insert into list */
int searchKey; /* value to search for in list */
 
instructions(); /* display the menu */
printf( "? " );
scanf( "%d", &choice );

/* while user does not choose 3 */
while ( choice != 3 ) {

/* determine user's choice */
switch ( choice ) {

/* insert an integer into the list */
case 1:

/* prompt user and read integer */
printf( "Enter an integer: " );
scanf( "\n%d", &item );

/* insert integer and print list */
insertItem( &startPtr, item );
printList( startPtr );
break; /* exit switch */

/* search for given integer */
case 2:

/* prompt user and read integer */
printf( "Enter integer to recursively search for: " );
canf( "%d", &searchKey );
searchResultPtr = searchList( startPtr, searchKey );

/* if searchKey not found */
if ( searchResultPtr == NULL ) {
printf( "%d is not in the list.\n\n", searchKey );
} /* end if */
else { /* if searchKey was found */
printf( "%d is in the list.\n\n",
searchResultPtr->data );
} /* end else */

break; /* exit switch */

/* default case */
default:
printf( "Invalid choice.\n\n" );
instructions();
break; /* exit switch */
} /* end switch */

printf( "? " );
scanf( "%d", &choice ); /* get next choice */
} /* end while */

printf( "End of run.\n" );

return 0; /* indicate successful termination */

} /* end main */

/* Print the instructions */
void instructions( void )
{
printf( "Enter your choice:\n"
" 1 to insertItem an element into the list.\n"
" 2 to recursively search list for an element.\n"
" 3 to end.\n" );
} /* end function instructions */

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
printf( "%d --> ", currentPtr->data );
currentPtr = currentPtr->nextPtr;
} /* end while */

printf( "NULL\n\n" );
} /* end else */

} /* end function printList */

/* search for key in list */
ListNodePtr searchList( ListNodePtr currentPtr, const int key )
{

/* if currentPtr is at end of list */
if ( currentPtr == NULL ) {
return NULL; /* key not found */
} /* end if */
else if ( currentPtr->data == key ) {
return currentPtr; /* key found */
} /* end else if */
else {
searchList( currentPtr->nextPtr, key ); /* keep searching */
} /* end else */

} /* end function ListNodePtr */
