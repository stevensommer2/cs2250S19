/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2019 10:39:27 AM
 *       Revision:  none
 *    Compiler(C):  gcc ShoppingCart.cpp -o ShoppingCart.out -lm
 *  Compiler(C++):  g++ ShoppingCart.cpp -o ShoppingCart.out -lm
            Usage:  ./ShoppingCart.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//For C++ code
#include <iostream>
using namespace std;
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
#include "ShoppingCart.h"
#include "ItemToPurchase.h"


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  initializing ShoppingCart
 *  Description:  set the objects within the private of Shopping Cart
 * =====================================================================================
 */
ShoppingCart::ShoppingCart(string CustomerName, string CurrentDate)
{
    SetName(CustomerName);
    SetDate(CurrentDate);
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Giving ShoppingCart values
 *  Description:  set each object a value
 * =====================================================================================
 */
ShoppingCart::ShoppingCart()
{
    SetName("None");
    SetDate("February 1, 2016");
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Destroyer
 *  Description:  the destructor of ShoppingCart
 * =====================================================================================
 */
ShoppingCart::~ShoppingCart()
{}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetName
 *  Description:  
 * =====================================================================================
 */
void ShoppingCart::SetName(string name)
{
    this->CustomerName = name;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetCustomerName
 *  Description:  
 * =====================================================================================
 */
string ShoppingCart::GetCustomerName() const
{
    return CustomerName;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetDate
 *  Description:  
 * =====================================================================================
 */
void ShoppingCart::SetDate(string date)
{
    this->CurrentDate = date;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetDate
 *  Description:  
 * =====================================================================================
 */
string ShoppingCart::GetDate() const
{
    return CurrentDate;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetVector (ItemToPurchase)
 *  Description:  
 * =====================================================================================
 */
vector<ItemToPurchase>ShoppingCart::GetVector()const
{
    return CartItems;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddItem
 *  Description:  
 * =====================================================================================
 */
void ShoppingCart::AddItem(ItemToPurchase NewItem)
{
    CartItems.push_back(NewItem);
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  RemoveItem
 *  Description:  
 * =====================================================================================
 */
void ShoppingCart::RemoveItem(string item)
{
    int flag = -1;
    for(unsigned int i = 0; i < CartItems.size(); i++)
    {
        if(CartItems.at(i).GetName()==item)
        {
            CartItems.erase(CartItems.begin( )+1);
            flag++;
        }
    }
    if(flag == -1)
    {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  checkduplicate
 *  Description:  
 * =====================================================================================
 */
bool ShoppingCart::CheckDuplicate(string name) const
{
    return 0;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ModifyItem
 *  Description:  
 * =====================================================================================
 */
void ShoppingCart::ModifyItem(string item)
{
    int newVal = 0;
    int flag = 1;
    cout << "Enter the new quantity:" << endl;
    cin >> newVal;
    for(unsigned int i =0; i < CartItems.size(); i++)
    {
        if(CartItems.at(i).GetName() == item)
        {
            CartItems.at(i).SetQuantity(newVal);
        }
    }
    for(unsigned int i = 0; i < CartItems.size(); i++)
    {
        if(CartItems.at(i).GetName() == item)
        {
            flag++;
        }
    }
    if(flag == 1)
    {
        cout << "Item not found in cart. Nothing modified." << endl << endl;
    }
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumItemsInCart
 *  Description:  
 * =====================================================================================
 */
int ShoppingCart::GetNumItemsInCart() const
{
    unsigned int totalCost = 0;
    for(ItemToPurchase ItemToPurchase : CartItems)
    {
        totalCost = totalCost + ItemToPurchase.GetQuantity();
    }
    return totalCost;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetCostOfCart
 *  Description:  
 * =====================================================================================
 */
int ShoppingCart::GetCostOfCart() const
{
    unsigned int totalCost = 0;
    for(ItemToPurchase ItemToPurchase : CartItems)
    {
        totalCost = totalCost + (ItemToPurchase.GetPrice() * ItemToPurchase.GetQuantity());

    }
    return totalCost;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintTotal
 *  Description:  
 * =====================================================================================
 */
void ShoppingCart::PrintTotal()const
{
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl
         << "Number of items: " << GetNumItemsInCart() << endl << endl;
    for(unsigned int i = 0; i < CartItems.size(); i++)
    {
        PrintItemTotal(CartItems.at(i));
    }
    if(GetNumItemsInCart() == 0)
    {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
    cout << endl << "Total: $" << GetCostOfCart() << endl << endl;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintDescriptions()
 *  Description:  
 * =====================================================================================
 */
void ShoppingCart::PrintDescription()const
{
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl << endl
         << "Item Descriptions" << endl;
    for(unsigned int i = 0; i < CartItems.size(); i++)
    {
        cout << CartItems.at(i).GetName() << ": " << CartItems.at(i).GetDescription();
    }
    cout << endl;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemTotal
 *  Description:  
 * =====================================================================================
 */
void ShoppingCart::PrintItemTotal(ItemToPurchase item)const
{
    cout << item.GetName() << " " << item.GetQuantity() << " @ $" <<item.GetPrice()
         << " =$" << item.GetQuantity() * item.GetPrice() << endl;
}
