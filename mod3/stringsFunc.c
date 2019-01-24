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
 *       Compiler:  gcc stringsFunc.c -o stringFunc.out -lm
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
    strcat(fullName, " ");   //fullName = fullName + " "
    strcat(fullName, last);
    printf("Your full name is: [%s]\n", fullName);


    return 0;
}
// Function Definitions


