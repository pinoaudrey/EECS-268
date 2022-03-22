
/** -----------------------------------------------------------------------------
*
* @file  Browser.h
* @author Audrey Pino
* Assignment:   EECS-268 Lab 5
* @brief Header File for Browser class. Lists member methods. Class is a basic framework designed to mimic the functions of a browser's history function via LinkedList. Inherits from BrowserHistoryInterface.
* @date 10/18/21
*
---------------------------------------------------------------------------- **/
#ifndef BROWSER_H
#define BROWSER_H

#include "BrowserHistoryInterface.h"


class Browser: public BrowserHistoryInterface
{
  public:
       /** CONSTRUCTOR
    * @pre - none
    * @post Browser object is created, member variables initialized.
    */
    Browser();

       /** DESTRUCTOR
    * @pre -
    * @post Browser object is destroyed
    */
    ~Browser();

       /**
    * @pre none
    * @post the browser navigate to the given url
    * @param url, a string representing a URL
    */
    void navigateTo(std::string url);

    /**
    * @pre none
    * @post if possible, the browser navigates forward in the history otherwise it keeps focus
    *         on the current URL
    */
    void forward();

    /**
    * @pre none
    * @post if possible, the browser navigates backwards in the history otherwise it keeps focus
    *         on the current URL
    */
    void back();

    /**
    * @return the current URL
    */
    std::string current() const;

    /**
    * @pre The list being passed in is empty
    * @post The current browser history is copied into the given list
    * @param destination, an empty list of strings
    */
    void copyCurrentHistory(ListInterface<std::string>& destination);

  private:
    LinkedList<std::string> theHistory;
    int currentHistoryIndex;
    std::string currentURL;

};
#endif

