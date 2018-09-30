#include <stdio.h>
#include "funcs.h"

#define FUNC_COUNT 1
#define FUNC_FIRST 2
#define FUNC_LAST  3

unsigned int (*getFuncPointer(int funcNo))(char const*, char) {

  if (funcNo == FUNC_COUNT) return &count;
  if (funcNo == FUNC_FIRST) return &first;
  if (funcNo == FUNC_LAST ) return &last ;
  return NULL;

}


int main() {

    unsigned int (*funcPtr) (char const*, char);

    funcPtr = getFuncPointer(FUNC_LAST);

    printf("%d\n", (*funcPtr)("Hello world", 'o'));

}
