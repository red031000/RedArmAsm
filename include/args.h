#ifndef REDARMASM_ARGS_H
#define REDARMASM_ARGS_H

#include "types.h"

typedef struct args
{
    const char *input;
    const char *output;
} args;

args ProcessArgs(int argc, char **argv);

#endif //REDARMASM_ARGS_H
