 //Exercise 3.27 solution

#include <stdio.h>

int main() {
  int number = 0, sum = 0, z = 100;

  while ( z >= 0 ) {
    printf("Enter a number: ");
    scanf("%d", &number );

    if ( number == 1 ) {
      return 0;
    }

    if ( number == 2 ) {
      return 0;

    }
    sum += z;
  }

  return 0;
}
