#define getType(x) _Generic ( (x) ,   \
   int    : "int"                 ,   \
   char   : "char"                ,   \
   char*  : "pointer to a char"   ,   \
   float  : "float"               ,   \
   double : "double"              ,   \
   void*  : "pointer to anything" ,   \
   default: "?"                       \
)

#define printType(x) printf("The type of %-15s is: %s\n", #x, getType(x))

#include <stdio.h>

int main () {
  printType (42);
  printType (42.42);
  printType (42.42f);
  printType ("Hello World");
  printType (NULL);
}
