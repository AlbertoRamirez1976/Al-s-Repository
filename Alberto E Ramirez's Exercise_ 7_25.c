//Exercise 7.25 Solution */

#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

/* function prototypes */
void minimum( int grades[][ EXAMS ], int pupils, int tests );
void maximum( int grades[][ EXAMS ], int pupils, int tests );
void average( int grades[][ EXAMS ], int pupils, int tests );
void printArray( int grades[][ EXAMS ], int pupils, int tests );
void printMenu( void );

int main()
{

/* pointer to a function that takes as parameters a
two-dimensional array and two integer values */
void ( *processGrades[ 4 ] )( int [][ EXAMS ], int, int )
= { printArray, minimum, maximum, average};

int choice = 0; /* menu choice */

/* array of student grades */
int studentGrades[ STUDENTS ][ EXAMS ] = { { 77, 68, 86, 73 },
{ 96, 87, 89, 78 },
{ 70, 90, 86, 81 } };

/* loop while user does not choose option 4 */
while ( choice != 4 ) {

/* display menu and read user's choice */
do {
printMenu();
scanf( "%d", &choice );
} while ( choice < 0 || choice > 4 ); /* end do...while */

/* pass choice into the array */
if ( choice != 4 ) {
( *processGrades[ choice ] )( studentGrades, STUDENTS, EXAMS );
} /* end if */
else {
printf( "Program Ended.\n" );
} /* end else */

} /* end while */

return 0; /* indicate successful termination */

} /* end main */

/* search for the minimum value */
void minimum( int grades[][ EXAMS ], int pupils, int tests )
{
int i; /* loop counter */
int j; /* loop counter */
int lowGrade = 100; /* set lowGrade to highest possible score */

/* loop through rows */
for ( i = 0; i <= pupils - 1; i++ ) {

/* loop through columns */
for ( j = 0; j <= tests - 1; j++ ) {

/* if current grade is lower than lowGrade */
if ( grades[ i ][ j ] < lowGrade ) {
lowGrade = grades[ i ][ j ];
} /* end if */

} /* end for */

} /* end for */

printf( "\n\tThe lowest grade is %d\n", lowGrade );
} /* end function minimum */

/* search for maximum value */
void maximum( int grades[][ EXAMS ], int pupils, int tests )
{
int i; /* loop counter */
int j; /* loop counter */
int highGrade = 0; /* set highGrade to lowest possible score */

/* loop through rows */
for ( i = 0; i <= pupils - 1; i++ ) {

/* loop through columns */
for ( j = 0; j <= tests - 1; j++ ) {

/* if current grade is higher than highGrade */
if ( grades[ i ][ j ] > highGrade ) {
highGrade = grades[ i ][ j ];
} /* end if */

} /* end for */

} /* end for */

printf( "\n\tThe highest grade is %d\n", highGrade );
} /* end function maximum */

/* calculate average */
void average( int grades[][ EXAMS ], int pupils, int tests )
{
int i; /* loop counter */
int j; /* loop counter */
int total; /* sum of all grades */

printf( "\n" );

/* loop through rows */
for ( i = 0; i <= pupils - 1; i++ ) {
total = 0;

/* loop through columns */
for ( j = 0; j <= tests - 1; j++ ) {
total += grades[ i ][ j ];
} /* end for */

printf( "\tThe average for student %d is %.1f\n",
i + 1, ( double ) total / tests );
} /* end for */

} /* end function average */

/* print the contents of the array */
void printArray( int grades[][ EXAMS ], int pupils, int tests )
{
int i; /* loop counter */
int j; /* loop counter */

printf( "\n\t [ 0 ] [ 1 ] [ 2 ] [ 3 ]" );

/* loop through rows */
for ( i = 0; i <= pupils - 1; i++ ) {
printf( "\n\tstudentGrades[ %d ] ", i );

/* loop through columns */
for ( j = 0; j <= tests - 1; j++ ) {
printf( "%-7d", grades[ i ][ j ] );
} /* end for */

} /* end for */

printf( "\n" );
} /* end function printArray */

/* display the menu */
void printMenu( void )
{
printf( "\n\tEnter a choice:\n"
"\t 0 Print the array of grades\n"
"\t 1 Find the minimum grade\n"
"\t 2 Find the maximum grade\n"
"\t 3 Print the average on all"
" tests for each student\n"
"\t 4 End program\n"
"\t? " );
} /* end function printMenu */
