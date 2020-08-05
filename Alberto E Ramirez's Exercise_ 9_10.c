//Exercise 9.10 Solution

#include <stdio.h>

int main()
{
int fahrenheit; /* holds fahrenheit temperature */
double celcius; /* holds celcius temperature */

printf( "%10s%12s\n", "Fahrenheit", "Celcius" );

/* convert fahrenheit to celsius and display temperatures
showing the sign for celsius temperatures */
for ( fahrenheit = 0; fahrenheit <= 212; fahrenheit++ ) {
celcius = 5.0 / 9.0 * ( fahrenheit - 32 );
printf( "%10d%+12.3f\n", fahrenheit, celcius );
} /* end for */

return 0; /* indicate successful termination */

} /* end main */
