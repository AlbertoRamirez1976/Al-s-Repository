//Exercise 10.8 Solution

/* NOTE: The program output is machine dependent */
#include <stdio.h>

/* integer union definition */
union integer {
char c; /* character input by user */
short s; /* short integer input by user */
int i; /* integer input by user */
long l; /* long integer input by user */
}; /* end union integer */

int main()
{
union integer a; /* define union a */

/* read a character from user into the union */
printf( "Enter a character: " );
scanf( "%c", &a.c );

/* print each value of union */
printf( "\'%c'\ printed as a character is %c\n", a.c, a.c );
printf( "\'%c'\ printed as a short integer is %hd\n", a.c, a.s );
printf( "\'%c'\ printed as an integer is %d\n", a.c, a.i );
printf( "\'%c'\ printed as a long integer is %ld\n", a.c, a.l );

/* read a short integer from user into the union */
printf( "\nEnter a short integer: " );
scanf( "%hd", &a.s );

/* print each value of union */
printf( "%hd printed as a character is %c\n", a.s, a.c );
printf( "%hd printed as a short integer is %hd\n", a.s, a.s );
printf( "%hd printed as an integer is %d\n", a.s, a.i );
printf( "%hd printed as a long integer is %ld\n", a.s, a.l );

/* read an integer from user into the union */
printf( "\nEnter an integer: " );
scanf( "%d", &a.i );

/* print each value of union */
printf( "%d printed as a character is %c\n", a.i, a.c );
printf( "%d printed as a short integer is %hd\n", a.i, a.s );
printf( "%d printed as an integer is %d\n", a.i, a.i );
printf( "%d printed as a long integer is %ld\n", a.i, a.l );

/* read a long integer from user into the union */
printf( "\nEnter a long integer: " );
scanf( "%ld", &a.l );

/* print each value of union */
printf( "%ld printed as a character is %c\n", a.l, a.c );
printf( "%ld printed as a short integer is %hd\n", a.l, a.s );
printf( "%ld printed as an integer is %d\n", a.l, a.i );
printf( "%ld printed as a long integer is %ld\n", a.l, a.l );
return 0; /* indicate successful termination */

} /* end main */
