//Exercise 11.8 Solution

#include <stdio.h>

int main()
{
int account; /* account number */
char name[ 30 ]; /* account name */
double balance; /* account balance */
double amount; /* transaction amount */
FILE *ofPtr; /* old master file pointer */
FILE *tfPtr; /* transaction file pointer */

/* open both files for writing */
ofPtr = fopen( "oldmast.dat", "w" );
tfPtr = fopen( "trans.dat", "w" );

/* prompt user for sample data */
printf( "Sample data for file oldmast.dat:\n" );
printf( "Enter account, name, and balance (EOF to end): " );

/* loop while EOF character not entered by user */
while ( scanf( "%d%[^0-9-]%lf", &account, name,
&balance ) != EOF ) {

/* write data to old master file */
fprintf( ofPtr, "%d %s %.2f\n", account, name, balance );
printf( "Enter account, name, and balance (EOF to end): " );
} /* end while */

fclose( ofPtr ); /* close file pointer */

/* prompt user for sample data */
printf( "\nSample data for file trans.dat:\n" );
printf( "Enter account and transaction amount (EOF to end): " );

/* loop while EOF character not entered by user */
while ( scanf( "%d%lf", &account, &amount ) != EOF ) {

/* write data to transactions file */
fprintf( tfPtr, "%d %.2f\n", account, amount );
printf( "Enter account and transaction amount (EOF to end): " );
} /* end while */

fclose( tfPtr ); /* close file pointer */

return 0; /* indicate successful termination */

} /* end main */

