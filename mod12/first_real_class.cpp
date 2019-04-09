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
//For C++ code
#include <iostream>
#include <iomanip> //more cout options
#include <string>
#include <vector>
#include "movie.h"
using namespace std;

// Constants and globals
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    cout << "The movie list Program" << endl << endl
         << "Enter a movie..." << endl << endl;
    // get movies from the user
    // Movie movies[10];  // an aray of 10 movies. (fixed)
    vector<Movie> movies; // define vector of movies. Grow on demand.
    char another = 'y';
    // loop for entries
    while(tolower(another) == 'y')
    {
        Movie movie;
        string title;
        int year;
        // get user input
        cout << "Title: ";  //get title
        getline(cin, title);
        movie.set_title(title);
        cout << "Year: ";  // get year
        cin >> year;
        movie.set_year(year);
        // Add it to the vector
        movies.push_back(movie);

        
        cout << endl << "Enter another movie? (y|n): ";
        cin >> another;
        cin.ignore(); // ignore anything else in the buffer
        cout << endl;
    }//End of while loop

    //Display movie
    const int w = 10;
    cout << left
        << setw(w*3) << "TITLE"
        << setw(w) << "Year" << endl;
    for(Movie movie : movies)  //looping over vector
    {
    cout << setw(w*3) << movie.get_title()
        << setw(w) << movie.get_year() << endl;
    }
    cout << endl;
    return 0;
}
