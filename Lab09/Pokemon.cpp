/** -----------------------------------------------------------------------------
*
* @file  Pokemon.cpp
* @author Audrey Pino
* Assignment:   EECS-268 Lab 9
* @brief Implementation File for Pokemon class.
* @date 11/29/21
*
---------------------------------------------------------------------------- **/
#include "Pokemon.h"

Pokemon::Pokemon()
{
}

bool Pokemon::operator==(const Pokemon &rhs)
{
    return (id == rhs.id);
}

bool Pokemon::operator<(const Pokemon &rhs)
{
    return (id < rhs.id);
}

bool Pokemon::operator>(const Pokemon &rhs)
{
    return (id > rhs.id);
}

bool Pokemon::operator==(int pokedexNumber) const
{
    return (id == pokedexNumber);
}

bool Pokemon::operator<(int pokedexNumber) const
{
    return (id < pokedexNumber);
}

bool Pokemon::operator>(int pokedexNumber) const
{
    return (id > pokedexNumber);
}

