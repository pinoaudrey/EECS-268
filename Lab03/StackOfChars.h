/** -----------------------------------------------------------------------------
 *
 * @file  StackOfChars.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 3
 * @brief This program will implement the StackInterface but of a stack specifically filled with chars.
 * @date 09/27/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef STACKOFCHARS_H
#define STACKOFCHARS_H

//Our stack will implement the StackInterface but of a stack specifically filled with chars.
//We'll learn in lecture how to make a templated Node and then a templated Stack
#include "StackInterface.h"
#include "Node.h"

class StackOfChars : public StackInterface<char>
{
    private:
    Node* m_top;
    
    public:
    
    StackOfChars();

    StackOfChars(const StackOfChars& orig);

        ~StackOfChars();

    void operator=(const StackOfChars& rhs);
    
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre None
       * @post entry is added to top of the stack
       * @return entry , the element to be added to the stack
       * @throw None
       **/
    void push(char entry);
    
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre Stack is non-empty
       * @post Top element is removed from the stack
       * @return None
       * @throw std::runtime_error if pop attempted on empty stack
       **/
    void pop();
        /**
        * @pre Stack is non-empty
        * @post makes no changes
        * @return returns the values stored in m_top
        * @throw if m_top is null, throws a runtime error
        **/
    char peek() const; //should peek throw an exception?
        /**
        * @post makes no changes
        * @return returns true if m_top is null, false otherwise
        **/
    bool isEmpty() const;

};
#endif

