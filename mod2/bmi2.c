/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Calculate the BMI with floating points. (IEEE-754) single 
 *                  and double precision.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:23 AM
 *       Revision:  none
 *       Compiler:  gcc bmi2.c -o bmi2_-lm
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    // BMI = weight / height**2
    double weight = 0;
    double height = 0;
    double bmi = 0;
    //  1) capture user input: weight and height.
    printf("Enter weight in kilos:");
    scanf("%lf", &weight);
    printf("You have entered %lf kilos\n", weight);
    printf("Enter height in meters:");
    scanf("%lf", &height);
    printf("You have entered %lf meters", height);

    //  2) Calculate BMI
    printf("\n");
    bmi = weight / pow(height,2);
    printf("With %lf kilos and %lf meters, your BMI is %lf\n", weight, height,  bmi);
    //  3) Display BMI
    printf("done\n");

    return 0;
}
// Function Definitions


