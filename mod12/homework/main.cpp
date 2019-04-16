/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2019 09:49:13 AM
 *       Revision:  none
 *    Compiler(C):  gcc main.cpp -o main.out -lm
 *  Compiler(C++):  g++ main.cpp -o main.out -lm
            Usage:  ./main.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include <iomanip>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

// Main Function
int main()
{
    int i;
    const int NUM_ITEMS = 2;
    string name;
    string name1;
    string name2;

    int price;
    int price1;
    int price2;
    int quantity;
    int quantity1;
    int quantity2;
    //int total;
    ItemToPurchase item1;
    ItemToPurchase item2;

    for (i = 0; i < NUM_ITEMS; ++i) 
    {
        cout << "Item " << i + 1 << endl;
        cout << "Enter the item name:" << endl;
        //cin.ignore(1000, '\n');
        getline(cin, name);
        if(i < 1)
        {
            name1 = name;
        }

        if(i > 0)
        {
            name2 = name;
        }




        cout << "Enter the item price:" << endl;
        cin >> price;
        if(i < 1)
        {
            price1 = price;
        }
        if(i > 0)
        {
            price2 = price;
        }

        //cout << price1;
        //cout << price2;
        //cout << endl;

        cout << "Enter the item quantity:" << endl;
        cin >> quantity;
        if(i < 1)
        {
            quantity1 = quantity;
        }

        if(i > 0)
        {
            quantity2 = quantity;
        }

        cout << endl;


        // Set the Object values for 1

        // Set the Object values for 2



        cin.ignore();
    }

    // Calculate the total

    // Print Total
    cout << "TOTAL COST" << endl;
    //item1.Print();
    cout << name1 << " " << quantity1 << " @ $" << price1 << "= $" << quantity1 * price1 << endl;
  
    //item2.Print();
    cout << name2 << " " << quantity2 << " @ $" << price2 << " = $" << quantity2 * price2 << endl;

    cout << endl;
    cout << "Total: $" << quantity1 * price1 + quantity2 * price2 << endl;


    return 0;
}
