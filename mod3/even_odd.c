/*
 * =====================================================================================
 *
 *       Filename:  even_odd.c
 *
 *    Description:  Determine if the input value is even or odd
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:36:34 AM
 *       Revision:  none
 *       Compiler:  gcc even_ood.c -o even_odd.out
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
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    //compare or test value for even or odd
    if(number % 2 == 0)
    {
        printf("%d is even\n", number);

    }
    else
    {
        printf("%d is odd\n", number);
    }
    printf("Tchuss Freund\n");
    return 0;
}
// Function Definitions


