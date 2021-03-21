#include <stdio.h>

int main() {

   int i = 10;

//
// Probably as intended,
// prints 'yes'
//
   if (! (i % 5) ) {
      printf("yes\n");
   }
   else {
      printf("no\n");
   }

//
// Probably not as intended:
// prints 'no'
//
   if (! i % 5) {
      printf("yes\n");
   }
   else {
      printf("no\n");
   }
}
