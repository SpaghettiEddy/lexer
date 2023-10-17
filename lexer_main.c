#include <stdio.h>
#include <stdlib.h>
#include "lexer.h"

int main(int argc, char *argv[]) {

    lexer_init(argv[1]);
    lexer_output();
    return 0;
}
