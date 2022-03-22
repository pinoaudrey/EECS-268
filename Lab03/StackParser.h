/** -----------------------------------------------------------------------------
 *
 * @file  StackParser.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 3
 * @brief This program declares member methods for the parser mode.
 * @date 09/27/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef STACKPARSER_H
#define STACKPARSER_H

#include "StackOfChars.h"

class StackParser
{
    public:
    /*
    * @pre - program run in -p mode
    * @post - StackParser object created
    */
    StackParser();
    
    /**
    * @pre None
    * @post StackParser is deleted
    * @param
    * @throw None
    **/
    ~StackParser();
    private:
    std::string input;
    StackOfChars sequence;
    int* lengthOfSequence;
    
    /*
    * @pre - StackParser object successfully created
    * @post - program runs, requesting a sequence from the user to check if balanced
    */
    void run();
   
    /*
    * @pre - called during run.
    * @return - boolean representing whether the sequence is a balanced string of curly braces.
    */
    bool isBalanced();

};

#endif

