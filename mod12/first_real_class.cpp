/*
 * =====================================================================================
 *
 *       Filename:  first_real_class.cpp
 *
 *    Description:  Let change the structure to a class
 *
 *        Version:  1.0
 *        Created:  04/04/2019 08:55:09 AM
 *       Revision:  none
 *    Compiler(C):  gcc first_real_class.cpp -o first_real_class.out -lm
 *  Compiler(C++):  g++ first_real_class.cpp -o first_real_class.out -lm
            Usage:  ./first_real_class.out
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
class Movie
{
    //Only the member has access to 
    // Data members are private
    private:
        string title = ""; 
        int year = 0;

    // Anyone has access to it
    // Member functions are public
    public:
        // "Setters"
        void set_title(string set_title);
        void set_year(int set_year);
        // "Getters"
        string get_title();
        int get_year();



}; //End of movie classe
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    // Create an "object"
    Movie movie;   //create an "instance" of this class Movie
    // set your value
    //movie.title = "Batman";   //illegal because we have no direct access
    movie.set_title("Batman");
    movie.set_year(2009);

    cout << "MOVIE DATA" << endl
        << "Title: " << movie.get_title() << endl
        << "Year: " << movie.get_year() << endl;



    return 0;
}
// Function Definitions
void Movie::set_title(string set_title)
{
    title = set_title;
    return;
}

void Movie::set_year(int set_year)
{
    if (set_year < 1988)
    {
        throw invalid_argument ("Year must be 1988 or later.");
    }

    year = set_year;
    return;
}
//define your getters
string Movie::get_title()
{
    return title;
}
int Movie::get_year()
{
    return year;
}
