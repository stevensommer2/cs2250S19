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
    int number1, number2;
    printf("Enter an even and an odd integer: ");
    scanf("%d %d", &number1, &number2);
    //compare or test value for even or odd
    if((number1 + number2) % 2 !=0)
    {
        printf("%d and %d are even and odd numbers\n", number1, number2);

    }
    else
    {
        printf("%d and %d are not an even and odd numbers\n",
                number1, number2);
    }
    printf("Tchuss Freund\n");
    return 0;
}
// Function Definitions


