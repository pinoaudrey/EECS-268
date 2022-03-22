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
using namespace std;

int outbreak(int n){
    if(n <= 0){
        return(false);
    }
    else if(n == 1){
        return(1);
    }
    else if(n == 2){
        return(8);
    }
    else if(n == 3){
        return(22);
    }
    else{
        return(outbreak(n-1) + outbreak(n-2) + outbreak(n-3));
    }
}
int main(){
    int n;
    cout << "OUTBREAK!\n";
    cout << "What day do you want a sick count for ?: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid day.\n";
    }
    else{
    cout << "Total people with flu: " << outbreak(n) << '\n';
    }
}

