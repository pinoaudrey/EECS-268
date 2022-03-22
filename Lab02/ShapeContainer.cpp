/** -----------------------------------------------------------------------------
 *
 * @file  ShapeContainer.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program uses the shape interface to set up the circle class.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/
#include <string>
#include <fstream>
#include <iostream>
#include "ShapeContainer.h"
#include "Shape.h"

ShapeContainer::ShapeContainer(int size)
{
    m_size = size;
    m_arrayOfShapes = new Shape *[m_size];
    for (int i = 0; i < size; i++)
    {
        m_arrayOfShapes[i] = nullptr;
    }
}

double ShapeContainer::area(int index) const
{
    if (index >= 0 && index < m_size && m_arrayOfShapes[index] != nullptr)
    {
        return m_arrayOfShapes[index]->area();
    }
    else
    {
        throw(std::runtime_error("Out of bounds index.\n"));
    }
}

std::string ShapeContainer::shapeName(int index) const
{
    if (index >= 0 && index < m_size && m_arrayOfShapes[index] != nullptr)
    {
        return m_arrayOfShapes[index]->shapeName();
    }
    else
    {
        throw(std::runtime_error("Out of bounds index.\n"));
    }
}

void ShapeContainer::add(Shape *shapePtr, int index)
{
    if (index >= 0 && index < m_size && shapePtr != nullptr)
    {
        m_arrayOfShapes[index] = shapePtr;
    }
    else
    {
        throw(std::runtime_error("Out of bounds index or nullptr\n"));
    }
}

void ShapeContainer::remove(int index)
{
    if (index >= 0 && index < m_size && m_arrayOfShapes[index] != nullptr)
    {
        m_arrayOfShapes[index] = nullptr;
    }
    else
    {
        throw(std::runtime_error("Out of bounds index or nullptr\n"));
    }
}

ShapeContainer::~ShapeContainer()
{
    for (int i = 0; i < m_size; i++)
    {
        delete m_arrayOfShapes[i];
    }
    delete[] m_arrayOfShapes;
}

