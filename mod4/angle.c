/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  Calculate the quadrant based on input angle
 *                  Quadrant I: Angle between 0 and 90
 *                  Quadrant II: Angle betweeen 90 and 180
 *                  Quadrant III: Angle between 180 and 270
 *                  Quadrant IV: Angle between 270 and 360
 *                  If angle is 0, then print positive postive X axis
 *                  If angle is 90, then print positive postive X axis
 *                  If angle is 180, then print positive postive X axis
 *                  If angle is 270, then print positive postive X axis
 *
 *
 *
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:35:02 AM
 *       Revision:  none
 *       Compiler:  gcc anlge.c -o angle.out -lm
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>    // for fabs()
#include <stdlib.h>  // for regular abs()
// Constants

// Function Prototypes

// Main Function
int main()
{
    int angleIn;
    
    
    printf("Please enter an angle: ");
    scanf("%d", &angleIn);

    angleIn = angleIn % 360;

    if(angleIn < 0)
    {
        angleIn = abs(360 + angleIn);
    }

    if (angleIn > 0 && angleIn < 90)
    { 
        printf("%d is in Quadrant I\n", angleIn);
    }
    else if (angleIn > 90 && angleIn < 180) {
        printf("%d is in Quadrant II\n", angleIn);
    }
    else if (angleIn > 180 && angleIn <270)  {
        printf("%d is in Quadrant III\n", angleIn);
    }
    else if (angleIn > 270 && angleIn < 360)  {
        printf("%d is in Quadrant IV\n", angleIn);
    }
/*
    else if (angleIn == 0)  {
        printf("Positive X axis\n");    //same thing as below but
                                        //done with if else rather
                                        //than switch
        }
    else if (angleIn == 90)  {
        printf("Positive Y axis\n");
    }
    else if (angleIn == 180)  {
        printf("Negative X axis\n");
    }
    else if (angleIn == 270)  {
        printf("Negative Y axis\n");
    }
*/

    else if (angleIn == 0 || angleIn == 90 
            ||angleIn == 180 || angleIn || 270)
    {
        switch(angleIn)
        {
            case 0:
            printf("The angle is on the positive X axis\n");
            break;
            case 90:
            printf("The angle is on the positive Y axis\n");
            break; 
            case 180:
            printf("The angle is on the negative X axis\n");
            break; 
            case 270:
            printf("The angle is on the negative Y axis\n");
            break; 
        }
    }

   
        return 0;
}
// Function Definitions


