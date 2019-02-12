/*
 * =====================================================================================
 *
 *       Filename:  temperatures.c
 *
 *    Description:  Calculate temperature anaysis
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:39:03 AM
 *       Revision:  none
 *       Compiler:  gcc temperature.c -o temperature.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h>       //Time
#include <stdlib.h>     //rand(), srand()

// Constants
#define NUM 4
#define MIN 20  //Min temp
#define MAX 45  //Max temp
// Function Prototypes

// Main Function
int main()
{
    double max_ogden[NUM];
    double min_ogden[NUM];
    double avg = 0, min_temp = 0, max_temp = 0;
    int min_day = 1, max_day = 1;
    srand(time(0));         //set random seed
   

    //printf("Enter the max and min Ogden temp for the next %d days\n", NUM);
    //TASK: capture max and min temps from user
    
    
    printf("Simulating the max and min Ogden temp for the next %d days\n", NUM);
    for(int i = 0; i < NUM; i++)
    {
 //printf("Simulating the max and min Ogden temp for the next %d days\n", i + 1);
//        scanf("%lf %lf", &max_ogden[i], &min_ogden[i]);
        min_ogden[i] = ((rand() % MIN) + (rand() % MAX))/2;
        max_ogden[i] = min_ogden[i] + (rand()% (MAX - MIN));
    }


    //TASK: Display information


    for(int i = 0; i < NUM; i++)
    {
        printf("%2d) max[%6.2lf] min[%6.2lf] temps in Ogden\n", i+1, max_ogden[i], min_ogden[i]);
    }
      
    //TASK: Calculate the average and min and max of the data range
    min_temp = min_ogden[0];
    max_temp = max_ogden[0];
    for(int i = 0; i < NUM; i++)
    {
        avg += min_ogden[i];    //adding elements
        avg += max_ogden[i];

        if(min_temp > min_ogden[i])
        {
            min_temp = min_ogden[i];    //Select minimum value
            min_day = i + 1;
        }

        if(max_temp < max_ogden[i])     //Select maximum value
        {
            max_temp = max_ogden[i];
            max_day = i + 1;
        }


    }
    avg = avg/ (NUM * 2);       // it is NUM * 2 because max and min within NUM

    printf("Your avg temp = [%6.2lf]\n", avg);
    printf("Your min [%6.2lf] and max [%6.2lf]\n", min_temp, max_temp);
    printf("Your min [%6.2lf] on day [%2d]\n", min_temp, min_day);
    printf("Your max [%6.2lf] on day [%2d]\n", max_temp, max_day);

    //printf("First max temp in Ogden is [%6.2lf]", max_ogden[0]);
    
    return 0;
}
// Function Definitions


