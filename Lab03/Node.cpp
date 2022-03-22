/** -----------------------------------------------------------------------------
 *
 * @file  Node.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 3
 * @brief This program is for Node based implementation of Stacks.
 * @date 09/27/21
 *
 ---------------------------------------------------------------------------- **/
#include "Node.h"
#include <stdexcept>
#include <iostream>

Node::Node(char entry)
{
    m_entry = entry;
}

char Node::getEntry() const
{
    return m_entry;
}

void Node::setEntry(char entry)
{
    m_entry = entry;
}

Node* Node::getNext() const
{
    if (m_next != nullptr)
    {
        return m_next;
    }
    else
    {
        throw(std::runtime_error ("Empty"));
    }
    
}

void Node::setNext(Node* next)
{
    m_next = next;
}
