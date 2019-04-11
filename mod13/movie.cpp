/*
 * =====================================================================================
 *
 *       Filename:  movie.cpp
 *
 *    Description:  movie class
 *
 *        Version:  1.0
 *        Created:  04/04/2019 09:37:59 AM
 *       Revision:  none
 *    Compiler(C):  gcc movie.cpp -o movie.out -lm
 *  Compiler(C++):  g++ movie.cpp -o movie.out -lm
            Usage:  ./movie.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

// For C++ Code
#include <iostream>
#include <iomanip>  // more cout options
#include "movie.h"
using namespace std;

Movie::Movie(string title, int year, int stars)
{
    set_title(title);
    set_year(year);
    set_stars(stars);
}

// Destructor
Movie::~Movie()
{
//    cout << "Destroying Object" << endl;
}

// Print info
void Movie::info()const
{
    int w = 10;
    cout << left
        << setw(w*3) << "TITLE"
        << setw(w) << "YEAR" << endl;
    cout << setw(w*3) << get_title()
        << setw(w) << get_year() << endl;
}
// Function Definitions
void Movie::set_title(string set_title)
{
//    this->title = set_title;  // optional
    title = set_title;
}

void Movie::set_year(int year)
{
    if (year < 1888)
    {
        throw invalid_argument("Year must be 1888 or later.");
    }
    // this-> refers to yourself
    // required because of the same name
    this->year = year;
}

void Movie::set_stars(int stars)
{
    // this-> refers to yourself
    // required because of the same name
    this->stars = stars;
}

// Define Getters
string Movie::get_title() const
{
    return title;
}
        
int Movie::get_year() const
{
    return year;
}

int Movie::get_stars() const
{
    return stars;
}

bool Movie::iequals(const Movie& to_compare) 
{
    return (to_upper(title) == to_upper(to_compare.title) &&
            year == to_compare.year);
}

// private function
string Movie::to_upper(string str) 
{
    string str_upper;
    for (char c : str) 
    {
        str_upper.push_back(toupper(c));
    }
    return str_upper;
}
