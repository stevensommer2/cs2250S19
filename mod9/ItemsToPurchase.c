/*
 * =====================================================================================
 *
 *       Filename:  ItemsToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:36:23 PM
 *       Revision:  none
 *       Compiler:  gcc ItemsToPurchase.c -o ItemsToPurchase.out -lm
            Usage:  ./ItemsToPurchase.out
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

    void MakeItemBlank(struct ItemToPurchase* item)
    {
        strcpy(item->itemName, "none");
        item->itemPrice = 0;
        item->itemQuantity = 0;
        return;
    }

    void PrintItemCost(struct ItemToPurchase item)
    {
        for(int i = 0; item.itemName[i] != '\n'; i++)
        {
            printf("%c", item.itemName[i]);
        }
        printf(" %d @ %d = $%d\n", item.itemQuantity, item.itemPrice,
                (item.itemPrice *item.itemQuantity));
        return;
    }

// Function Definitions


