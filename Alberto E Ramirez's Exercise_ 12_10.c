// Exercise 12.10 Solution

#include <stdio.h>
#include <stdlib.h>

/* stackNode structure definition */
struct stackNode {
char data; /* node data */
struct stackNode *nextPtr; /* pointer to next node */
}; /* end struct stackNode */

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

/* function prototypes */
void push( StackNodePtr *topPtr, char info );
char pop( StackNodePtr *topPtr );
int isEmpty( StackNodePtr topPtr );

int main()
{
StackNodePtr stackPtr = NULL; /* points to the stack top */
char c; /* current character from text */

printf( "Enter a line of text:\n" );

/* read each letter with getchar and push on stack */
while ( ( c = getchar() ) != '\n' ) {
push( &stackPtr, c );
} /* end while */

printf( "\nThe line is reverse is:\n" );

/* while the stack is not empty, pop next character */
while ( !isEmpty( stackPtr ) ) {
printf( "%c", pop( &stackPtr ) );
} /* end while */

return 0; /* indicate successful termination */

} /* end main */

/* Insert a node at the stack top */
void push( StackNodePtr *topPtr, char info )
{
StackNodePtr newPtr; /* temporary node pointer */

/* dynamically allocate memory */
newPtr = malloc( sizeof( StackNode ) );

/* if memory was allocated, insert node at top of stack */
if ( newPtr ) {
newPtr->data = info;
newPtr->nextPtr = *topPtr;
*topPtr = newPtr;
} /* end if */
else {
printf( "%d not inserted. No memory available.\n", info );
} /* end else */

} /* end function push */

/* Remove a node from the stack top */
char pop( StackNodePtr *topPtr )
{
StackNodePtr tempPtr; /* temporary node pointer */
int popValue; /* value of popped node */

tempPtr = *topPtr;
popValue = ( *topPtr )->data;
*topPtr = ( *topPtr )->nextPtr; /* reset topPtr */
free( tempPtr ); /* free memory */

return popValue; /* return value of popped node */

} /* end function pop */

/* Is the stack empty? */
int isEmpty( StackNodePtr topPtr )
{
return !topPtr; /* return NULL if stack is empty */

} /* end function isEmpty */

