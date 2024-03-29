#include "operations.h"

/*
File: operations.cpp
Author: Ardit Koti
Description: Implementation of calculator operations.
*/

double add(double n1, double n2){
    return static_cast<double>(n1 + n2);
}

double subtract(double n1, double n2){
    return static_cast<double>(n1 - n2);
}

double multiply(double n1, double n2){
    return static_cast<double>(n1 * n2);
}

double divide(double n1, double n2){
    return static_cast<double>(n1 / n2);
}