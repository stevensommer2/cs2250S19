/*
 * =====================================================================================
 *
 *       Filename:  chars2.c
 *
 *    Description:  More characters fictures
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:04:56 AM
 *       Revision:  none
 *       Compiler:  gcc chars2.c -o chars2/out
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
    char c = '0';

    printf("C is 0x%x\n", c);
    printf("C is %c\n", c);
    printf("C is %d\n", c);
    printf("C is 0x%X\n", c); //%X for hex notation
    printf("C is 0x%x\n", c);
    printf("Enter the first letter of your first name: \n");
    scanf("%c", &c);
    printf("Your initial is [%c]\n", c);

    return 0;
}
// Function Definitions


