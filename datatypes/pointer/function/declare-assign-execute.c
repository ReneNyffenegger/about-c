#include <stdio.h>
#include "funcs.h"


int main() {

 //
 // Declare a function pointer:
 // 
    unsigned int (*funcPtr) (char const*, char);

 //
 // Assign a function to the function pointer
 //
    funcPtr = &first;

 //
 // Execute function pointer
 //
    printf("%d\n", (*funcPtr)("Hello world", 'o'));

}
