
/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 8
 * @brief Header file for templated Queue class.
 * @date 11/22/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef QUEUE_H
#define QUEUE_H

#include "QueueInterface.h"
#include "Node.h"

template <typename T>
class Queue : public QueueInterface<T>
{
private:
    Node<T>* m_front;
    Node<T>* m_back;


public:
    Queue();
    void enqueue(T entry);
    void dequeue();
    T peekFront() const;
    bool isEmpty() const;
    ~Queue();

};
#include "Queue.cpp"
#endif

