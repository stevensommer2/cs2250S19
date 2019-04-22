/*
 * =====================================================================================
 *
 *       Filename:  ContactNode.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/21/2019 07:57:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTNODE__INC__
#define  CONTACTNODE__INC__

#include <string>
using namespace std;

class ContactNode 
{
    private:
        string contactName;
        string contactPhoneNum;
        ContactNode* nextNodePtr;   // pointer to next object

    public:
        // Default Constructor
        ContactNode();
        // Parameter based Constructor
        ContactNode(string initName, string initPhoneNum, ContactNode* nextLoc = 0);
        // Getters
        string GetName() const;
        string GetPhoneNumber() const;
        // Other methods
        ContactNode* GetNext();
        void InsertAfter(ContactNode* nodePtr);
        void PrintContactNode();
};

#endif

