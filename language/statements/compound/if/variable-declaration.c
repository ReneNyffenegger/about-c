#include <stdio.h>

int foo() {
  return 42;
}

int main() {

   if (int i = foo()) {  // error: expected expression before ‘int’

      printf("i = %d\n", 42);

   }
   else {

      printf("foo returned 0\n");

   }
}
