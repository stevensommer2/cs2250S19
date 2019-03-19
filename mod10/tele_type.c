/*
 * =====================================================================================
 *
 *       Filename:  tele_type.c
 *
 *    Description:  First look into LinkedList
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:03:27 AM
 *       Revision:  none
 *       Compiler:  gcc tele_type.c -o tele_type.out -lm
            Usage:  ./tele_type.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
#define MAXNAME 30
#define MAXPHONE 15
/*          These are called Linked Lists because the lists are
 *          being linked by addresses of eachother (what is 
 *          defined within the code                     */

struct TeleType
{
    char name[MAXNAME];
    char phoneNum[MAXPHONE];
    struct TeleType* nextaddr;  //"should" be the last member of structure

};
typedef struct TeleType Tele;
// Function Prototypes
void DisplayTele(Tele* content);
// Main Function
int main(int argc, char* argv[])
{
    Tele t1 = {"Acme, Junio", "(801) 891-2344"};
    Tele t2 = {"Smith, John", "(801) 497-6873"};
    Tele t3 = {"Castroff, Amanda", "(801) 657-3412"};
    Tele* first;   // pointer to structure address

    first = &t1;  //get the address of a tele structure
    t1.nextaddr = &t2; //set the address of the nest structure
    t2.nextaddr = &t3; //set the address of the next structure
    t3.nextaddr = NULL; //set the address of NULL, last member

    DisplayTele(first);


    return 0;
}
// Function Definitions


void DisplayTele(Tele* content)
{
    while(content != NULL)
    {
    printf("%-30s %-20s\n", content->name, content->phoneNum);
    content = content->nextaddr;
    }
    return;
}
