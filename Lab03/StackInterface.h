/** -----------------------------------------------------------------------------
 *
 * @file  StackInterface.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 3
 * @brief This program .
 * @date 09/27/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef STACK_H
#define STACK_H

#include <stdexcept>

template <typename T>
class StackInterface
{
    public:
    virtual void push(T entry) = 0;
    virtual void pop() = 0;
    virtual T peek() const = 0;
    virtual bool isEmpty() const = 0;
        virtual ~StackInterface() {} //virtual destructor

};

#endif
