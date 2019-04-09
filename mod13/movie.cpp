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
//For C++ code
#include <iostream>
#include <iomanip>
#include "movie.h"
using namespace std;


//Default constructors
Movie::Movie()
{
    title = "Nada";
    year = 1888;
    
}

//print info
Movie::Movie(string title, int year)
{
    set_title(title);
    set_year(year);
}

//Destructor
Movie::~Movie()
{
    cout << "Destroying Object" << endl;
}

Movie::Movie(string title)
{
    set_title(title);
    set_year(1888);
    stars = 0;
}



void Movie::info()const
{
    int w = 10;
    cout << left
        << setw(w*3) << "TITLE"
        << setw(w) << "Year" << endl;
    cout << setw(w*3) << get_title()
        << setw(w) << get_year() << endl;
}



// Function Prototypes

void Movie::set_stars(int stars)
{
    this->stars = stars;
}

void Movie::set_title(string set_title)
{
    //this-> = set_title; // optional because the names differ
    title = set_title;
}

void Movie::set_year(int year)
{
    if (year < 1988)
    {
        throw invalid_argument ("Year must be 1988 or later.");
    }

    //This -> regers to yourself
    this->year = year;
}
//define your getters
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



