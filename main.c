#include <stdio.h>

int main(int argc, char ** argv, char **envp) {

    printf("argc = %d\n", argc);

 //
 // Show arguments given to the program.
 // argv[0] is the name of the program itself.
 //
    for (int arg=0; arg<argc; arg++) {
        printf("argv[%d] = %s\n", arg, argv[arg]);
    }

 //
 // Show environment variables:
 //
    char* envv;
    while (envv = *envp++) {
        printf("%s\n", envv);
    }

}
