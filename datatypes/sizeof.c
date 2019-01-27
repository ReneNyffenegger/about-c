#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <uchar.h>
#include <wchar.h>

#include <math.h>  // float_t, double_t

#define out(datatype) printf("%-20s: %2d bytes\n", #datatype, sizeof(datatype));

int main() {

   out(bool          )

   out(char          )
   out(char16_t      )
   out(char32_t      )

   out(double        )
   out(double_t      )

   out(float         )
   out(float_t       )

   out(int           )

   out(int_fast8_t   )
   out(int_fast16_t  )
   out(int_fast32_t  )
   out(int_fast64_t  )

   out(int_least8_t  )
   out(int_least16_t )
   out(int_least32_t )
   out(int_least64_t )

   out(intmax_t      )

   out(intptr_t      )

   out(mbstate_t     )

   out(long          )
   out(long double   )
   out(long long     )
   out(long long int )

   out(short         )
   out(short int     )

   out(uint8_t       )
   out(uint8_t       )
   out(uint16_t      )
   out(uint32_t      )
   out(uint64_t      )

   out(uintmax_t     )

   out(uintptr_t     )

   out(uint_fast8_t  )
   out(uint_fast16_t )
   out(uint_fast32_t )
   out(uint_fast64_t )

   out(uint_least8_t )
   out(uint_least16_t)
   out(uint_least32_t)
   out(uint_least64_t)

   out(void*         )

   out(wchar_t       )
   out(wint_t        )

}
