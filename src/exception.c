//
// Created by red031000 on 2020-09-23.
//

#include <stdlib.h>
#include <stdio.h>
#include "exception.h"

void ProcessException(Exception exception)
{
    printf("%s\n", exception.message);
    exit(exception.code);
}
