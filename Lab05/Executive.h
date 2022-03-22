/** -----------------------------------------------------------------------------
 *
 * @file  Executive.h
 * @author Audrey Pino
 * Assignment:   EECS-268 Lab 5
 * @brief Header File for Executive class. Lists member methods. Class governs the programs 'executive' actions of parsing the input file for instructions, running those instructions, and displaying the results.
 * @date 10/18/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include "Browser.h"
#include <string>

class Executive
{

    public:
       /** CONSTRUCTOR
    * @pre - none
    * @post Executive object is created, member variables initialized.
    * @param std::string fileName: fileName to be opened and parsed for commands
    * @throws std::runtime_error if file cannot be opened
    */
        Executive(std::string fileName);

       /** DESTRUCTOR
    * @pre - none
    * @post Executive object is destroyed, lists cleared
    */
    ~Executive();

       /**
    * @pre - Conditionally called upon successful creation of Executive object.
    * @post - Operations are run given by the commands from the input file. Bad command lines are ignored.
    */
    void run();


    private:
    LinkedList<std::string> commandList;
    LinkedList<std::string> histList;
    Browser urlBrowser;
    int badLine;
    int cError;

       /** private helper function
    * @pre - called inside executeCommand function...to assist in executing commands
    * @post - none
    * @param std::string str: need to check if this string is identical to or at least begins with the following parameter
    * @param std::string start: Possible beggining of string 'str'
    * @return bool is true if string 'str' begins with the string 'start' False otherwise
    */
    bool strStartsWith(std::string str, std::string start);

       /** private helper function
    * @pre - called inside executeCommand function to assist in executing commands
    * @post - none
    * @param std::string str: full string that needs to be trimmed of its beginning to leave the remainder
    * @param std::string start: string that is the beginning and section of full string 'str' that needs to be removed.
    * @return std::string That is the remainder when beginning string 'start' is subtracted from original, full string 'str'
    */
    std::string strEndsWith(std::string str, std::string start);

       /** private helper function
    * @pre - called inside the run() function, conditional on a file being successfully opened.
    * @param std::string command: string storing the given command parsed from the input file and passed in by the run() function
    * @post command is executed, or ignored if it is nonsensical yet represents a real function
    * @throws std::runtime_error if the particular command does not represent any known possible function
    */
    void executeCommand(std::string command, int lineNum);


};
#endif

