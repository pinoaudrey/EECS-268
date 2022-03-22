/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 8
 * @brief Header file for templated Stack class.
 * @date 11/22/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef STACK_H
#define STACK_H
#include "Node.h"
#include "StackInterface.h"

template <typename T>
class Stack : public StackInterface<T>
{
private:
    Node<T>* m_top;

public:
    Stack();
    virtual void push(T entry);
    virtual void pop();
    virtual bool isEmpty();
    virtual T peek();
    ~Stack();

};
#include "Stack.cpp"
#endif

