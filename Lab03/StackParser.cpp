/** -----------------------------------------------------------------------------
 *
 * @file  StackParser.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 3
 * @brief This program implements the StackParser class where a sequence is evaluated to either be balanced or not.
 * @date 09/27/21
 *
 ---------------------------------------------------------------------------- **/
#include "StackParser.h"
#include "StackOfChars.h"
#include <iostream>
#include <string.h>

StackParser::StackParser()
{
    lengthOfSequence = new int;
    run();
}

StackParser::~StackParser()
{
    delete lengthOfSequence;
}

void StackParser::run()
{
    std::cout << "Enter your sequence: ";
    std::cin >> input;
    *lengthOfSequence = input.length();
    std::cout << '\n';
    if (isBalanced())
    {
        std::cout << "Sequence is balanced.\n";
    }
    else
    {
        std::cout << "Sequence is not balanced.\n";
    }
}

bool StackParser::isBalanced()
{
    for (int i = 0; i<*lengthOfSequence; i++)
    {
        if (input[i] == '{')
        {
            sequence.push(input[i]);
        }
        else
        {
            if ((input[i]=='}') && (!sequence.isEmpty()))
            {
                try
                {
                    sequence.pop();
                }
                catch (std::runtime_error& rte)
                {
                    return false;
                }
            }
            else
            {
                std::cout << "The input sequence conatins a character other than '{' or '}'\n";
                exit(1);
            }
            
        }
    }
    if (sequence.isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

