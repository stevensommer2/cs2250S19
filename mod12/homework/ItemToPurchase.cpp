/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  :
 *
 *        Version:  1.0
 *        Created:  04/11/2019 09:49:13 AM
 *       Revision:  none
 *    Compiler(C):  gcc ItemToPurchase.cpp -o ItemToPurchase.out -lm
 *  Compiler(C++):  g++ ItemToPurchase.cpp -o ItemToPurchase.out -lm
            Usage:  ./ItemToPurchase.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
using namespace std;
#include "ItemToPurchase.h"


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ItemToPurchase
 *  Description:  Constructor for Item to purchase. 
 *  Set itemName = "none"
 *  itemPrice = 0, and itemQuantity = 0
 * =====================================================================================
 */
ItemToPurchase::ItemToPurchase(string name, string description, int itemPrice, int itemQuantity)
{
    SetName(name);
    SetPrice(itemPrice);
    SetDescription(description);
    SetQuantity(itemQuantity);
}

ItemToPurchase::ItemToPurchase()
{
    SetName("none");
    SetDescription("none");
    SetPrice(0);
    SetQuantity(0);
}





/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetName
 *  Description:  Set the name variable
 * =====================================================================================
 */

void ItemToPurchase::SetName(string name)
{
    this->itemName = name;

}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetPrice
 *  Description:  Set the Purchase price
 * =====================================================================================
 */

void ItemToPurchase::SetPrice(int price)
{
    this->itemPrice = price;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetQuantity
 *  Description:  Set the item quantity 
 * =====================================================================================
 */


void ItemToPurchase::SetQuantity(int quantity)
{
    this->itemQuantity = quantity;

}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetDescription
 *  Description:  
 * =====================================================================================
 */
void ItemToPurchase::SetDescription(string description) 
{
    this->description=description;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetName
 *  Description:  Get the name variable
 * =====================================================================================
 */

string ItemToPurchase::GetName() const
{
    return itemName;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetPrice
 *  Description:  Get the Purchase price
 * =====================================================================================
 */
int ItemToPurchase::GetPrice() const
{
    return itemPrice;
}




/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetQuantity
 *  Description:  Get the item quantity 
 * =====================================================================================
 */

int ItemToPurchase::GetQuantity() const
{
    return itemQuantity;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetDescription
 *  Description:  
 * =====================================================================================
 */
string ItemToPurchase::GetDescription()const
{
    return description;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Print
 *  Description:  Print Item Purchased
 * =====================================================================================
 */
void ItemToPurchase::Print() 
{
    cout << itemName << " " << itemQuantity << " @ $"
        << itemPrice << " = $" << GetPrice() * GetQuantity() << endl;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemCost
 *  Description:  
 * =====================================================================================
 */
void ItemToPurchase::PrintItemCost() const
{
    cout << GetName() << " " << GetQuantity() << " @ $" << GetPrice()
         << " = $" << GetQuantity() * GetPrice() << endl;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemDescription
 *  Description:  
 * =====================================================================================
 */
void ItemToPurchase::PrintItemDescription()const
{
    cout << GetDescription();
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Destroyer
 *  Description:  
 * =====================================================================================
 */
ItemToPurchase::~ItemToPurchase() {}


