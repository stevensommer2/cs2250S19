/*
 * =====================================================================================
 *
 *       Filename:  mainArg.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:21:43 AM
 *       Revision:  none
 *       Compiler:  gcc mainArg.c -o mainArg.out
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
int main(int argc, char* argv[])
{
    printf ( "Argument count is: %d\n", argc);
    printf ( "Argc 0 [%s]\n", argv[0]);
    printf ( "argv 1 [%s]\n", argv[1]);

    for(int i = 0; i < argc; i += 1)
    {
        printf ( "argv %d [%s]\n", i, argv[i]);
    }

    return 0;
}
// Function Definitions


