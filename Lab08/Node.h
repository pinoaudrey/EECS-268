/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 8
 * @brief Header file for templated Node class.
 * @date 11/22/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
private:
    T m_entry;
    Node<T>* m_next;

public:
    Node(T entry);
    T getEntry() const;
    void setEntry(T entry);
    Node<T>* getNext() const;
    void setNext(Node<T>* next);
};

#include "Node.cpp"
#endif

