/**
* @author	Audrey Pino
* @file		BoardGame.cpp
* @date		9/14/21
* @brief	This file is in charge of implementing the member
*  		methods of the class defined in BoardGame.h
*  		
**/


#include "BoardGame.h"

BoardGame::BoardGame()
{
}
std::string BoardGame::getName()
{
	return(n_name);
}
int BoardGame::getYear()
{
	return(year);
}

int BoardGame::getMinPlayers()
{
	return(minPlayers);
}

int BoardGame::getMinTime()
{
	return(minTime);
}
double BoardGame::getGibbRating()
{
	return(gibbRating);
}
double BoardGame::getPubRating()
{
	return(pubRating);
}

void BoardGame::setName(std::string tempName)
{
	n_name=tempName;
}

void BoardGame::setYear(int tempYear)
{
	year=tempYear;
}

void BoardGame::setGibbRating(double tempGibbRating)
{
	gibbRating=tempGibbRating;
}

void BoardGame::setPubRating(double tempPubRating)
{
	pubRating=tempPubRating;
}
void BoardGame::setMinPlayers(int tempMinPlayers)
{
	minPlayers = tempMinPlayers;
}
void BoardGame::setMinTime(int tempMinTime)
{
	minTime = tempMinTime;
}
