//
// Created by red031000 on 2020-09-23.
//

#ifndef REDARMASM_EXCEPTION_H
#define REDARMASM_EXCEPTION_H

#include "types.h"

typedef struct Exception
{
    const char *message;
    int code;
} Exception;

void ProcessException(Exception exception);

#endif //REDARMASM_EXCEPTION_H
