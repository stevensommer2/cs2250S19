/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  calculate the cartesian coordinates based on:
 *                  radius and theta angle(degrees)
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:36:15 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c -o cartesian.out -lm
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double PI = 3.14159;
// Function Prototypes

// Main Function
int main()
{
    double radius;
    double thetaAngle;
    double x_pos, y_pos;
    //1) Capture user inut for radius and theta angle (degrees)
    printf("Enter your radius: ");
    scanf("%lf", &radius);
    printf("Enter your theta in degrees: ");
    scanf("%lf", &thetaAngle);

    //2) convert the theta to radians
    thetaAngle = (thetaAngle*PI/180.0);

    //3) calculate your cartesian coordinates 
    x_pos = radius*cos(thetaAngle);
    y_pos = radius*sin(thetaAngle);

    //4) Print the result: format should be 2 decimal places for xy
    //%.2lf use only decimal places
    //%6.2lf use only decimal places, 6 charcters wide 
    //%-6.2lf use only 2 decimal places, 6 characters wide, left justified
    //%06.2lf use only 2 decimal places, 6 characters wide, zero patted
    printf("Your Cartesian Coordinates, x = [%.2lf]\n", x_pos);
    printf("Your Cartesian Coordinates, y = [%.2lf]\n", y_pos);

    return 0;
}
// Function Definitions


