/** -----------------------------------------------------------------------------
*
* @file  BST.h
* @author Audrey Pino
* Assignment:   EECS-268 Lab 10
* @brief Header File for BNode class.
* @date 12/07/21
*
---------------------------------------------------------------------------- **/
#ifndef BNODE_H
#define BNODE_H

template <typename T>
class BNode
{
private:
    T m_entry;
    BNode<T> *m_left;
    BNode<T> *m_right;

public:
    /**
    * @pre None
    * @post Constructor
    * @return name
    **/
    BNode(T entry);
    /**
    * @pre None
    * @post None
    * @return Returns the entry
    **/
    T getEntry() const;
    /**
    * @pre None
    * @post Sets the entry to an argument
    * @return name
    **/
    void setEntry(T entry);
    /**
    * @pre None
    * @post None
    * @return Returns an entry left
    **/
    BNode<T> *getLeft() const;
    /**
    * @pre None
    * @post None
    * @return Returns an entry right
    **/
    BNode<T> *getRight() const;
    /**
    * @pre None
    * @post Sets the right entry
    * @return name
    **/
    void setRight(BNode<T> *next);
    /**
    * @pre None
    * @post Sets the left entry
    * @return name
    **/
    void setLeft(BNode<T> *next);
};
#include "BNode.cpp"

#endif

