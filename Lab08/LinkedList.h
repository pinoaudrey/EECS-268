/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 8
 * @brief Header file for templated LinkedList class. 
 * @date 11/22/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "ListInterface.h"
#include "Node.h"

template <typename T>
class LinkedList : public ListInterface<T>
{
private:
    Node<T>* m_front;
    int m_length;

public:
    LinkedList();
    virtual T getEntry(int index);
    virtual void insert(int index, T entry);
    virtual void remove(int index);
    virtual int getLength();
    ~LinkedList();
};

#include "LinkedList.cpp"
#endif

