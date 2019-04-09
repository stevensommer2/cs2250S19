/*
 * =====================================================================================
 *
 *       Filename:  next_movie.cpp
 *
 *    Description:  Continue to use the Movie library
 *
 *        Version:  1.0
 *        Created:  04/09/2019 08:40:19 AM
 *       Revision:  none
 *    Compiler(C):  gcc next_movie.cpp -o next_movie.out -lm
 *  Compiler(C++):  g++ next_movie.cpp -o next_movie.out -lm
            Usage:  ./next_movie.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
using namespace std;
#include "Movie.h"

// Main Function
int main(int argc, char* argv[])
{
    // Create object with default values
    Movie m1;
    m1.info();
    // Create object with some values
    Movie m2("Rambo", 1991, 5);
    m2.info();
    // Create object with one set value, and a default value
    Movie m3("Superman", 1987, 3);
    m3.info();

    return 0;
}
// Function Defenitions
