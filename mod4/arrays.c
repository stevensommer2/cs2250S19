/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/07/2019 10:05:10 AM
 *       Revision:  none
 *       Compiler:  gcc arrays.c -o arrays.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM 3

// Function Prototypes

// Main Function
int main()
{
    //int i1, i2, i3;
    // Arrays use index notation to access members
    int grades[NUM];  // array of size NUM

    for(int i = 0; i < NUM; i++)
    {
        printf("Enter a number: ");
        //Use the address operator (&)
        //make sure you specify the index position in []
        scanf("%d", &grades[i]); 
    }
    for(int i = 0; i < NUM; i++)
    {
        printf("%d number is [%d]\n", i + 1, grades[i]);
    }


    return 0;
}

// Function Definitions


