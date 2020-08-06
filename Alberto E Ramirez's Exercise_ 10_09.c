//Exercise 10.9 Solution

/* NOTE: The program output is machine dependent */
#include <stdio.h>

/* floatingPoint union definition */
union floatingPoint {
float f; /* floating-point value input by user */
double d; /* double value input by user */
long double l; /* long double value input by user */
}; /* end union floatingPoint */

int main()
{
union floatingPoint a; /* define union a */

/* read a floating-point value from user into the union */
printf( "Enter a float: " );
scanf( "%f", &a.f );

/* print each value of union */
printf( "%f printed as a float is %f\n", a.f, a.f );
printf( "%f printed as a double is %f\n", a.f, a.d );
printf( "%f printed as a long double is %Lf\n", a.f, a.l );

/* read a double value from user into the union */
printf( "\nEnter a double: " );
scanf( "%lf", &a.d );

/* print each value of union */
printf( "%lf printed as a float is %f\n", a.d, a.f );
printf( "%lf printed as a double is %f\n", a.d, a.d );
printf( "%lf printed as a long double is %Lf\n", a.d, a.l );

/* read a long double value from user into the union */
printf( "\nEnter a long double: " );
scanf( "%Lf", &a.l );
 
/* print each value of union */
printf( "%Lf printed as a float is %f\n", a.l, a.f );
printf( "%Lf printed as a double is %f\n", a.l, a.d );
printf( "%Lf printed as a long double is %Lf\n", a.l, a.l );

return 0; /* indicate successful termination */
 
} /* end main */
