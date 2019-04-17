/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2019 10:39:27 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART__INC__
#include <vector>
#include "ItemToPurchase.h"

class ShoppingCart
{
    private:
        string CustomerName;
        string CurrentDate;
        vector<ItemToPurchase>CartItems;
    public:
        ShoppingCart(string CustomerName, string CurrentDate);
        ShoppingCart();
        ~ShoppingCart();
        void AddItem(ItemToPurchase NewItem);
        void RemoveItem(string item);
        void ModifyItem(string item);
        void SetName(string name);
        string GetCustomerName() const;
        string GetDate() const;
        vector<ItemToPurchase>GetVector() const;
        void SetDate(string date);
        int GetNumItemsInCart() const;
        int GetCostOfCart() const;
        void PrintTotal() const;
        void PrintDescription()const;
        void PrintItemTotal(ItemToPurchase item) const;
        bool CheckDuplicate(string name) const;
};




#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

