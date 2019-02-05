/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  Learn while loops 
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:37:24 AM
 *       Revision:  none
 *       Compiler:  gcc while.c -0 while.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAXCOUNT 4
// Function Prototypes

// Main Function
int main()
{
    // Task 1: Calulate the average of user input values.
    // Task 2: Validate user input for 0 to 100 only
    int count = 0;
    float grade, avg;
    float total = 0;

    while (count < MAXCOUNT) 
    {
        printf("Enter %d hw grades(0-100): ", count + 1);
        scanf("%f", &grade);

            if (grade > 100 || grade < 0)
            {
                printf("invalid input. Please try again.");

            continue;   //invalid input
            }
        total += grade; //add up grades

        
        //update test condition: sentinel
        count++;
    }
    avg = total / MAXCOUNT;   //calculate the average
    printf("Your avg is [%6.2f]\n", avg);
    printf("Tchuss Schwein\n");


    return 0;
}
// Function Definitions


