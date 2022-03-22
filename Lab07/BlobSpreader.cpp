/*@file: BlobSpreader.cpp
@author: Audrey Pino
Assignment: EECS_268 Lab-07
@brief: Definition of BlobSpreader Class.
@date: 11/07/2021
*/

#include "BlobSpreader.h"
#include "Blob.h"
#include <iostream>
#include <fstream>
using namespace std;

BlobSpreader::BlobSpreader(string input)
{
        fileName = input;
}

void BlobSpreader::run()
{
    ifstream inFile;
    inFile.open(fileName);

    if(inFile.is_open())
    {

        int rows = 0;
        int cols = 0;
        int startRow = 0;
        int startCol = 0;
        char entry = ' ';
        inFile>>rows;
        inFile>>cols;
        inFile>>startRow;
        inFile>>startCol;

        if(rows < 1 || cols < 1)
        {
            cout<<"Invalid number of Rows or Columns"<<endl;
        }


        //Read in the map from file to a 2D array

        char** map = new char* [rows];
        for(int i = 0; i < rows; i++)
        {
            map[i] = new char [cols];
        }

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                inFile>>entry;
                map[i][j] = entry;
            }
        }

        //Creation of a map object

        Blob blobCity(rows, cols, map);
        blobCity.spread(startRow, startCol);
        blobCity.print();


    }
    else
    {
        cout<<"The file is invalid"<<endl;
    }
}

