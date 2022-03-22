/** -----------------------------------------------------------------------------
*
* @file  Pokemon.h
* @author Audrey Pino
* Assignment:   EECS-268 Lab 9
* @brief Header File for Pokemon class.
* @date 11/29/21
*
---------------------------------------------------------------------------- **/
#ifndef POKEMON_H
#define POKEMON_H
#include <string>

class Pokemon
{
private:
public:
    std::string us, jp;
    int id;
    /**
       * @pre None
       * @post Constructor
       * @param None
       * @throw None
    **/
    Pokemon();
    /**
       * @pre None
       * @post None
       * @return boolean for if the operator is true or false
       * @param Right hand side pokemon object
       * @throw None
    **/
    bool operator==(const Pokemon &rhs);
    /**
       * @pre None
       * @post None
       * @return boolean for if the operator is true or false
       * @param Right hand side pokemon object
       * @throw None
    **/
    bool operator<(const Pokemon &rhs);
    /**
       * @pre None
       * @post None
       * @return boolean for if the operator is true or false
       * @param Right hand side pokemon object
       * @throw None
    **/
    bool operator>(const Pokemon &rhs);
    /**
       * @pre None
       * @post None
       * @return boolean for if the operator is true or false
       * @param The pokedex id number
       * @throw None
    **/
    bool operator==(int pokedexNumber) const;
    /**
       * @pre None
       * @post None
       * @return boolean for if the operator is true or false
       * @param The pokedex id number
       * @throw None
    **/
    bool operator<(int pokedexNumber) const;
    /**
       * @pre None
       * @post None
       * @return boolean for if the operator is true or false
       * @param The pokedex id number
       * @throw None
    **/
    bool operator>(int pokedexNumber) const;
};
#endif

