/*@file: BlobSpreader.h
@author: Audrey Pino
Assignment: EECS_268 Lab-07
@brief: Header file for BlobSpreader Class.
@date: 11/07/2021
*/

#ifndef BLOB_SPREADER_H
#define BLOB_SPREADER_H
#include <string>
#include <iostream>
#include "Blob.h"
using namespace std;

class BlobSpreader
{
        private:
        string fileName;

        public:

        /*
        @pre None
        @post reading in from file and calling functions
        @param none
        @throw None
       */

        void run();

        /*
        @pre None
        @post none
        @param string input
        @throw None
       */
        
        BlobSpreader(string input);

};

#endif



