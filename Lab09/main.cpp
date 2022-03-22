#include <iostream>
#include "Executive.h"
#include <string>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Incorrect number of parameters." << std::endl;
    }
    else
    {
        Executive exec(argv[1]);
        exec.run();
    }
}
