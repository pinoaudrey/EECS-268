/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Audrey Pino 
 * Assignment:   EECS-268 Lab 6
 * @brief main initializes the program based on input. Program looks for the first parameter from the command line.
 * @date 10/25/21
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include <stdexcept>
#include "fibonacci.h"
using namespace std;

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    cout << "Incorrect number of parameters!\n";
  }
  else
  {
    string baba=argv[1];
    fibonacci haha;
    if(baba == "-i")
    {
      cout<<haha.getFibonacci(atoi(argv[2]))<<endl;
    }
    else if (baba == "-v")
    {
      if(haha.isFibonacci(0, atoi(argv[2]))==false)
      {
        cout<<argv[2]<<" is not in the sequence\n";
      }
      else{
        cout<<argv[2]<<" is in the sequence\n";
      }
    }
    else{
      cout<<"Your command is invalid\n";
    }
  }
  return(0);
}

