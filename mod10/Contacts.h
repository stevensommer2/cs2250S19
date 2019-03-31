/*
 * =====================================================================================
 *
 *       Filename:  contacts.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2019 01:34:38 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Sommer(), Stevensommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTS__INC__
#define  CONTACTS__INC__
#define NUM = 3
#include <string.h>
typedef struct ContactNode//is this the header node?
{
     char contactName[50];
     char contactPhoneNum[50];
     struct ContactNode* nextNodePtr;
}ContactNode;


ContactNode CreateContactNode(struct ContactNode* contact, char name[], char number[], ContactNode* address);
void InsertContactAfter(ContactNode* contact, ContactNode* nextcontact);
ContactNode* GetNextContact(ContactNode* contact);
void PrintContactNode(const ContactNode* contact);

#endif /* ----- #ifndef CONTACTS__INC__ ----- */





