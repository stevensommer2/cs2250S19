/*
 * =====================================================================================
 *
 *       Filename:  satallite.c
 *
 *    Description:  Calculate altitude of satallite 
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:47:27 AM
 *       Revision:  none
 *       Compiler:  gcc satallite.c -o satallite.out -lm
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double Gravity = 6.67e-11;   //Newton's contstant 
                                   // (m^3 kg^-1 s ^-2)
const double E_MASS = 5.97e24;     // Earth's Mass (kg)
const double E_RADIUS = 6371e3;    // Earth's Radius (meters)s.
const double PI = 3.1415941;       // PI
// Function Prototypes

// Main Function
int main()
{
    double time = 0;
    double height = 0;
    // 1) Enter the period
    printf("Enter the period: ");
    scanf("%lf", &time);
    printf("\n");


    // Calculate Height = [(G M T^2)/(4PI^2)]^1/3 - R
    
    
    height = Gravity * E_MASS * pow(time, 2);
    height = height/(4*pow(PI,2));
    height = cbrt(height);
    height = height - E_RADIUS;
    



        
    // Display result
    //
    printf("Your satallite after %lf sec is %lf meters from earth.\n", 
            time, height);

    
    height = (cbrt((Gravity * E_MASS * pow(time, 2))/(4*pow(PI,2))) - E_RADIUS);
    printf("Your satallite after %lf sec is %lf meters from earth.\n", 
            time, height);

    
    

    return 0;
}
// Function Definitions


