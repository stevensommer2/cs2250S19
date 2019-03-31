/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  use of the PlaylistNode
 *
 *        Version:  1.0
 *        Created:  03/26/2019 10:02:45 AM
 *       Revision:  none
 *       Compiler:  gcc main.c PlaylistNode.c -o main.out -lm
            Usage:  ./main.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "PlaylistNode.h"
#include <strings.h>

// Constants

// Function Prototypes
void PrintMenu(char playlistTitle[]);


// Main Function
int main(int argc, char* argv[])
{
    char playlistTitle[50];
    //1)prompt user for playlist title. Use fgets and do not forget to eliminate
    //the end-of-line char
    printf("Enter playlistTitle:\n");
    fgets(playlistTitle, 50, stdin);
    playlistTitle[strlen(playlistTitle) - 1] = '\0';

    //2) Output playlist menu options
    PrintMenu(playlistTitle);

    return 0;
}
// Function Definitions

void PrintMenu(char playlistTitle[])
{
    // printf("Welcome to my [%s] list\n", playlistTitle); //TODOL Remove before upload to 
    //zybooks
    //Create a bunch of temp variables: chars, ints, and PlaylistNode(pointers)
    char menuOp = ' ';
    //Output menu option
    //Create a loop to print your options
    while(menuOp != 'q')
    {
        printf("%s PLAYLIST MENU\n", playlisttitle); //TODO: Remove before upload to zyboks
        //check for valid choices
        //
        //set correspoinding menu actionL
        //switch menuOp
        //
        //Case 'a': Add a song
        //case 'r': Output plaist message
        //case 'c': Prompt user for new song location
        //case 's': output songs by specific artist
        //case 't': Output the total time of songs in seconds
        //case 'o': Output full playlist
        //case 'q': Quit, which is the exit of your loop
        menuOp = 'q'; //TODO: Remove, this is only for testing
    }//end of loop
    return;
}

