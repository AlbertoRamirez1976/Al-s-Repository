//Exercise 12.19 Solution
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct treeNode {
    struct treeNode *leftPtr;
    char data[30];
    struct treeNode *rightPtr;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

int maxDepth( TreeNodePtr treePtr, int currentDepth );

void insertNode( TreeNodePtr *, const char * );
void inOrder( TreeNodePtr );
void preOrder( TreeNodePtr );
void postOrder( TreeNodePtr );

int getLine( char [], int );
char *strcpy2( char *, const char * );
int strcmp2( const char *, const char * );


int main()
{
    TreeNodePtr rootPtr = NULL;
    char line[100];
    char *tokenPtr;
    
    printf("Enter the line: "); 
    getLine(line, 100);
    
    tokenPtr = strtok( line, " ,.;!?" );    
    
    while( tokenPtr != NULL ) {
        insertNode( &rootPtr, tokenPtr );
        tokenPtr = strtok( NULL, " ,.;!?" );
    }
    
    /* Traverse the tree preOrder */
    printf("\n\nThe preOrder traversal is:\n");
    preOrder( rootPtr );
    
    /* Traverse the tree inOrder */
    printf("\n\nThe inOrder traversal is:\n");
    inOrder( rootPtr );
    
    /* Traverse the tree postOrder */
    printf("\n\nThe postOrder traversal is:\n");
    postOrder( rootPtr );
    
    int max = maxDepth( rootPtr, 0 );
    printf("\n\nMaximum depth = %d\n", max);
    
    return 0;
}


/* Insert value into the list in its sorted position */
void insertNode( TreeNodePtr *treePtr, const char *value )
{
    int compVal;
    
    if( *treePtr == NULL )
    {
        *treePtr = malloc( sizeof( TreeNode ) );
        
        if(*treePtr != NULL) {
            strcpy2( ( *treePtr )->data, value );
            ( *treePtr )->leftPtr = NULL;
            ( *treePtr )->rightPtr = NULL;
        }
        else
            printf( "%s not inserted. No memory available.\n", value );
    }
    else {
        compVal = strcmp2( value, (*treePtr)->data );
        
        if( compVal <= 0 )
            insertNode( &( ( *treePtr )->leftPtr ), value );
        else if( compVal > 0 )
            insertNode( &( ( *treePtr )->rightPtr ), value );
    }
    
}


/* Recursively calculates the maximum depth of the tree */
int maxDepth( TreeNodePtr treePtr, int currentDepth )
{
    int maximum = currentDepth;
    int temp;
    
    if( treePtr != NULL ) 
    {
        temp = maxDepth( treePtr->leftPtr, currentDepth+1 );
        if ( temp > maximum )
            maximum = temp;
            
        temp = maxDepth( treePtr->rightPtr, currentDepth+1 );
        if ( temp > maximum )
            maximum = temp;
    }
    else
        return currentDepth-1;
    
    return maximum;
}


void inOrder( TreeNodePtr treePtr )
{
    if( treePtr != NULL ) {
        inOrder( treePtr->leftPtr );
        printf( " %s", treePtr->data );
        inOrder( treePtr->rightPtr );
    }
}


void preOrder( TreeNodePtr treePtr )
{
    if( treePtr != NULL ) {
        printf( " %s", treePtr->data );
        preOrder( treePtr->leftPtr );
        preOrder( treePtr->rightPtr );
    }
}


void postOrder( TreeNodePtr treePtr )
{
    if( treePtr != NULL ) {
        postOrder( treePtr->leftPtr );
        postOrder( treePtr->rightPtr );
        printf( " %s", treePtr->data );
    }
}


/* Read a string into a character array and return the length of the array
 * This version ends on and strips out newlines */
int getLine( char s[], int maxLength )
{
    int c, i=0;
    
    while( ( --maxLength > 0)  && ( (c=getchar())!=EOF ) && ( c!='\n' ) )
        s[i++]=c;

    s[i] = '\0';
    
    /* Clear any overflow*/
    fflush(stdin);
    
    return i;   
}


/* Using pointer arithmetic */
char *strcpy2( char* s1, const char *s2 )
{   
    char *result = s1;
    
    while(*s2!='\0')
        *s1++=*s2++;
        
    *s1='\0';
    return result;  
}


/* Using pointer arithmetic */
int strcmp2( const char* s1, const char *s2 )
{      
    while(*s2!='\0') {
        if(*s1<*s2)
            return -1;
        else if(*s1>*s2)
            return 1;
        s1++;
        s2++;           
    }
    /* If s1 is longer than s2 it is greater than it (filing wise)*/
    if(*s1!='\0')
        return 1;
    return 0;   
}
