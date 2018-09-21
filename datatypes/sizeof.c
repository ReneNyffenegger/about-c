#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <uchar.h>
#include <wchar.h>

#define out(datatype) printf("%-20s: %2d bytes\n", #datatype, sizeof(datatype));

int main() {

   out(bool)

   out(char)
   out(char16_t)
   out(char32_t)

   out(double)
   out(float)

   out(int)

   out(mbstate_t)

   out(long)
   out(long double)
   out(long long)
   out(long long int)
   out(short)

   out(uint8_t)
   out(uint8_t)
   out(uint16_t)
   out(uint32_t)
   out(uint64_t)
   out(uintmax_t)

   out(void*)

   out(wchar_t)
   out(wint_t)

}
