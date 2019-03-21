/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Module 9 programming assignment
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:17:47 PM
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
#include <string.h>
#include "ItemsToPurchase.h"
// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    ItemToPurchase item1;
    ItemToPurchase item2;
    

    printf("Item 1\n");
    printf("Enter the item name: \n");
    //Take user input for the first item
    fgets(item1.itemName,1000, stdin);
    printf("Enter the item price: \n");
    //Take user input for the item price
    scanf("%d", &item1.itemPrice);
    printf("Enter the item quantity: \n");
    //Take user input for the quantity of item 1
    scanf("%d", &item1.itemQuantity);
    getchar();

    fflush(stdout);

    printf("\n");
    printf("Item 2\n");
    printf("Enter the item name: \n");
    //take user input for the second item.
    fgets(item2.itemName,1000, stdin);
    printf("Enter the item price:\n");
    //Take user input for the items price
    scanf("%d", &item2.itemPrice);
    printf("Enter item quantity:\n");
    //Take user input for the items quantity
    scanf("%d", &item2.itemQuantity);
    getchar();
    //part 3
    printf("\n");
    printf("TOTAL COST\n");
    // [item name] [quantity1] @ [item 1 price]
    //[item2 name] [quantity2] @ [item 2 price]
    PrintItemCost(item1);
    PrintItemCost(item2);
    printf("\nTotal: $%d\n", (item1.itemPrice * item1.itemQuantity) +(item2.itemPrice * item2.itemQuantity));


    return 0;
}
// Function Definitions



