#include <stdio.h>

int main() {

  int i;

  for (i=1; i<10; i++) {
    printf("i = %d\n", i);

    if (i == 5) {
    //
    // break exits the for loop, thus
    // only the numbers 1 through 5
    // are printed
    //
       break;
    }

  }
}
