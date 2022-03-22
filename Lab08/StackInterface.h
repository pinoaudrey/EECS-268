/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 8
 * @brief Header file for templated Stack Interface.
 * @date 11/22/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef STACK_INTERFACE_H
#define STACK_INTERFACE_H

template <typename T>
class StackInterface
{
public:
    virtual void push(T entry) = 0;
    virtual void pop() = 0;
    virtual T peek() = 0;
    virtual bool isEmpty()= 0;
};


#endif

