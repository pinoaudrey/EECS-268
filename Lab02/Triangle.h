/** -----------------------------------------------------------------------------
 *
 * @file  Triangle.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program uses the shape interface to set up the triangle class.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include "Shape.h"

class Triangle : public Shape
{
private:
    double base, height;

public:
    /**
    * @pre None
    * @post Constructor
    * @return None
    **/
    Triangle(double tBase, double tHeight);
    /**
    * @pre None
    * @post Destructor
    * @return None
    **/
    virtual ~Triangle();
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

