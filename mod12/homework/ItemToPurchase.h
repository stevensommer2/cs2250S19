/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2019 09:49:13 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE__INC__
#include <string>
using namespace std;

class ItemToPurchase 
{
    private:
        string itemName;
        int itemPrice;
        int itemQuantity;

    public:
        ItemToPurchase();
        // Setters here 
        void SetName(string name);
        void SetPrice(int price);
        void SetQuantity(int quantity);
        // Getters here. Remember to make them const
        string GetName() const;
        int GetPrice() const;
        int GetQuantity() const;
        // Other Methods
        void Print();
};

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */
