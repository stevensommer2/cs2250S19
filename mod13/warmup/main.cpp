/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/21/2019 07:57:43 PM
 *       Revision:  none
 *    Compiler(C):  gcc main.cpp -o main.out -lm
 *  Compiler(C++):  g++ main.cpp -o main.out -lm
            Usage:  ./main.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#include <iostream>
#include <iomanip>
#include "ContactNode.h"
using namespace std;

// Main Program
int main() 
{
    string fullName;
    string phoneNum;
    ContactNode* headContact = 0;  // set pointer to "NULL" or 0
    ContactNode* nextContact1 = 0;
    ContactNode* nextContact2 = 0;
    ContactNode* currContact = 0;

    // Get first person
    cout << "Person 1" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", " << phoneNum << endl << endl;
    headContact = new ContactNode(fullName, phoneNum, 0);
    //First contact node (head of heap)
    // use dynamically allocated memory here
    // ... 
    
    // Get second person
    cin.ignore();
    cout << "Person 2" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", " << phoneNum << endl << endl;
    nextContact1 = new ContactNode(fullName, phoneNum, 0);
    // Create a new contact here with "new" 
    // Use the insertAfter to conect the two nodes
    // Get third person
    
    cin.ignore();
    cout << "Person 3" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", " << phoneNum << endl << endl;
    nextContact2 = new ContactNode(fullName, phoneNum, 0);

    headContact->InsertAfter(nextContact1);
    nextContact1->InsertAfter(nextContact2);

    cout << "CONTACT LIST" << endl; 
    // Loop over contacts
    currContact=headContact;
    while (currContact != 0) 
    {
        currContact->PrintContactNode();
        currContact = currContact->GetNext();
        cout << endl;
    }

    return 0;
}


