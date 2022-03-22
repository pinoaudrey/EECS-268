/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 5
 * @brief The Executive class implementation file that defines member methods. This class governs the programs 'executive' actions of parsing the input file for instructions, running those instructions, and displaying the results.
 * @date 10/18/21
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"
#include <iostream>
#include <fstream>

Executive::Executive(std::string fileName)
{
  badLine = 0;
  cError = 0;
    std::ifstream inFile(fileName);
    if(inFile.is_open())
    {
        std::string line;
        int lineCount = 0;
        while(getline(inFile, line))
        {
            commandList.insert(lineCount+1, line);
            ++lineCount;
        }
        inFile.close();
    }
    else
    {
        throw(std::runtime_error("\nFile couldn't be opened.\n"));
    }
}

Executive::~Executive()
{
  commandList.clear();
  histList.clear();
}

void Executive::run()
{
  int commandCount = commandList.getLength();
  std::string command = "";
  for(int i=0;i<commandCount;++i)
  {
    try
    {
      command = commandList.getEntry(1);
      commandList.remove(1);
      this->executeCommand(command, i+1);
    }
    catch(std::runtime_error& rte)
    {
      std::cout << '\n' << rte.what() << '\n';
    }
  }
}

void Executive::executeCommand(std::string command, int lineNum)
{
  if (strStartsWith(command, "NAVIGATE ") == true)
  {
    try
    {
      std::string navURL = strEndsWith(command, "NAVIGATE ");
      urlBrowser.navigateTo(navURL);
    }
    catch(std::runtime_error& rte)
    {
      ++cError;
    }
  }
  else if(strStartsWith(command, "BACK") == true)
  {
    try
    {
        urlBrowser.back();
    }
    catch(std::runtime_error& rte)
    {
      ++cError;
    }

  }
  else if(strStartsWith(command, "FORWARD") == true)
  {
    try
    {
        urlBrowser.forward();
    }
    catch(std::runtime_error& rte)
    {
      ++cError;
    }
  }
  else if(strStartsWith(command, "HISTORY") == true)
  {
    try
    {
        histList.clear();
        urlBrowser.copyCurrentHistory(histList);
        std::cout << "\nOldest\n===========\n";
        int histLength = histList.getLength();
        if(histLength == 0)
        {
        std::cout << "History Empty!\n";
        }
        for(int i=1;i<=histLength;++i)
        {
            if(histList.getEntry(i) == urlBrowser.current())
            {
                std::cout << histList.getEntry(i) << "  <==current\n";
            }
            else
            {
                std::cout << histList.getEntry(i) << '\n';
            }
        }
      std::cout << "===========\nNewest\n";
    }
    catch(std::runtime_error& rte)
    {
      ++cError;
    }
  }
  else
  {
    ++badLine;
  }
}

bool Executive::strStartsWith(std::string str, std::string start)
{
  if (start.size() <= str.size())
  {
    if(str.compare(0,start.size(),start) == 0)
    {
      return true;
    }
  }
  return false;
}

std::string Executive::strEndsWith(std::string str, std::string start)
{
  if(start.size() < str.size())
  {
    std::string end = str.substr(start.size(), str.size());
    return end;
  }
  else
  {
    throw(std::runtime_error("The size of the original string must be less than the entire command string."));
  }
}

