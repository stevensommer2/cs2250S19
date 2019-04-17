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
#include "ShoppingCart.h"
using namespace std;

// Main Function
void PrintOptions();
bool validChar(char input);
int main()
{
    char userInput = '-';
    string tempName;
    string tempDate;
    string tempString;
    string tempDescription;
    int tempQuantity;
    int tempPrice;

    cout << "Enter customer's name: " << endl;
    getline(cin, tempName);
    cout << "Enter today's date: " << endl;
    getline(cin, tempDate);
    cout << endl << "Customer name: " << tempName << endl
         << "Today's date: " << tempDate << endl << endl;
    ShoppingCart userCart(tempName, tempDate);
    while(userInput != 'q')
    {
        PrintOptions();
        cin >> userInput;
        while(validChar(userInput) == 0)
        {
            cout << "Choose an option:" << endl;
            cin >> userInput;
        }
        switch(userInput)
        {
            case 'd':
                cout << "REMOVE ITEM FROM CART" << endl
                     << "Enter name of item to remove:" << endl;
                break;
            case 's':
                cout << "ADD ITEM TO CART" << endl
                     << "Enter the item name:" << endl;
                cin.ignore();
                getline(cin, tempDescription);
                cout << "Enter the item price:" << endl;
                cin >> tempPrice;
                cout << "Enter the item quntity:" << endl;
                cin >> tempQuantity;
                cout << endl;
                userCart.AddItem(ItemToPurchase(tempString, tempDescription, tempPrice, tempQuantity));
                cin.ignore();
                break;
            case 'c':
                cout << "CHANGE ITEM QUANTITY" << endl
                     << "Enter the itm name:" << endl;
                cin.ignore();
                getline(cin, tempString);
                userCart.ModifyItem(tempString);
                cin.ignore();
                break;
            case 'i':
                cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
                userCart.PrintDescription();
                cin.ignore();
                break;
            case 'o':
                cout << "OUTPUT SHOPPING CART" << endl;
                userCart.PrintTotal();
                cin.ignore();
                break;
            case 'q':
            break;
        }
}
return 0;}




/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintMenu
 *  Description:  
 * =====================================================================================
 */
void PrintMenu(ShoppingCart userCart) {} void PrintOptions()
{
    cout << "MENU" << endl << "a - Add item to cart" << endl
         << "d - Remove item from cart" << endl
         << "c - Change item quantity" << endl
         << "i - Output items' descriptions" << endl
         << "o - Output shopping cart" << endl
         << "q - Quit" << endl << endl << "Choose an option:" << endl;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  checking answer
 *  Description:  
 * =====================================================================================
 */
bool validChar(char input)
{
    if((input == 'a')||(input == 'd')||(input == 'c')||(input == 'i')
            ||(input == 'o')||(input == 'q'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

