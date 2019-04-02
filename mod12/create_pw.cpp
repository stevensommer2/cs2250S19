/*
 * =====================================================================================
 *
 *       Filename:  create_pw.cpp
 *
 *    Description:  Create a password, and validate it:
 *                  At least 8 characters
 *                  At least 1 number
 *                  Must include 1 char
 *
 *        Version:  1.0
 *        Created:  04/02/2019 09:28:09 AM
 *       Revision:  none
 *    Compiler(C):  gcc create_pw.cpp -o create_pw.out -lm
 *  Compiler(C++):  g++ create_pw.cpp -o create_pw.out -lm
            Usage:  ./create_pw.out
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
#include <string>  //to handle strings
using namespace std;

// Constants and globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    string full_name;
    cout << "Create an account" << endl << endl;

    //take input
    cout << "Enter full name: ";
    //to capture strings with or without spaces use: getline(cin, <string>)
    getline(cin, full_name);
    cout << "Hi " << full_name << " welcome to WSU branch" << endl;

    //work on the password
    string password;
    bool valid_password = false;
    while(!valid_password)
    {
        valid_password = true;
        cout << "Enter your password: ";
        getline(cin, password);
        //at least 8 chars
        if(password.length() < 8)
        {
            cout << "Password must be at least 8 characters." << endl; 
            valid_password = false;
        }
        //must contain one number char 
        auto index = password.find_first_of("0123456789");
        if(index = -1)
        {
            cout << "Password must include a number" << endl;
            valid_password = false;
        }
        //must contain one special char
        bool special_char = false;
        for(char c : password)  // : means "in"
        {
            if(ispunct(c)) //check for any special characters
                 {
                    special_char = true;
                    break; //Exit the loop over the password string
                 }

        }
        if(!special_char)
        {
            cout << "Password must include a special character" << endl;
            valid_password = false;
        }
        //display the bad password
        if(!valid_password)
        {
            cout << password << " is invalid" << endl;
            cout << "Please try again" << endl;
         }


    }//end of while

    cout << "Thank you" << endl;
    return 0;
}
// Function Definitions


