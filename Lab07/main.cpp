/*@file: main.cpp
@author: Audrey Pino
Assignment: EECS_268 Lab-07
@brief: This program uses the command line to run the program.
@date: 11/07/2021
*/

#include "BlobSpreader.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        cout<<"Incorrect number of parameters!"<<endl;
    }
    else
    {
        BlobSpreader blobify(argv[1]);
        blobify.run();
    }

    return(0);
}

