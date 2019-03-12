/*
 * =====================================================================================
 *
 *       Filename:  date_struct_better.c
 *
 *    Description:  Use a better way to define structures
 *
 *        Version:  1.0
 *        Created:  03/12/2019 08:54:16 AM
 *       Revision:  none
 *       Compiler:  gcc date_struct_better.c -o date_struct_better.out -lm
            Usage:  ./date_struct_better.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


// Constants & global
typedef struct Date
{
    int month;
    int day;
    int year;
}Date;     // this is the provided nick name of the structure



// Function Prototypes
void Hello_Date(Date d1);   // Make sure you define the structure before
                            // You call it

// Main Function
int main(int argc, char* argv[])
{
    Date d1;
    d1.month =12;
    d1.day = 23;
    d1.year = 2018;
    Hello_Date(d1);
    return 0;
}
// Function Definitions
//

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_date
 *  Description:  Print the Date structure
 *        PARAM:  Date d1. Param passed by value
 * =====================================================================================
 */
void Hello_Date(Date d1)
{
    printf("D1 month %d, day %d, year %d\n",
            d1.month, d1.day, d1.year % 100);
    return;
}



