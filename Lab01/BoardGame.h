/**
* @author	Audrey Pino
* @file		BoardGame.h
* @date		9/14/21
* @brief	This header file defines the BoardGame class. It is
*  		able to read the text file.
**/


#ifndef BOARDGAME_H
#define BOARDGAME_H
#include <ios>

class BoardGame
{
	private:
		double pubRating;
		double gibbRating;
		int year;
		int minPlayers;
		int minTime;
		std::string n_name;

	public:
		BoardGame();
		void setName(std::string tempName);
		void setYear(int tempYear);
		void setGibbRating(double tempGibbRating);
		void setPubRating(double tempPubRating);
		void setMinPlayers(int tempMinPlayers);
		void setMinTime(int tempMinTime);
		double getPubRating();
		double getGibbRating();
		std::string getName();
		int getYear();
		int getMinPlayers();
		int getMinTime();
};
#endif
