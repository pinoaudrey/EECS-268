/**
* @author	Audrey Pino
* @file		Executive.h
* @date		9/14/21
* @brief	This header file defines the Executive class. It is
*  		able to read the text file
*  		and print menu options for the user.
**/


#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include "BoardGame.h"

//runs the program and holds the list of games

class Executive
{
	private:
		int numGames;
		BoardGame *gamesList = nullptr;
	
	public:
		Executive(std::string fileName);
		void run();
		
		//prints games
		void  printAllGames();
		
		void printYear();
		void printRange();
		void peopleVs();
		void printTime();
		~Executive();


};

#endif
