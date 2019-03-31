/*
 * =====================================================================================
 *
 *       Filename:  contacts.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2019 09:02:11 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTS__INC__
#define  CONTACTS__INC__


typedef struct Contacts
{
    char contactName[50];
    char contactPhone[50];

}Contacts;

//Function Prototypes
void CreateContact(Contacts* con);



#endif



