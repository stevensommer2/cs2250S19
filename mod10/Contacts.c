

/*
 * =====================================================================================
 *
 *       Filename:  contacts.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2019 03/18/19 PM
 *       Revision:  none
 *       Compiler:  gcc contacts.c -o contacts.out
 *          Usage:  ./contacts.out
 *
 *         Author:  Steven Sommer(), Stevensommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "Contacts.h"
// Constants

// Function Definitions

ContactNode CreateContactNode(struct ContactNode* contact, char name[50], char number[50], ContactNode* address)
{
    
strcpy(contact->contactName, name);
strcpy(contact->contactPhoneNum, number);
contact->nextNodePtr=address;

        return *contact;
}
void InsertContactAfter(ContactNode* contact, ContactNode* nextcontact)
{
    ContactNode* tmpNext = NULL;
    tmpNext = contact->nextNodePtr;
    contact->nextNodePtr = nextcontact;
    nextcontact->nextNodePtr = tmpNext;
    return;
}
ContactNode* GetNextContact(ContactNode* contact)
{
     return contact->nextNodePtr;
}
void PrintContactNode(const ContactNode* contact)
{
    printf("Name: %s\n", contact->contactName); //may need to fix how this handles the new lines
    printf("Phone number: %s\n\n", contact->contactPhoneNum);//same as above
    return;
}


