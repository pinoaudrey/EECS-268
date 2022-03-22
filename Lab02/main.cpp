/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program uses the comandline to run the program.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include "Executive.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Incorrect number of parameters!\n";
    }
    else
    {
        Executive exec(argv[1]);
        exec.run();
    }

    return (0);
}

