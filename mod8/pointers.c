/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 08:36:19 AM
 *       Revision:  none
 *       Compiler:  gcc pointers.c -o pointers.c.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void PrintValues(int num, int* p_num);
// Main Function
int main(int argc, char* argv[])
{
    int i = 7;
    int* pi = &i;   //It can store address of integer variables

    PrintValues(i, &i);
   // printf("Value of i=[%d] address of i=[%p]\n", i, &i);
   // printf("Value of pi=[%p] address of pi=[%pi]\n", pi, &pi);
   // printf("Value of the address of pi=[%d]\n", *pi);
    //modify i
    i *= 2;  //multiplying by two //compound operator
    PrintValues(i, pi);  //use the pointer to the variable.
    *pi = 99;   // use dereference operator to update value at the address
    PrintValues(i, pi);


    return 0;
}
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintValues
 *  Description:  Print the values of an integer and a pointer to integer.
 *      PARAM: num: integer
 *      PARAM: p_num: pointer to integer
 * =====================================================================================
 */

void PrintValues(int num, int* p_num)  {
        
    printf("Value of i=[%d] and pi=[%d]\n", num, *p_num);
   // printf("Value of pi=[%p] address of pi=[%pi]\n", pi, &pi);
   // printf("Value of the address of pi=[%d]\n", *pi);
    return;
}
