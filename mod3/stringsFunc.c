/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  string function
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:09:40 AM
 *       Revision:  none
 *       Compiler:  gcc stringFunc.c -o stringFunc.out -lm
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>   // for string manipulation operations

// Constants

// Function Prototypes

// Main Function
int main()
{
    char first[50];
    char last[50];
    char fullName[100];


    printf("Please enter your first name and last name: ");
    scanf("%s %s", first, last);
    printf("Hi [%s] [%s]\n", first, last);
    strcpy(fullName, first);
    
    printf("Your full name is [%s %s]\n", first, last);


    return 0;
}
// Function Definitions


