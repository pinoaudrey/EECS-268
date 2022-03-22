/** -----------------------------------------------------------------------------
 *
 * @file  Triangle.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program will set up the triangle classes area, constructor, and name.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/
#include <string>
#include "Triangle.h"

Triangle::Triangle(double tBase, double tHeight)
{
    base = tBase;
    height = tHeight;
}

Triangle::~Triangle() {}

double Triangle::area() const
{
    return (base * height) / 2;
}

std::string Triangle::shapeName() const
{
    return "Triangle";
}
