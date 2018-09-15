#include <stdio.h>
#include <string.h>

#define type_i 1
#define type_c 2
#define type_d 3

struct Nums {
  int a;
  int b;
};

struct Text {
  char c8[8];
};

struct Dbl {
  double d;
};

struct U {

  int type;
  union {
    struct Nums nums;
    struct Text text;
    struct Dbl  dbl ;
  } u;

};

void show_u(struct U* u) {

  if      (u->type == type_i) {

           printf("type_i: a      = %d, b = %d\n", u->u.nums.a, u->u.nums.b);

  }
  else if (u->type == type_c) {

           printf("type_c: text   = %s\n", u->u.text.c8);

  }
  else if (u->type == type_d) {

           printf("type_d: double = %7.5f\n", u->u.dbl.d);

  }

}

int main() {

  struct U u1, u2, u3;

  u1.type=type_i;
  u1.u.nums.a = 42;
  u1.u.nums.b = 44;

  u2.type=type_c;
  strcpy(u2.u.text.c8, "1234567");

  u3.type=type_d;
  u3.u.dbl.d = 3.14156;

  show_u(&u1);
  show_u(&u2);
  show_u(&u3);

}
