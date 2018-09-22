#include <stdio.h>

#define QuoteIdent(ident) #ident
#define QuoteMacro(macro) QuoteIdent(macro)

#define printMacroDefinition(macro) printf("%-15s %s\n", #macro ":", QuoteMacro(macro));

int main() {

  printMacroDefinition(__WCHAR_MAX__ )
  printMacroDefinition(__WCHAR_TYPE__)

}
