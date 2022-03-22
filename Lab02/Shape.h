/** -----------------------------------------------------------------------------
 *
 * @file  Shape.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program will set up the shape interface to include the virtual functions.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef SHAPE_H
#define SHAPE_H
#include <string>
class Shape
{
public:
    /**
    * @pre None
    * @post None
    * @return Return's the area of the shape
    **/
    virtual double area() const = 0;
    /**
    * @pre None
    * @post None
    * @return Returns the shape name
    **/
    virtual std::string shapeName() const = 0;
    /**
    * @pre None
    * @post Destructor
    * @return None
    **/
    virtual ~Shape() {}
};

#endif
