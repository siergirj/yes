#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>
#include <error.h>

int main(int argc, char** argv) {

    // if no parameters passed
    if (argc < 2) {
        argv[argc++] = (char *) "y";
    }

    // Infinite loop
    while (true) {
        int i;
        for (i = 1; i < argc; i++) {
            if (fputs(argv[i], stdout) == EOF || putchar(i == argc - 1 ? '\n' : ' ') == EOF) {
                error(EXIT_FAILURE, errno, ("Output error"));
            }
        }
    }

    return EXIT_SUCCESS;
}
