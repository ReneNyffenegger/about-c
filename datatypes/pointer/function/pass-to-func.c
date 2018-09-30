#include <stdio.h>
#include "funcs.h"

int execute_funcPtr(unsigned int (*funcPtr)(char const*, char), char const* arg_1, char arg_2) {

   printf("funcPtr returned %d\n", (*funcPtr)(arg_1, arg_2));

}


int main() {

  execute_funcPtr(&count, "Hello world", 'o');
  execute_funcPtr(&first, "Hello world", 'o');
  execute_funcPtr(&last , "Hello world", 'o');

}
