/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 2
 * @brief This program handles the code for the program and shape interface.
 * @date 09/20/21
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"
#include <string>
#include <fstream>
#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "ShapeContainer.h"

Executive::Executive(std::string tFileName)
{
    fileName = tFileName;
}

void Executive::run()
{
    std::ifstream inFile;
    inFile.open(fileName);
    std::string tContent;

    int containerSize;
    inFile >> containerSize;

    shapesContainer = new ShapeContainer(containerSize);

    while (inFile >> tContent)
    {
        if (tContent == "ADD")
        {
            int tIndex;
            inFile >> tIndex;
            std::string tShape;
            inFile >> tShape;
            if (tShape == "CIR")
            {
                double tRadius;
                inFile >> tRadius;
                tShapePtr = new Circle(tRadius);
                try
                {
                    shapesContainer->add(tShapePtr, tIndex);
                }
                catch (std::runtime_error err)
                {
                    std::cout << "ADD ERROR: Index " << tIndex << " is out of bounds or is a nullptr.\n";
                }
            }
            else if (tShape == "TRI")
            {
                double tBase, tHeight;
                inFile >> tBase;
                inFile >> tHeight;
                tShapePtr = new Triangle(tBase, tHeight);
                try
                {
                    shapesContainer->add(tShapePtr, tIndex);
                }
                catch (std::runtime_error err)
                {
                    std::cout << "ADD ERROR: Index " << tIndex << " is out of bounds or is a nullptr.\n";
                }
            }
            else if (tShape == "REC")
            {
                double tLength, tWidth;
                inFile >> tLength;
                inFile >> tWidth;
                tShapePtr = new Rectangle(tLength, tWidth);
                try
                {
                    shapesContainer->add(tShapePtr, tIndex);
                }
                catch (std::runtime_error err)
                {
                    std::cout << "ADD ERROR: Index " << tIndex << " is out of bounds or is a nullptr.\n";
                }
            }
        }
        else if (tContent == "PRINT")
        {
            int tIndex;
            inFile >> tIndex;
            try
            {
                std::string tName = shapesContainer->shapeName(tIndex);
                double tArea = shapesContainer->area(tIndex);
                std::cout << "Shape at index " << tIndex << ": " << tName << " area = " << tArea << '\n';
            }
            catch (std::runtime_error err)
            {
                std::cout << "Shape at index " << tIndex << ": Does not exist.\n";
            }
        }
        else if (tContent == "DELETE")
        {
            int tIndex;
            inFile >> tIndex;
            try
            {
                shapesContainer->remove(tIndex);
            }
            catch (std::runtime_error err)
            {
                std::cout << "DELETE ERROR: Index " << tIndex << " is out of bounds or is a nullptr.\n";
            }
        }
        else if (tContent == "EXIT")
        {
            std::cout << "Exiting...\n";
            delete tShapePtr;
	    delete shapesContainer;
        }
    }
}

