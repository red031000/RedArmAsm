#include "args.h"
#include "file.h"

int main(int argc, char **argv)
{
    args arguments = ProcessArgs(argc, argv);
    FILE *file = ReadFile(arguments.input);
    return 0;
}
