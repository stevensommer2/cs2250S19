/*
 * =====================================================================================
 *
 *       Filename:  movie.h
 *
 *    Description:  Movie class declaration
 *
 *        Version:  1.0
 *        Created:  04/04/2019 09:38:12 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  MOVIE__INC__
#define  MOVIE__INC__

#include <iostream>
#include <string>
using namespace std;

class Movie
{
    // Only the member has access to  data members are private
    private:
        string title;
        int year;
        int stars;
        string to_upper(string);
   // Anyone has access to it. Member functions are public
    public:
        // Constructors
        Movie(string title = "", int year = 1988, int stars = 0);
        // Destructor
        ~Movie();
        // "Setters"
        void set_title(string set_title);
        void set_year(int year);
        void set_stars(int stars);
        // "Getters"
        string get_title() const;
        int get_year() const;
        int get_stars() const;
        // Others
        void info() const;
        bool iequals(const Movie&);
}; // end of Movie class

#endif /* ----- #ifndef MOVIE__INC__ ----- */
