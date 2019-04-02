/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  First hello world in C++
 *
 *        Version:  1.0
 *        Created:  04/02/2019 08:49:13 AM
 *       Revision:  none
 *    Compiler(C):  gcc hello.cpp -o hello.out -lm
 *  Compiler(C++):  g++ hello.cpp -o hello.out -lm
            Usage:  ./hello.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//For C code
//#include <stdio.h>
//#include <stdlib.h>

//For C++ code
#include <iostream>
using namespace std;

// Constants and globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int num;
    // Print out
    // for output use cout
    cout << "Hello C++" << endl;
    cout << "Enter a number: " << endl;
    //for input use cin
    cin >> num;
    cout << "You entered: " << num << " watermelons" << endl;




    return 0;
}
// Function Definitions


