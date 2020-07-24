//Exercise 3.36 solution

#include <stdio.h>

int main() {
  int i = 0;
  int x = 100000000;
  int y = 200000000;
  int z = 300000000;

  while ( i <= z ) {
    if ( i == x ) {
      printf("%d\n", x );
    }
    if ( i == y ) {
      printf("%d\n", y );
    }
    if ( i == z) {
      printf("%d\n", z );
    }
    i++;
  }

  return 0;
}
