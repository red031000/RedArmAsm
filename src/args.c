//
// Created by red031000 on 2020-09-23.
//

#include <string.h>
#include "args.h"
#include "exception.h"

args ProcessArgs(int argc, char **argv)
{
    args arg = { NULL, NULL };
    for (int i = 1; i < argc; i++)
    {
        if (strcmp("-o", argv[i]) == 0)
        {
            arg.output = argv[++i];
        }
        else if (arg.input == NULL && (memcmp("-", argv[i], 1) != 0))
        {
            arg.input = argv[i];
        }
        else
        {
            int size = strlen(argv[i]) + 22;
            char message[size];
            memset(message, 0, size);
            strcpy(message, "Unrecognised option: ");
            strcat(message, argv[i]);
            Exception e = {message, 2};
            ProcessException(e);
        }
    }
    if (arg.input == NULL)
    {
        Exception e = {"No input specified.", 3};
        ProcessException(e);
    }
    if (arg.output == NULL)
    {
        Exception e = {"No output specified.", 4};
        ProcessException(e);
    }
    return arg;
}
