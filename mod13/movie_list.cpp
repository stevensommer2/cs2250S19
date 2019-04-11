/*
 * =====================================================================================
 *
 *       Filename:  movie_list.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2019 09:45:18 AM
 *       Revision:  none
 *    Compiler(C):  gcc movie_list.cpp -o movie_list.out -lm
 *  Compiler(C++):  g++ movie_list.cpp -o movie_list.out -lm
            Usage:  ./movie_list.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//For C code
#include <stdio.h>
#include <iomanip>  //pretty output
#include <vector>   //for vectors
#include <string>   //for strings
#include <fstream>  //for file stream
#include <sstream>  //to read strings with spaces
#include <stdlib.h>
#include "movie.h"
using namespace std;

//For C++ code
//#include <iostream>
//using namespace std;

// Constants and globals

// Function Prototypes
void display_menu();
vector<Movie> read_Movies_from_file();

// Main Function
int main(int argc, char* argv[])
{

    cout << "The Movie List program" << endl << endl;
    display_menu();
    vector<Movie> movies = read_movies_from_file();


    return 0;
}
// Function Definitions

vector<Movie> read_Movies_from_file()
{
    vector<Movie> movies;
    // Read file
    ifstream input_file(movie_file);
    if(input_file) // if file opened successfully
    {
        string line;
        while(getline(input_file, line))
        {
            stringstream ss(line);  // read the line and cast it as string
            //Now ready to parse the line
            string title;
            int year, stars;
            getline(ss, title, '\t');  //read title until you get a \t (tab)
            ss >> year >> stars;   //get year and stars
            cout >> title << " " << year << " " << stars << endl
        }

    }
    return movies;
}

void display_menu()
{
    cout << "COMMANDS" << endl
         << "v - View movie list" << endl
         << "a - Add a movie" << endl
         << "d - Delete a movie" << endl
         << "x - Exit" << endl << endl;
}

