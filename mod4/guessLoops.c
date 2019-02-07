/*
 * =====================================================================================
 *
 *       Filename:  guessLoops.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:53:46 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>  //use random function
#include <time.h>   //time()


// Constants
#define MAX 5
#define LIMIT 100
// Function Prototypes

// Main Function
int main()
{
    int number, guess;
    srand(time(0));
    guess = rand() % 10;
    //int i;  for before C89 you need to define i outside loop
    for(int i = 0; i < MAX; i++)
    {
        printf("Please guess a number between 0 and %d\n", LIMIT - 1);
        scanf("%d", &number);
        if(number < guess) {
            printf("You need to guess higher\n");
        }
        if(number > guess)
        {
            printf("You need to guess lower\n");
        }
        if(number == guess)
        {
            printf("congratulations, you got the correct number\n");
            return 0;
        }
    }
    printf("Sorry, you did not guess the [%d] number\nPlay again\n", guess);



    return 0;
}
// Function Definitions


