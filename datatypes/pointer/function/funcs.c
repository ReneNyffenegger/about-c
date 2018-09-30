
unsigned int count(char const *text, char c) {

  unsigned int returnValue = 0;

  for (const char* t=text; *t; t++) {

    if (*t == c) returnValue ++;

  }

  return returnValue;
}

unsigned int first(char const *text, char c) {

  unsigned int returnValue = 0;

  for (const char* t=text; *t; t++) {

    if (*t == c) return returnValue;

    returnValue ++;

  }

  return -1;
}

unsigned int last(char const *text, char c) {

  unsigned int returnValue = -1;

  for (const char* t=text; *t; t++) {

    if (*t == c) returnValue = t-text;

  }

  return returnValue;
}
