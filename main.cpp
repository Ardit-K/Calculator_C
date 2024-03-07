#include <iostream>
#include "parse.h"
#include <string>
using namespace std;

/*
File: main.cpp
Author: Ardit Koti
Description: This is the main entry point for the calculator program.
It handles operation calls and I/O.
*/
int main(){
    cout << "Welcome to Ardit Koti's calculator app! " << endl;
    cout << endl << "Enter any number, followed by an operation of +, -, *, or /" <<
    " and another number to get a result." << endl;
    cout << "Enter <end> to exit program. " << endl;
    // Take user input
    string input;
    cin >> input;
    while(input != "end"){
        try{
        vector<char *> args = parse_string(input);
        for(int i = 0; i < size(args); i++){
            cout << args[i] << endl;
        }
        }catch(char const* s){
            cout << s << endl;
        }
        cin >> input;
    }
    cout << "Exiting Calculator Program..." << endl;
    return 0;
}