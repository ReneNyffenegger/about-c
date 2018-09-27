#include <stdio.h>

long sum    (short a, char b) { return a + b; } 
long product(short a, char b) { return a * b; }

//
//  Defining a »type« for a function pointer that points
//  to a function that returns a long and takes a short and
//  a char argument:
//
typedef long(*funcPtr)(short, char);


int callFunc(funcPtr fn, short a, char b) {

  printf("fn(%2d, %2d) = %2d\n", a, b, fn(a, b));

}

int main() {

  funcPtr f1 = sum;
  funcPtr f2 = product;

  callFunc(f1, 19, 23);
  callFunc(f2,  7,  6);

}
