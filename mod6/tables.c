/*
 * =====================================================================================
 *
 *       Filename:  tables.c
 *
 *    Description:  Display multiplication tables
 *
 *        Version:  1.0
 *        Created:  02/12/2019 09:49:04 AM
 *       Revision:  none
 *       Compiler:  gcc tables.c -o tables.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define TABLES 12

// Function Prototypes

// Main Function
int main()
{
    //2D array [row][col]
    int tables [TABLES][TABLES];
    for(int i = 1; i <= TABLES; i++)
    {
        for(int j = 1; j <= TABLES; j++)
        {
        printf("%3d\t", i * j);
        tables[i-1][j-1] = i * j;
        }
    printf("\n");
    }

    printf(" 1 * 6 = %d\n", tables[0][5]);
    printf(" 2 * 8 = %d\n", tables[1][7]);


    return 0;
}
// Function Definitions


