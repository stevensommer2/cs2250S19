/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2019 08:43:53 PM
 *       Revision:  none
 *       Compiler:  gcc main.c -o main.out -lm
            Usage:  ./main.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "ShoppingCart.h"




// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    ShoppingCart customer;
    printf("Enter Customer's Name:\n");
    scanf("%[^\n]", customer.customerName);
    fflush(stdin);
    getchar();

    printf("Enter Today's Date:\n");
    scanf("%[^\n]", customer.currentDate);
    fflush(stdin);
    getchar();
    printf("\nCustomer Name: %s\n", customer.customerName);
    printf("Today's Date: %s\n", customer.currentDate);
    PrintMenu(customer);
    fflush(stdin);
    getchar();

    return 0;
}
// Function Definitions


