/*
 * =====================================================================================
 *
 *       Filename:  grade.c
 *
 *    Description:  letter grade
 *
 *        Version:  1.0
 *        Created:  01/22/2019 10:12:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char letter;
    printf("Enter the grade you want for this class\n");
    printf("Your choices are: 'A'\t'B'\t'C'\n");
    printf("\t\t'D' or 'F'\n");
    scanf("%c", &letter);

    if(letter == 'A')
    { 
        printf("You need to get >= 94 points\n");
    }
    
    printf("Done\n");
    return 0;
}
// Function Definitions


