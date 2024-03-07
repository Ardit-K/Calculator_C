#include "parse.h"
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

vector<char *> parse_string(string input){
    vector<char*> v;
    if(input.empty()){
        throw "Please enter something...";
    }
    else{
        char* ptr = strtok((char *) input.c_str(), " ");
        while(ptr != nullptr){
            v.push_back(ptr);
            ptr = strtok(nullptr, " ");
        }
        return v;
    }
}
