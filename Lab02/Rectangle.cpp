/** -----------------------------------------------------------------------------
 *
 * @file  Rectangle.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program will set up the rectangle classes area, constructor, and name.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/

#include <string>
#include "Rectangle.h"

Rectangle::Rectangle(double tLength, double tWidth)
{
    length = tLength;
    width = tWidth;
}

Rectangle::~Rectangle() {}

double Rectangle::area() const
{
    return length * width;
}

std::string Rectangle::shapeName() const
{
    return "Rectangle";
}
