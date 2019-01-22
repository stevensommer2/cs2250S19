/*
 * =====================================================================================
 *
 *       Filename:  string.c
 *
 *    Description:  string
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:54:16 AM
 *       Revision:  none
 *       Compiler:  gcc string.c -o string.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
    const int SIZE = 50;
// Function Prototypes

// Main Function
int main()
{
    // A string is a list/collection of characters (array)
    // Strings us %s as the placeholder
   char fName[SIZE];
   char lName[SIZE];
   printf("Please enter your first name (< %d characters, NO space): ", SIZE);
   //when using arrays, DO NOT include the '&' operator in 
   //your scanf
   scanf("%s", fName);
   
   printf("Please enter your last name (< %d characters, NO space): ", SIZE);
   scanf("%s", lName);
   printf("Hi [%s][%s]\n", fName, lName);

    return 0;
}
// Function Definitions


