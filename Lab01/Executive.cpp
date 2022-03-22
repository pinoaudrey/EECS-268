/**
* @author	Audrey Pino
* @file		Executive.cpp
* @date		9/14/21
* @brief	This file is in charge of implementing the member
*  		methods of the class defined in Executive.h
*  		
**/


#include "Executive.h"
#include <iostream>
#include <fstream>
#include <limits>


Executive::Executive(std::string fileName)
{
	int tempNumGames, tempYear, tempMinPlayers,tempMinTime;
	std::string tempName;
	double tempGibbRating,tempPubRating;

	std::ifstream inFile;

	inFile.open(fileName);

	if(inFile.is_open())
	{
		inFile >> tempNumGames;
		numGames = tempNumGames;

		gamesList = new BoardGame[numGames];

		for(int i = 0; i < numGames; i++)
        {
		inFile >> tempName >> tempYear >> tempGibbRating >> tempPubRating >> tempMinPlayers >> tempMinTime;

		gamesList[i].setName(tempName);
                gamesList[i].setYear(tempYear);
                gamesList[i].setGibbRating(tempGibbRating);
                gamesList[i].setPubRating(tempPubRating);
                gamesList[i].setMinPlayers(tempMinPlayers);
                gamesList[i].setMinTime(tempMinTime);
	}
	}
}

void Executive::printAllGames()
{
	for (int i= 0; i < numGames; i++)
	{
		std::cout << gamesList[i].getName();
		std::cout << "(";
		std::cout << gamesList[i].getYear();
		std::cout << ") [GR= ";
		std::cout << gamesList[i].getGibbRating();
		std::cout << ", PR= ";
		std::cout << gamesList[i].getPubRating();
		std::cout << ", MP= ";
		std::cout << gamesList[i].getMinPlayers();
		std::cout << ", MT= ";
		std::cout << gamesList[i].getMinTime();
		std::cout << "]\n";
	}
}

void Executive::run()
{
	int choice = 0;

	std::cout << "1. Print all games\n";
        std::cout << "2. Print all games from a year\n";
        std::cout << "3. Print a ranking range\n";
        std::cout << "4. The People VS. Dr.Gibbons\n";
        std::cout << "5. Print based on play time\n";
        std::cout << "6. Exit\n";

	std::cout <<  "Please enter a choice: ";
	std::cin >> choice;

	while (std::cin.fail())
                {
			std::cin.clear();

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "Sorry, that input is invalid. Please try again: ";
			std::cin >> choice;
		}
	if(choice == 1)
	{
		printAllGames();
	}

	else if (choice == 2)
	{
		printYear();
	}

	else if (choice == 3)
	{
		printRange();
	}

	else if (choice == 4)
	{
		peopleVs();
	}

	else if (choice == 5)
	{
		printTime();
	}

	else if(choice > 6 || choice <= 0)
	{
		std::cout << "Enter a choice in the range.\n";
	}
}
void Executive::printYear()
{
	int m_year = 0;
	int gameCount = 0;

	std::cout << "What year?\n";
	std::cin >> m_year;

	for (int i= 0; i < numGames; i++)
	{
		if(m_year == gamesList[i].getYear())
		{
		std::cout << gamesList[i].getName();
                std::cout << "(";
                std::cout << gamesList[i].getYear();
                std::cout << ") [GR= ";
                std::cout << gamesList[i].getGibbRating();
                std::cout << ", PR= ";
                std::cout << gamesList[i].getPubRating();
                std::cout << ", MP= ";
                std::cout << gamesList[i].getMinPlayers();
                std::cout << ", MT= ";
                std::cout << gamesList[i].getMinTime();
                std::cout << "]\n";

		gameCount++;
		}
	}
	if(gameCount == 0)
	{
		std::cout << "No games found\n";
	}
}

void Executive::printRange()
{
	int lowerBound = 0;
	int upperBound = 0;

	std::cout << "Please enter a range for rankings.\n";
	std::cout << "Lower Bound: \n";
	std::cin >> lowerBound;
	std::cout << "Upper Bound: \n";
	std::cin >> upperBound;

	for (int i= 0; i < numGames; i++)
	{
		if(lowerBound <= gamesList[i].getGibbRating() && upperBound >= gamesList[i].getGibbRating())
		{
			std::cout << gamesList[i].getName();
                	std::cout << "(";
                	std::cout << gamesList[i].getYear();
                	std::cout << ") [GR= ";
                	std::cout << gamesList[i].getGibbRating();
                	std::cout << ", PR= ";
                	std::cout << gamesList[i].getPubRating();
                	std::cout << ", MP= ";
                	std::cout << gamesList[i].getMinPlayers();
                	std::cout << ", MT= ";
                	std::cout << gamesList[i].getMinTime();
                	std::cout << "]\n";
		}
	}
}

void Executive::peopleVs()
{
	double threshold =0;
	std::cout << "Please enter a number (0-10) to be a threshold: ";
	std::cin >> threshold;

	for (int i= 0; i < numGames; i++)
	{
		if((gamesList[i].getGibbRating() - gamesList[i].getPubRating()) > threshold || (gamesList[i].getGibbRating() - gamesList[i].getPubRating()) < (threshold * (-1))) 
		{
			std::cout << gamesList[i].getName();
                	std::cout << "(";
                	std::cout << gamesList[i].getYear();
                	std::cout << ") [GR= ";
                	std::cout << gamesList[i].getGibbRating();
                	std::cout << ", PR= ";
                	std::cout << gamesList[i].getPubRating();
                	std::cout << ", MP= ";
                	std::cout << gamesList[i].getMinPlayers();
                	std::cout << ", MT= ";
                	std::cout << gamesList[i].getMinTime();
                	std::cout << "]\n";
                }
	}
}

void Executive::printTime()
{
	int playtime = 0;

	std::cout << "Please enter the desired play time: ";
	std::cin >> playtime;

	for (int i= 0; i < numGames; i++)
	{
		if(playtime >= gamesList[i].getMinTime())
		{
		       	std::cout << gamesList[i].getName();
                	std::cout << "(";
                	std::cout << gamesList[i].getYear();
                	std::cout << ") [GR= ";
                	std::cout << gamesList[i].getGibbRating();
                	std::cout << ", PR= ";
                	std::cout << gamesList[i].getPubRating();
                	std::cout << ", MP= ";
                	std::cout << gamesList[i].getMinPlayers();
                	std::cout << ", MT= ";
                	std::cout << gamesList[i].getMinTime();
                	std::cout << "]\n";
		}
	}
}
	
Executive::~Executive()
{
}
