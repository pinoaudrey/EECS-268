/** -----------------------------------------------------------------------------
 *
 * @file  StackTester.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 3
 * @brief This program calls all test methods.
 * @date 09/27/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef STACKTESTER_H
#define STACKTESTER_H

#include "StackOfChars.h"

class StackTester
{
    public:

    StackTester();

    //This will call all your test methods
    void runTests();
     
    private:

    /**
    * @brief Creates an empty stack and verifies isEmpty() returns true
    **/
    void test01();

    /**
    * @brief Creates an empty stack pushes 1 value, verifies isEmpty() returns false
    **/
    void test02();

    /**
    * @brief Creates an empty stack, then pushes once, pops once, and verifies isEmpty returns true
    **/
    void test03();
   
    /**
    * @brief Creates an empty stack, pops, verifies a runtime error is thrown
    **/
    void test04();
   
    /**
    * @brief Creates an empty stack, peeks, verifies a runtime error is thrown
    **/
    void test05();
    
    /**
    * @brief Creates an empty stack, then pushes 3 times, pops 3 times, verifies isEmpty returns true
    **/
    void test06();

    /**
    * @brief Creates an empty stack, then pushes 3 times, pops 2 times, verifies isEmpty returns false
    **/
    void test07();

    /**
    * @brief Creates an empty stack, pushes 2 values, verifies order is correct
    **/
    void test08();
};

#endif
