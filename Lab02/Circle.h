/** -----------------------------------------------------------------------------
 *
 * @file  Circle.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program uses the shape interface to set up the circle class.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <string>

class Circle : public Shape
{
private:
    double radius;

public:
    /**
    * @pre None
    * @post Constructor
    * @return None
    **/
    Circle(double tRadius);
    /**
    * @pre None
    * @post Destructor
    * @return None
    **/
    virtual ~Circle();
    /**
    * @pre None
    * @post None
    * @return Returns the shape's area
    **/
    virtual double area() const;
    /**
    * @pre None
    * @post None
    * @return Returns the shape's name
    **/
    virtual std::string shapeName() const;
};

#endif

