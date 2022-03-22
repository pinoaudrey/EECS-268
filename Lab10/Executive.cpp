/** -----------------------------------------------------------------------------
*
* @file  Executive.cpp
* @author Audrey Pino
* Assignment:   EECS-268 Lab 10
* @brief Implementation File for Executive class.
* @date 12/07/21
*
---------------------------------------------------------------------------- **/
#include "Executive.h"
#include <iostream>

Executive::Executive(std::string tFile)
{
    fileName = tFile;
    m_copy = false;
    pokedex = new BST<Pokemon, int>;
    //copy = nullptr;
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

    int userInput;
    do{
        try{
        std::cout << "Please select an option:\n";
        std::cout << "1) Search\n";
        std::cout << "2) Add\n";
        std::cout << "3) Copy\n";
        std::cout << "4) Remove\n";
        std::cout << "5) Print\n";
        std::cout << "6) Quit\n";
        std::cin >> userInput;
                
// SEARCH = 1
        if (userInput == 1)
        {
            if (m_copy) {
                std::cout << "Interact with original or copy? 1 or 2\n";
                std::cin >> userInput;
            }
            
            if (userInput == 1 || !m_copy) {
            std::cout << "Please enter a pokemon ID:";
            std::cin >> tempID;

            Pokemon temp = pokedex->search(tempID);
            pokemonPrinter(temp);
            }
            else if(userInput == 2 || m_copy){
                Pokemon temp = copy->search(tempID);
                pokemonPrinter(temp);
                }
        }

// ADD = 2
        else if (userInput == 2)
        {
            if (m_copy) {
                std::cout << "Interact with original or copy? 1 or 2\n";
                std::cin >> userInput;
            }
            if (userInput == 1 || !m_copy) {
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
            
            pokedex->add(temp);
            std::cout << "Added Pokemon.\n";
            }
            else if (userInput == 2 || m_copy){
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
                
                copy->add(temp);
                std::cout << "Added Pokemon.\n";
                }
            }

// COPY = 3
        else if (userInput == 3)
        {
            if (!m_copy)
            {
                pokedex = new BST<Pokemon, int> (*copy);
                m_copy = true;
                std::cout << "Copy created!\n";
            }
            else{
                std::cout << "Copy already created!\n";
            }
        }

// REMOVE = 4
        else if (userInput == 4)
        {
            if (m_copy) {
                std::cout << "Interact with original or copy? 1 or 2\n";
                std::cin >> userInput;
            }

            if (userInput == 1 || !m_copy) {
            int pokeID;
            std::cout << "Please enter the pokedex number (id):";
            std::cin >> pokeID;
            pokedex->remove(pokeID);
            }
            else if (userInput == 2 || m_copy){
                int pokeID;
                std::cout << "Please enter the pokedex number (id):";
                std::cin >> pokeID;
                copy->remove(pokeID);
            }
        }
        
// PRINT = 5
        else if (userInput == 5)
        {
            if (m_copy) {
                std::cout << "Interact with original or copy? 1 or 2\n";
                std::cin >> userInput;
            }
            if (userInput == 1 || !m_copy) {
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
                
            else if(userInput == 2 || m_copy){
                std::cout << "Please select an option:\n";
                std::cout << "1) Pre Traversal\n";
                std::cout << "2) In Traversal\n";
                std::cout << "3) Post Traversal\n";
                std::cin >> userInput;
                if (userInput == 1)
                {
                    copy->visitPreOrder(pokemonPrinter);
                }
                else if (userInput == 2)
                {
                    copy->visitInOrder(pokemonPrinter);
                }
                else if (userInput == 3)
                {
                    copy->visitPostOrder(pokemonPrinter);
                }
            }
        }
    }
        catch(std::exception &e) {
            std::cout << e.what() << "\n";
        }
    } while(userInput != 6);
    }

void Executive::pokemonPrinter(Pokemon p)
{
    std::cout << "US name: " << p.us << ", ID: " << p.id << ", JP name: " << p.jp << '\n' << '\n';
}

