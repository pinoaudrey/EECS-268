/** -----------------------------------------------------------------------------
*
* @file  Executive.cpp
* @author Audrey Pino
* Assignment:   EECS-268 Lab 10
* @brief Header File for Executive class.
* @date 12/07/21
*
---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <string>
#include <stdexcept>
#include "BNode.h"
#include "Pokemon.h"
#include "BST.h"
#include <fstream>

class Executive
{
private:
    std::string fileName;
    BST<Pokemon, int> *pokedex;
    bool m_copy;
    BST<Pokemon, int> *copy;

public:
    /**
       * @pre None
       * @post t_Filename holds the value of fileName
       * @param None
       * @throw None
    **/
    Executive(std::string tFile);
    /**
       * @pre None
       * @post Program is running
       * @param None
       * @throw None
    **/
    void run();
    /**
       * @pre None
       * @post Prints all of the pokemon out
       * @param Pokemon object
       * @throw None
    **/
    static void pokemonPrinter(Pokemon p);
};
#endif

