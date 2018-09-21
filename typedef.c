#include <stdio.h>

//
// Define an alias for type int: NUM
//
typedef int   NUM;

//
// Use NUM to define another alias (which
// still is an int):
//
typedef NUM   INTEGER;

//
// Create two new aliases in one go.
// Both are really a char*:
//
typedef char  *TEXT, *STRING;


INTEGER add(INTEGER a, INTEGER b) {
  return a+b;
}

void print(TEXT txt, STRING str) {
  printf("txt = %s, str = %s\n", txt, str);
}


int main() {

    NUM   a = 19;
    int   b = 23;
    char *t = "foo bar";
    char *u = "baz";

    INTEGER sum = add(a, b);

    printf("sum = %d\n", sum);

    print(t, u);

}
