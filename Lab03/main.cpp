/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 3
 * @brief This program uses the StackInterface to set up the StackTester and StackParser classes.
 * @date 09/27/21
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include <string.h>
#include "StackTester.h"
#include "StackOfChars.h"
#include "StackParser.h"


int main (int argc, char* argv[])
{
    if (argc <2)
    {
        std::cout <<"ERROR: Invalid amount of commands\n";
        exit (1);
    }
    else
    {
        std::string s(argv[1]);
        if (s == "-t")
        {
            StackTester tester;
        }
        if (s == "-p")
        {
            StackParser parser;
        }
    }
    return 0;
}
