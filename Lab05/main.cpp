/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 5
 * @brief main initializes the program based on input. Program looks for the first parameter in file name of the input data.
 * @date 10/18/21
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"
#include <iostream>
#include <stdexcept>


int main(int argc, char* argv[])
{
    if(argc < 2) std::cout << "No parameter/argument given\n";
    else
    {
        try
        {
            Executive lab05(argv[1]);
            lab05.run();
        }
        catch(std::runtime_error& rte)
        {
            std::cout << "\n" << rte.what();
        }
    }

  return(0);
}

