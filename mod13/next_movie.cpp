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


//For C++ code
#include <iostream>
using namespace std;
#include "movie.h"

// Constants and globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    // create object with default values
    Movie m1();
    m1.info();

    //create object with some values
    Movie m2("Rambo", 1991);
    m2.info();

    Movie m3("Superman");
    m3.info();


    return 0;
}
// Function Definitions


