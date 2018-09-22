#include <stdio.h>

//
//  <wchar.h> seems to be needed for WCHAR_MAX.
//
#include <wchar.h>

//
//  See
//    https://renenyffenegger.ch/notes/development/languages/C-C-plus-plus/CPP/preprocessor/macros/stringify
//  for QuoteIdent and QuoteMacro
//
#define QuoteIdent(ident) #ident
#define QuoteMacro(macro) QuoteIdent(macro)

#define printMacroDefinition(macro) printf("%-15s %s\n", #macro ":", QuoteMacro(macro));

int main() {

  printMacroDefinition(WCHAR_MAX     )
  printMacroDefinition(__WCHAR_MAX__ )
  printMacroDefinition(__WCHAR_TYPE__)

}
