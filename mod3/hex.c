/*
 * =====================================================================================
 *
 *       Filename:  hex.c
 *
 *    Description:  hex numbers
 *
 *        Version:  1.0
 *        Created:  01/24/2019 10:01:11 AM
 *       Revision:  none
 *       Compiler:  gcc hex.c -o hex.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const unsigned char PIN1 = 0x01;
const unsigned char PIN2 = 0x02;
const unsigned char PIN3 = 0x04;
const unsigned char PIN4 = 0x08;
// Function Prototypes

// Main Function
int main()
{
    unsigned char hex;

    
    //1) Ask user to enter one hex number (1 byte max)
    printf("Please enter one hex number at 1 byte max: ");
    scanf("%hhx", &hex);
    printf("Hex[%02X] and dec [%d]\n", hex, hex);
    if(hex & PIN1) // use BITWISE AND "&"

    {
        printf("PIN1 is ON
    
    //2) Tell me which bits/pins are ON



    return 0;
}
// Function Definitions


