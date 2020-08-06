 // Exercise 12.13 Solution 

/* Using a stack to evaluate an expression in postfix notation */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/* StackNode structure definition */
struct StackNode {
int data; /* node data */
struct StackNode *nextPtr; /* pointer to next node */
}; /* end struct StackNode */

typedef struct StackNode StackNode;
typedef StackNode *StackNodePtr;

/* function prototypes */
int evaluatePostfixExpression( char *expr );
int calculate( int op1, int op2, char operator );
void push( StackNodePtr *topPtr, int info );
int pop( StackNodePtr *topPtr );
int isEmpty( StackNodePtr topPtr );
void printStack( StackNodePtr currentPtr );

int main()
{
char expression[ 100 ]; /* postfix expression */
char c; /* current character from expression */
int answer; /* expression answer */
int i = 0; /* indexing variable */

printf( "Enter a postfix expression:\n" );

/* read each character with getchar */
while ( ( c = getchar() ) != '\n' ) {

/* remove any spaces */
if ( c != ' ' ) {
expression[ i++ ] = c;
} /* end if */

} /* end while */

expression[ i ] = '\0';

/* calculate answer and print result */
answer = evaluatePostfixExpression( expression );
printf( "The value of the expression is: %d\n", answer );

return 0; /* indicate successful termination */

} /* end main */

/* evaluate the postfix expression */
int evaluatePostfixExpression( char *expr )
{
int i; /* loop counter */
int popVal1; /* right value of current operation */
int popVal2; /* left value of current operation */
StackNodePtr stackPtr = NULL; /* points to the stack top */
char c; /* current character */

/* loop through expression */
for ( i = 0; ( c = expr[ i ] ) != '\0'; i++ ) {

/* if character is a digit, push it on stack */
if ( isdigit( c ) ) {
push( &stackPtr, c - '0' );
printStack( stackPtr );
/* end if */
else { /* calculate current operation */
popVal2 = pop( &stackPtr );
printStack( stackPtr );
popVal1 = pop( &stackPtr );
printStack( stackPtr );

/* calculate answer and push on stack */
push( &stackPtr, calculate( popVal1, popVal2, c ) );
printStack( stackPtr );
} /* end else */

} /* end for */

return pop( &stackPtr ); /* return final answer */

} /* end function evaluatePostfixExpression */

/* evaluate the expression op1 operator op2 */
int calculate( int op1, int op2, char operator )
{

/* use correct operator to calculate answer */
switch( operator ) {

case '+': /* addition */
return op1 + op2;

case '-': /* subtraction */
return op1 - op2;

case '*': /* multiplication */
return op1 * op2;

case '/': /* division */
return op1 / op2;

case '^': /* exponentiation */
return pow( op1, op2 );
} /* end switch */

return 0; /* default */

} /* end function calculate */

/* Insert a node at the stack top */
void push( StackNodePtr *topPtr, int info )
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
int pop( StackNodePtr *topPtr )
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

/* Print the stack */
void printStack( StackNodePtr currentPtr )
{

/* loop through stack */
while ( currentPtr != NULL ) {
printf( "%d ", currentPtr->data );
currentPtr = currentPtr->nextPtr;
} /* end while */

printf( "NULL\n" );
} /* end function printStack */

