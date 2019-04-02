/*
 * =====================================================================================
 *
 *       Filename:  years_calc.cpp
 *
 *    Description:  Light year calculator
 *
 *        Version:  1.0
 *        Created:  04/02/2019 09:05:38 AM
 *       Revision:  none
 *    Compiler(C):  gcc years_calc.cpp -o years_calc.out -lm
 *  Compiler(C++):  g++ years_calc.cpp -o years_calc.out -lm
            Usage:  ./years_calc.out
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
#include <iomanip> //for mor input/output options
using namespace std;

// Constants and globals
const double MILES_PER_LIGHT_YEARS = 5.879e+12;
const double KM_PER_LIGHT_YEARS = 9.461e+12;
const double PARSEC_PER_LIGHT_YEAR = 0.306601;

// Main Function
int main(int argc, char* argv[])
{
    double light_years;
    cout << "Light Year Calculator" << endl;
    cout << endl;
    // get input
    cout << "Enter light years: ";
    cin >> light_years;
    // Calculate miles, km, and parsecs
    double miles = light_years * MILES_PER_LIGHT_YEARS;
    double km = light_years * KM_PER_LIGHT_YEARS;
    double parsecs = light_years * PARSEC_PER_LIGHT_YEAR;

    //display the results
    
    cout << endl << setprecision(8) << "SCIENTIFIC NOTATION" << endl
         << "Miles:       " << miles << endl
         << "Kilometers:  " << km << endl
         << "Parsecs:     " << parsecs << endl;
    cout << endl;

    cout << fixed
         << "FIXED NOTATION" << endl
         << "Miles:       " << setw(24) << miles << endl
         << "Kilometers:  " << setw(24) << km << endl
         << "Parsecs:     " << setw(24) << parsecs << endl;

    return 0;
}
// Function Definitions


