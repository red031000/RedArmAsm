//
// Created by red031000 on 2020-09-25.
//

#include "file.h"
#include "exception.h"

FILE *ReadFile(const char *path)
{
    FILE *in_file = fopen(path, "r");
    if (in_file == NULL)
    {
        Exception e = {"Failed to open file.", 4};
        ProcessException(e);
    }
    return in_file;
}
