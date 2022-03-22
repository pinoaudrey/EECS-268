/** -----------------------------------------------------------------------------
 *
 * @file  Rectangle.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program uses the shape interface to set up the rectangle class.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include "Shape.h"

class Rectangle : public Shape
{
private:
    double length, width;

public:
    /**
    * @pre None
    * @post Constructor
    * @return None
    **/
    Rectangle(double tLength, double tWidth);
    /**
    * @pre None
    * @post Destructor
    * @return None
    **/
    virtual ~Rectangle();
    /**
    * @pre None
    * @post None
    * @return Returns the shape's area
    **/
    double area() const;
    /**
    * @pre None
    * @post None
    * @return Returns the shape's name
    **/
    std::string shapeName() const;
};

#endif

