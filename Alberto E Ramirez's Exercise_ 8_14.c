//Exercise 8.14 Solution 
	
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char p[ 20 ]; /* complete phone number */
char phoneNumber[ 10 ] = { '\0' }; /* long integer phone number */
char *tokenPtr; /* store temporary token */
int areaCode; /* store area code */
long phone; /* store phone number */

printf( "Enter a phone number in the form ( 555 )"
" 555-5555:\n" );
gets( p );

/* convert area code token to an integer */
areaCode = atoi( strtok( p, "()" ) );

/* take next token and copy to phoneNumber */
tokenPtr = strtok( NULL, " -" );
strcpy( phoneNumber, tokenPtr );

/* take last token and concatenate to phoneNumber */
tokenPtr = strtok( NULL, "" );
strcat( phoneNumber, tokenPtr );

/* convert phoneNumber to long integer */
phone = atol( phoneNumber );

printf( "\nThe integer area code is %d\n", areaCode );
printf( "The long integer phone number is %ld\n", phone );

return 0; /* indicate successful termination */

} /* end main */
