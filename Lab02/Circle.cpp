/** -----------------------------------------------------------------------------
 *
 * @file  Circle.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program will set up the circle classes area, constructor, and name.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/

#include <string>
#include "Circle.h"
#include <math.h>

Circle::Circle(double tRadius)
{
    radius = tRadius;
}

Circle::~Circle() {}

double Circle::area() const
{
    return radius * radius * M_PI;
}

std::string Circle::shapeName() const
{
    return "Circle";
}
