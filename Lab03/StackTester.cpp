/** -----------------------------------------------------------------------------
 *
 * @file  StackTester.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 3
 * @brief This program sets up all test methods.
 * @date 09/27/21
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include "StackTester.h"

StackTester::StackTester()
{
    runTests();
}

void StackTester::runTests()
{
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    test07();
    test08();
}

void StackTester::test01()
{
    StackOfChars stack;

    std::cout <<"Test 01: New stack is empty: ";

    if (stack.isEmpty())
    {
        std::cout << "PASSED\n";
    }
    else
    {
        std::cout << "FAILED\n";
    }
    
}

void StackTester::test02()
{
    StackOfChars stack;

    std::cout <<"Test 02: Push on empty stack makes it non-empty: ";
    stack.push('A');

    if (stack.isEmpty())
    {
        std::cout << "FAILED\n";
    }
    else
    {
        std::cout << "PASSED\n";
    }
}

void StackTester::test03()
{
    StackOfChars stack;

    std::cout <<"Test 03: Popping all elements makes stack empty: ";
    stack.push('A');

    try
    {
        stack.pop();
        if (stack.isEmpty())
        {
            std::cout << "PASSED\n";
        }
        else
        {
            std::cout << "FAILED\n" ;
        }
    }
    catch(std::runtime_error& rte)
    {
        std::cout << "FAILED!\n";
    }
}

void StackTester::test04()
{
    StackOfChars stack;

    std::cout <<"Test 04: Popping an empty stack: ";

    try
    {
        stack.pop();
        std::cout << "FAILED\n" ;
    }
    catch(std::runtime_error& rte)
    {
        std::cout << "PASSED\n";
    }
}

void StackTester::test05()
{
    StackOfChars stack;

    std::cout <<"Test 05: Peeking into an empty stack: ";

    try
    {
        std::cout << stack.peek() << " is returned, thus: FAILED\n";
    }
    catch(std::runtime_error& rte)
    {
        std::cout << "PASSED\n";
    }
}

void StackTester::test06()
{
    StackOfChars stack;

    std::cout <<"Test 06: Popping all elements makes stack empty: ";
    stack.push('A');
    stack.push('B');
    stack.push('C');
    try
    {
        stack.pop();
        stack.pop();
        stack.pop();
        if (stack.isEmpty())
        {
            std::cout << "PASSED\n";
        }
        else
        {
            std::cout << "FAILED\n" ;
        }
    }
    catch(std::runtime_error& rte)
    {
        std::cout << "FAILED!\n";
    }
}

void StackTester::test07()
{
    StackOfChars stack;

    std::cout <<"Test 07: Popping 2/3 of the elements makes stack non-empty: ";
    stack.push('A');
    stack.push('B');
    stack.push('C');
    try
    {
        stack.pop();
        stack.pop();
        if (stack.isEmpty())
        {
            std::cout << "FAILED\n";
        }
        else
        {
            std::cout << "PASSED\n" ;
        }
    }
    catch(std::runtime_error& rte)
    {
        std::cout << "FAILED!\n";
    }
}


void StackTester::test08()
{
    StackOfChars stack;

    std::cout <<"Test 08: Pushed elements are in opposite order of push: ";
    stack.push('A');
    stack.push('B');
    try
    {
        if (stack.peek()=='B')
        {
            std::cout << "PASSED\n";
        }
        else
        {
            std::cout << "FAILED\n";
        }
    }
    catch(std::runtime_error& rte)
    {
        std::cout << "FAILED!\n";
    }
}
