/*@file: Blob.h
@author: Audrey Pino
Assignment: EECS_268 Lab-07
@brief: Definition of Blob Class.
@date: 11/07/2021
*/

#include "Blob.h"

Blob::Blob(int numRows, int numCols, char** City)
{
    rowSize = numRows;
    colSize = numCols;
    m_City = City;
    peopleCounter = 0;
}


int Blob::getRowSize()
{
    return(rowSize);
}


int Blob::getColSize()
{
    return(colSize);
}


bool Blob::isValidMove(int row, int col)
{

    if((row <= rowSize - 1) && (col <= colSize - 1) && (row >=  0) && (col >= 0))
    {
        if(m_City[row][col] == '#' || m_City[row][col] == 'B')
        {
            return(false);
        }
        else
        {
            return(true);
        }
    }
    else
    {
        return(false);
    }
}


void Blob::mark(int row, int col)
{
    if(m_City[row][col] == 'P')
    {
        peopleCounter++;
    }

    if(m_City[row][col] != '#' && m_City[row][col] != '@')
    {
        m_City[row][col] = 'B';
    }
    
    if(m_City[row][col]=='@')
    {
        m_City[row][col]='$';
    }
}


void Blob::spread(int row, int col)
{
    //UP
    if(isValidMove(row - 1, col))
    {
        mark(row - 1, col);
        spread(row - 1, col);
    }

    //RIGHT
    if(isValidMove(row, col + 1))
    {
        mark(row, col + 1);
        spread(row, col + 1);
    }

    //DOWN
    if(isValidMove(row + 1, col))
    {
        mark(row + 1, col);
        spread(row + 1, col);
    }

    //LEFT
    if(isValidMove(row, col - 1))
    {
        mark(row, col - 1);
        spread(row, col - 1);
    }
    
    //SEWER
    if(m_City[row][col]=='@'){
        mark(row, col);
        for(int i = 0; i < rowSize; i++){
            for(int j = 0; j < colSize; j++){
                if(m_City[i][j]=='@'){
                    spread(i, j);
                }
            }
        }
    }
}


void Blob::print()
{
    for(int i = 0; i < rowSize; i++)
    {
        for(int j = 0; j < colSize; j++)
        {
            if(m_City[i][j]=='$'){
                m_City[i][j]='@';
            }
            cout<<m_City[i][j];
        }
    cout<<endl;
    }
    cout<<"Total eaten: "<<peopleCounter<<endl;
}

