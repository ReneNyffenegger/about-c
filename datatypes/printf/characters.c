#include <stdio.h>
#include <limits.h>

int main(int argc, char* argv[]) {

    double       double_        = 123456.789;

    float        float_         = 123456.789;
    void*        main_ptr_      = &main;
    void*        argc_ptr_      = &argc;
    void*        argv_ptr_      = &argv;


    printf("d  / -1      : %d\n" , -1);
    printf("u  / -1      : %u\n" , -1);

    printf("d  / UINT_MAX: %d\n" , UINT_MAX);
    printf("u  / UINT_MAX: %u\n" , UINT_MAX);

    printf("d  / UINT_MAX: %d\n" , UINT_MAX);
    printf("u  / UINT_MAX: %u\n" , UINT_MAX);

    printf("lld / LLONG_MAX: %lld\n", LLONG_MAX);
    printf("llu / LLONG_MAX: %llu\n", LLONG_MAX);
    printf("lld / ULONG_MAX: %lld\n", ULLONG_MAX);
    printf("llu / ULONG_MAX: %llu\n", ULLONG_MAX);

    printf("f   / float: %f, double: %f\n", float_, double_);
    printf("e   / float: %e, double: %e\n", float_, double_);

    printf("p   / &main: %p  &argc: %p  &argv: %p  argv: %p\n", main_ptr_, argc_ptr_, argv_ptr_, argv);
    printf("lp  / &main: %lp  &argc: %lp  &argv: %lp  argv: %p\n", main_ptr_, argc_ptr_, argv_ptr_, argv);

    unsigned long long p = (unsigned long long) main_ptr_;
    printf("%llu\n", p);


/*  %n is supposed to write the number of characters
    written to the destination indicated by the address
    of its corresponing parameter.
    However, I didn't manage to make this owrk.*/


    signed int   chars_written_1,
                 chars_written_2;
    printf("%6d%n %s%n\n", 1234, &chars_written_1, "foo bar baz", &chars_written_2);
    printf("chars_written_1: %d\n", chars_written_1);
    printf("chars_written_2: %d\n", chars_written_2);


}
