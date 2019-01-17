/*
 * =====================================================================================
 *
 *       Filename:  ballDropped.c
 *
 *    
 *    Description:  Get the distance travelled by a ball when it is 
 *                  dropped
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:07:09 AM
 *       Revision:  none
 *       Compiler:  gcc ballDropped.c -o ballDropped -lm
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include<math.h>

// Constants
const double GRAVITY = 9.8;  //ms^2
const double BUILDING = 500; //meters
// Function Prototypes

// Main Function
int main()
{
    // Formula: s = 0.5 g t^2
double distance = 0;
double time = 0;

double fromGround = 0;

   
    // take user input: time tavelled
    printf("Enter time travelled:\n");
    scanf("%lf", &time);


    // Display distance
    distance = .5 * GRAVITY * pow(time, 2);
    printf("After %lf seconds, your ball has travelled %lf meters\n",
            time, distance);

    //distance from the ground
    fromGround = BUILDING - distance;
    printf("The ball is %lf meters from the ground\n", fromGround);

    return 0;
}
// Function Definitions


