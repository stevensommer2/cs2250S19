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
#include <string>
#include <iostream>
using namespace std;

class Movie
{
    //Only the member has access to 
    // Data members are private
    private:
        string title; 
        int year = 0;
        int stars;

    // Anyone has access to it
    // Member functions are public
    public:
        // Constructors
        Movie();      //Default
        // Another constructor
        // Movie(string title = "", int year);
        Movie(string title, int year);
        //Movie(string title);
       
        ~Movie();


        // "Setters"
        void set_title(string set_title);
        void set_year(int set_year);
        void set_stars(int stars);
        // "Getters"
        string get_title() const;
        int get_year() const;
        //void info() const;
        int get_stars() const;


}; //End of movie classe

#endif /* ----- #ifndef MOVIE__INC__ ----- */

