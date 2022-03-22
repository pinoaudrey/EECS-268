/** -----------------------------------------------------------------------------
 *
 * @file  Executive.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program sets up the call object.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "ShapeContainer.h"
#include <string>
#include "Shape.h"

class Executive
{
private:
    std::string fileName;
    ShapeContainer *shapesContainer;
    Shape *tShapePtr;

public:
    /**
    * @pre None
    * @post Constructor
    * @return None
    **/
    Executive(std::string tFileName);
    /**
    * @pre None
    * @post Runs the code for the whole program
    * @return None
    **/
    void run();
};

#endif

