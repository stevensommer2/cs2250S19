/*
 * =====================================================================================
 *
 *       Filename:  seats.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/14/2019 09:09:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SEATS__INC__
#define  SEATS__INC__

#include <string.h>
#include <stdbool.h>

typedef struct Seat_struct 
{
    char firstName[50];
    char lastName[50];
    int  amountPaid;
} Seat;

//* means a pointer(?) what is a pointer?
void SeatMakeEmpty(Seat* seat); //pass by address meaning an address
bool SeatIsEmpty(Seat seat); //pass by value meaning stored locally
void SeatPrint(Seat seat);
// wants address of the entire array whereas previous only wanted one 
// member of the array
void SeatsMakeEmpty(Seat seats[], int numSeats); 
void SeatsPrint(Seat seats[], int numSeats);
char SeatsMenu();
#endif /* ----- #ifndef SEATS__INC__ ----- */

