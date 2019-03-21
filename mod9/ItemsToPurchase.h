/*
 * =====================================================================================
 *
 *       Filename:  ItemsToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:35:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMSTOPURCHASE__INC__
#define  ITEMSTOPURCHASE__INC__
#include <strings.h>


typedef struct ItemToPurchase
{
char itemName[2000];
int itemPrice;
int itemQuantity;
int itemNumber;
}ItemToPurchase;

void PrintItemCost(struct ItemToPurchase item);
void MakeItemBlank(struct ItemToPurchase* item);

#endif /* ----- #ifndef ITEMSTOPURCHASE__INC__ ----- */

