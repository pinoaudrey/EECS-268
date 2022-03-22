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
#include <string>

bool parenthesisChecker(std::string sequence, int count, int location, int length){
    if (count < 0){
        return (false);
    }
    else if (location == length && count == 0){
        return (true);
    }
    else if (location == length && count != 0){
        return (false);
    }
    else if (sequence.at(location) == '('){
        count++;
        return(parenthesisChecker(sequence, count, location+1, length));
    }
    else if (sequence.at(location) == ')'){
        count--;
        return(parenthesisChecker(sequence, count, location+1, length));
    }
    else{
        throw(std::runtime_error("Entry must only consist of parenthesis.\n"));
    }
}

int main(int argc, char** argv){
    std::string sequence;
    int length;
    if(argc>1){
        sequence = argv[1];
        if(sequence.empty() == false){
            length = sequence.length();
            
            if(sequence.at(0) == '(' && sequence.at(length - 1) == ')'){
                try{
                    if(parenthesisChecker(sequence, 0, 0, length) == true){
                        std::cout<<"The sequence "<< sequence <<" is balanced.\n";
                    }
                    else{
                        std::cout<<"The sequence "<< sequence <<" is not balanced.\n";
                    }
                }
                catch(std::exception& e){
                        std::cout << e.what();
                }
            }
            else if(sequence.at(0) == ')' || sequence.at(length - 1) == '('){
                std::cout<<"The sequence "<< sequence <<" is not balanced.\n";
            }
            else{
                throw(std::runtime_error("Entry must only consist of parenthesis.\n"));
            }
        }
        else{
            std::cout << "Your entry is empty.\n";
        }
    }
    else{
        std::cout << "Incorrect number of parameters!\n";
    }
}

