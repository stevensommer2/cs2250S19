/*
 * =====================================================================================
 *
 *       Filename:  forLoops.c
 *
 *    Description:  Play with for loops
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:40:06 AM
 *       Revision:  none
 *       Compiler:  gcc forLoops.c -o forLoops.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAX_NUMBER 5

// Function Prototypes

// Main Function
int main()
{
    int num = 0;
    for(int i = 0; i < MAX_NUMBER; ++i)
    {
        printf("Your i [%d] num++[%d]\n", i, num++);
        printf("num is [%d]\n", num);
        printf("Your i [%d] ++num[%d]\n", i, ++num);
    }
    printf("Tchuss\n");

    return 0;
}
// Function Definitions


