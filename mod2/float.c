/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  Play with float points
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:40 AM
 *       Revision:  none
 *       Compiler:  gcc float.c -o float
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
    float temp = 7.9;     //Celcius
    float f_temp = 0;
    // for floats use the %f placeholder
    
    printf("The temperature is %f Celsius\n", temp);
    printf("What is the temperature in Ogden now:");
    
    // use %f to capture float information
    // use %lf to capture double information
    scanf("%f", &temp);
    
    //Convert from celcius to Farenheit
    f_temp = (temp * 9/5) + 32;

    printf("I see, your temp is %lf in F.\n",f_temp);
    


    return 0;
}
// Function Definitions


