/** -----------------------------------------------------------------------------
 *
 * @file  LinkedList.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 8
 * @brief Header file for templated List Interface.
 * @date 11/22/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef LIST_INTERFACE_H
#define LIST_INTERFACE_H

template <typename T>
class ListInterface
{
public:
    virtual void insert(int index, T entry) = 0;
    virtual void remove(int index) = 0;
    virtual T getEntry(int index) = 0;
    virtual int getLength() = 0;
    virtual ~ListInterface(){}

};

#endif

