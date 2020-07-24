//Exercise 3.41 solution

#include <stdio.h>

int main() {
  float pi = 3.14159, radius, diameter, circumference, area;

  printf( "Enter the radius of the circle:\n" );
  scanf( "%f", &radius );

  diameter = radius * 2;
  printf( "The diameter is %f\n", diameter  );

  circumference = 2 * pi * radius;
  printf( "The circumference is %f\n", circumference );

  area = pi * (radius * radius);
  printf( "The area is %f\n", area );

  return 0;
}
