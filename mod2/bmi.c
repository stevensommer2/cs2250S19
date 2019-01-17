/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Calculate the BMI.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:23 AM
 *       Revision:  none
 *       Compiler:  gcc bmi.c -o bmi
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
    // BMI = weight / height**2
    int weight = 0;
    int height = 0;
    int bmi = 0;

    //  1) capture user input: weight and height.
    printf("Enter weight in kilos:");
    scanf("%d", &weight);
    printf("You have entered %d kilos\n", weight);
    printf("Enter height in meters:");
    scanf("%d", &height);
    printf("You have entered %d meters", height);

    //  2) Calculate BMI
    printf("\n");
    bmi = weight / (height * height);
    printf("With %d kilos and %d meters, your BMI is %d\n", weight, height,  bmi);

    //  3) Display BMI
    printf("done\n");

    return 0;
}
// Function Definitions


