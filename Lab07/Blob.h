/*@file: Blob.h
@author: Audrey Pino
Assignment: EECS_268 Lab-07
@brief: Header file for Blob Class.
@date: 11/07/2021
*/

#ifndef BLOB_H
#define BLOB_H
#include "BlobSpreader.h"
#include <iostream>
#include <string>
using namespace std;

class Blob
{
    private:
    int rowSize;
    int colSize;
    int peopleCounter;
    char** m_City;

    public:

        /*
        @pre None
        @post none
        @param int numRows, int numCols, char** m_City
        @throw None
       */

    Blob(int numRows, int numCols, char** m_City);

        /*
        @pre None
        @post getter for the row size
        @param none
        @throw None
       */

    int getRowSize();

        /*
        @pre None
        @post getter for the col size
        @param none
        @throw None
       */

    int getColSize();

        /*
        @pre None
        @post returns a bool
        @param int row, int col
        @throw None
       */

    bool isValidMove(int row, int col);

        /*
        @pre None
        @post changes the character to a 'B' if fits the conditions
        @param int row, int col
        @throw None
       */

    void mark(int row, int col);

        /*
        @pre None
        @post controls the movement of the blob
        @param int row, int col
        @throw None
       */

    void spread(int row, int col);

        /*
        @pre None
        @post prints the modified map array
        @param none
        @throw None
       */

    void print();
};

#endif

