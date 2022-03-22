/** -----------------------------------------------------------------------------
 *
 * @file  ShapeContainer.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program will set up the shape interface.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef SHAPECONTAINER_H
#define SHAPECONTAINER_H
#include "Shape.h"
#include <stdexcept>

class ShapeContainer
{
public:
    /**
    * @pre None
    * @post Constructor
    * @return None
    **/
    ShapeContainer(int size); //initialize pointers in m_arrayOfShapes to nullptr
    /**
    * @pre None
    * @post Destructor
    * @return None
    **/
    ~ShapeContainer();
    /**
    * @pre None
    * @post None
    * @return Return's the area of the shape at the index
    **/
    double area(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
    /**
    * @pre None
    * @post None
    * @return Return's the shapeName of the shape at the index
    **/
    std::string shapeName(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
    /**
    * @pre None
    * @post Adds the shape ptr to the array at the index
    * @return None
    **/
    void add(Shape *shapePtr, int index); //throws a std::runtime_error if index is invalid OR if shapePtr is nullptr
    /**
    * @pre None
    * @post Removes the shapePtr at the index
    * @return None
    **/
    void remove(int index); //throws a std::runtime_error if the index is invalid OR there is no object to delete
private:
    Shape **m_arrayOfShapes;
    int m_size;
};

#endif

