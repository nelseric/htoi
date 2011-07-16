#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <errno.h>

int main( int argc, char **argv){
    char *a = "0xFFFFDEADBEEFFEaaEDbEEF";
    puts(a);
    printf("%llu\n", ULLONG_MAX);
    printf("%llu\n", strtoull(a, NULL, 16));
    return EXIT_SUCCESS;
}
