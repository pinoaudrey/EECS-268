/** -----------------------------------------------------------------------------
 *
 * @file  Browser.h
 * @author Audrey Pino 
 * Assignment:   EECS-268 Lab 6
 * @brief Header File for fibonacci class. Lists member methods. 
 * @date 10/25/21
 *
 ---------------------------------------------------------------------------- **/
#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <stdexcept>

class fibonacci
{
public:
  /**
  * @pre The i is ith entry i want to get.
  * @post will return the value in ith term
  * @return ith entry to the user.
  * @throw when user give me negative number, i will throw error
  **/
  int getFibonacci(int i);

  /**
  * @pre The i is the count of which round i am in, test is the number
  * @user give me to find from sequence
  * @post will tell if test number is in sequence
  * @return when find test, return true, otherwise return false
  * @throw when user give me negative number, i will throw error
  **/
  bool isFibonacci(int i, int test);
};
#endif

