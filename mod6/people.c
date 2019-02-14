/*
 * =====================================================================================
 *
 *       Filename:  people.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/12/2019 10:09:26 AM
 *       Revision:  none
 *       Compiler:  gcc people.c -o people.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>     // rand(), srand()
#include <time.h>       // time()
// Constants
#define PERSONS 5
#define ATTRI 3
#define AGE  0
#define WEIGHT 1
#define HEIGHT 2
// Function Prototypes

// Main Function
int main()
{
    //          [Row][cols]
    double people[PERSONS][ATTRI];              /* 2D array */
    srand(time(0));     //Set random seed
    for(int i = 0; i < PERSONS; i++)            /* Loop over persons 1D */
    {
    for(int j = 0; j < ATTRI; j++)              /* loop over attributes 2D*/ 
    {
        if(j == AGE)
        {
             people[i][AGE] = rand() % 50; //set age 0-50
        }
        else if(j == WEIGHT)
        {
             people[i][AGE] = rand() % 200; //set age 0-200 kg
        }
        else if(j == HEIGHT)
        {
            people[i][j] = rand() % 200;   //set HEIGHT  0-200 cm
        }

    }
    //Now display the information

    for (int row = 0 ; row < PERSONS; row++)  
    {

        printf ( "%d person information\n", row + 1 );
        for (int col = 0 ; col < ATTRI ; col++ )
        {
             switch(col)
             {
                 case AGE:
                     printf ( "Your age is %6.0lf\n", people[row][col]);
                     break;
                 case WEIGHT:
                     printf ( "Your weight is %6.2lf\n", people[row][col]);
                     break;
                 case HEIGHT;
                     printf("\tYour height is %6.2lf\n", people[row][col]);
                     break;
             } //end of switch
         }// end of col loop

    } // end of row loop

    return 0;
}
// Function Definitions


