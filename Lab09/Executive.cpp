/** -----------------------------------------------------------------------------
*
* @file  Executive.cpp
* @author Audrey Pino
* Assignment:   EECS-268 Lab 9
* @brief Implementation File for Executive class.
* @date 11/29/21
*
---------------------------------------------------------------------------- **/
#include "Executive.h"
#include <iostream>
#include <fstream>

Executive::Executive(std::string tFile)
{
    fileName = tFile;
    pokedex = new BST<Pokemon, int>();
    ;
}

void Executive::run()
{
    std::ifstream inFile;
    inFile.open(fileName);

    std::string tempUS, tempJP;
    int tempID;

    while (inFile >> tempUS >> tempID >> tempJP)
    {
        Pokemon p;
        p.id = tempID;
        p.us = tempUS;
        p.jp = tempJP;
        pokedex->add(p);
    }

    inFile.close();

    int userInput = 0;
    while (userInput != 4)
    {
        std::cout << "Please select an option:\n";
        std::cout << "1) Search\n";
        std::cout << "2) Add\n";
        std::cout << "3) Print\n";
        std::cout << "4) Quit\n";
        std::cin >> userInput;
        if (userInput == 1)
        {
            std::cout << "Please enter a pokemon ID:";
            std::cin >> tempID;
            try
            {
                Pokemon temp = pokedex->search(tempID);
                pokemonPrinter(temp);
            }
            catch (std::runtime_error)
            {
                std::cout << "No Pokemon found with that ID.\n";
            }
        }
        
        else if (userInput == 2)
        {
            std::cout << "Please enter the US name: ";
            std::cin >> tempUS;
            std::cout << "Please enter the ID: ";
            std::cin >> tempID;
            std::cout << "Please enter the JP name: ";
            std::cin >> tempJP;
            Pokemon temp;

            temp.id = tempID;
            temp.us = tempUS;
            temp.jp = tempJP;
            
            try
            {
                pokedex->add(temp);
                std::cout << "Added Pokemon.\n";
            }
            catch (std::runtime_error)
            {
                std::cout << "ERROR: Cannot add duplicate Pokemons.\n";
            }
        }
        
        else if (userInput == 3)
        {
            std::cout << "Please select an option:\n";
            std::cout << "1) Pre Traversal\n";
            std::cout << "2) In Traversal\n";
            std::cout << "3) Post Traversal\n";
            std::cin >> userInput;
            if (userInput == 1)
            {
                pokedex->visitPreOrder(pokemonPrinter);
            }
            else if (userInput == 2)
            {
                pokedex->visitInOrder(pokemonPrinter);
            }
            else if (userInput == 3)
            {
                pokedex->visitPostOrder(pokemonPrinter);
            }
        }
    }
}

void Executive::pokemonPrinter(Pokemon p)
{
    std::cout << "US name: " << p.us << ", ID: " << p.id << ", JP name: " << p.jp << '\n';
}

