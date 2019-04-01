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

// Constants

// Function Prototypes
void PrintMenu(char playlistTitle[]);

// Main Function
int main(int argc, char* argv[])
{
    char playlistTitle[50];
    //prompt user for playlist title
    //eliminate the end of line char
    printf("Enter playlist's title:\n");
    fgets(playlistTitle, 50, stdin);
    playlistTitle[strlen(playlistTitle)-1]= '\0'; //eliminated the end of the line char
    printf("\n");

    //2) output playlist menu options
    PrintMenu(playlistTitle); 
    return 0;
}
// function definitions

void PrintMenu(char playlistTitle[])
{
    PlaylistNode *songHead = NULL;
    PlaylistNode *songTail = NULL;
    PlaylistNode *songCurrent = NULL;
    PlaylistNode *songLast = NULL;
    PlaylistNode temp;
    //create a bunch of temp variables: chars, ints, and PlaylistNode(pointers)
    char menuOp=' ';
    int tempLength = 0;
    int songQuant = 0;
    
    while(menuOp != 'q')
    {
start:  //goto will come back here
        printf("%s PLAYLIST MENU\n", playlistTitle);
        PrintMenuOptions();
        fflush(stdin);
        menuOp='-';
        scanf(" %c%*c", &menuOp);
        printf("\n");
        switch(menuOp)
        {
            case 'a' :// Add a song

                printf("ADD SONG\n");
                printf("Enter song's unique ID:\n");
                fgets(temp.uniqueID, 50, stdin);
                temp.uniqueID[strlen(temp.uniqueID)-1]='\0';
                printf("Enter song's name:\n");
                fgets(temp.songName, 50, stdin);
                temp.songName[strlen(temp.songName)-1]='\0';
                printf("Enter artist's name:\n");
                fgets(temp.artistName, 50, stdin);
                temp.artistName[strlen(temp.artistName)-1]='\0';
                printf("Enter song's length (in seconds):\n");
                scanf("%d", &temp.songLength);
                printf("\n");
                songCurrent=(PlaylistNode*)malloc(sizeof(PlaylistNode)); //keep track of head pointer
                CreatePlaylistNode(songCurrent, temp.uniqueID, 
                        temp.songName, temp.artistName, temp.songLength, NULL);
                if(songQuant == 0)
                {
                    songHead = songCurrent;
                    songLast = songHead;
                }
                else
                {
                    InsertPlaylistNodeAfter(songLast, songCurrent);
                    songLast = songCurrent;
                }
                songQuant++;
                fflush(stdin);
                getchar();
                goto start;  //goes to start
                                
            case 'r' :// output playlist message
                printf("REMOVE SONG\n");
                printf("Enter song's unique ID:\n");
                fflush(stdin);
                fgets(temp.uniqueID, 50, stdin);
                temp.uniqueID[strlen(temp.uniqueID)-1]='\0';
                songCurrent=songHead;
                if(strcmp(temp.uniqueID, songHead->uniqueID)==0)
                {

                    printf("\"%s\" removed.\n\n", songHead->songName);
                    songHead=GetNextPlaylistNode(songHead);
                }
                else
                {
                    while(songCurrent!=NULL)
                    {
                        if(strcmp(songCurrent->uniqueID, temp.uniqueID)==0)
                        {
                            strcpy(temp.songName,songCurrent->songName);
                        }
                        songCurrent=GetNextPlaylistNode(songCurrent);
                    }
                    songHead=delete_item(songHead, temp.uniqueID);
                    printf("\"%s\" removed.\n\n", temp.songName);
                }
                songQuant--;
                goto start; //returns beck to menu
                                
            case 'c' :// Prompt usre for new song location
                printf("CHANGE POSITION OF SONG\n");
                int thisSong = 0;
                int nextsong = 0;
                int numsongs = 0;
                int difference = 0;
                PlaylistNode* changer=NULL;
                PlaylistNode* prechanger=NULL;
                PlaylistNode* another=NULL;
                printf("Enter song's current position:\n");
                scanf(" %d", &thisSong);
                printf("Enter new position for song:\n");
                scanf(" %d", &nextsong);
                songCurrent=songHead;
                while(songCurrent!=NULL)
                {
                    numsongs++;
                    songCurrent=GetNextPlaylistNode(songCurrent);
                }
                songTail=songCurrent;
               // printf("number of songs: %d\n", numsongs);
                if(nextsong>numsongs)
                {
                    nextsong=numsongs;
                }
                difference= nextsong-thisSong;
                songCurrent=songHead;
                for(int j=1; j<thisSong; j++)
                {
                    if(j+1==thisSong)
                    {
                        prechanger=songCurrent;
                    }
                    songCurrent=GetNextPlaylistNode(songCurrent);
                }
                changer = songCurrent;
                printf("\"%s\" moved to position %d\n\n", songCurrent->songName, nextsong);
                if((nextsong<=1)&&(songCurrent!=songHead)) 
                {

                    prechanger->nextNodeptr=songCurrent->nextNodeptr;
                    changer=songHead;
                    songHead=songCurrent;
                    songHead->nextNodeptr=changer;
                }
                else if(difference>0) 
                    {
                        if(songCurrent==songHead)
                            {
                                for(int p =1; p<nextsong; p++)
                                {
                                    songCurrent=GetNextPlaylistNode(songCurrent);
                                }
                                another=GetNextPlaylistNode(songHead);

                                InsertPlaylistNodeAfter(songCurrent, changer);
                                songHead=another;
                            }
                        else
                        {
                            songCurrent=songHead;
                            for(int q =1; q<nextsong; q++)
                            {
                                songCurrent=GetNextPlaylistNode(songCurrent);
                            }
                            SetNextPlaylistNode(prechanger, GetNextPlaylistNode(changer));
                            InsertPlaylistNodeAfter(songCurrent, changer);
                        }      
                    } 
                else if(difference<0)
                {
                    songCurrent=songHead;
                    for(int q =1; q+1<nextsong; q++)
                    {
                        songCurrent=GetNextPlaylistNode(songCurrent);
                    }
                    if(changer==songTail)
                    {
                        SetNextPlaylistNode(prechanger, NULL);
                    }
                    else
                    {
                        SetNextPlaylistNode(prechanger, GetNextPlaylistNode(changer));
                    }
                    InsertPlaylistNodeAfter(songCurrent, changer);
                }
                goto start;
                printf("%s", songTail->songName);

            case 's' :// search by artist
                printf("OUTPUT SONGS BY SPECIFIC ARTIST\n");
                printf("Enter artist's name:");
                int k = 1;
                fgets(temp.uniqueID, 50, stdin);
                temp.uniqueID[strlen(temp.uniqueID)-1]='\0';
                songCurrent=songHead;
                printf("\n");
                while(songCurrent != NULL)
                {
                    if(strcmp(temp.uniqueID, songCurrent->artistName)==0)
                    {
                        printf("%d.\n", k);
                        PrintPlaylistNode(songCurrent);
                        printf("\n");
                    }
                    k++;
                    songCurrent=GetNextPlaylistNode(songCurrent);
                }
                goto start;
                                
            case 't' :// Output the total time 
                printf("OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)\n");
                songCurrent=songHead;
                while(songCurrent!=NULL)
                {
                    tempLength=tempLength+songCurrent->songLength;
                    songCurrent=GetNextPlaylistNode(songCurrent);
                }
                printf("Total time: %d seconds\n\n", tempLength);
                goto start;

            case 'o' :// output full playlist
                printf("%s - OUTPUT FULL PLAYLIST\n", playlistTitle);
                int i = 1;
                if(songQuant==0)

                {
                    printf("Playlist is empty\n\n");
                }
                else
                {
                    songCurrent=songHead;
                    while(songCurrent != NULL)
                    {
                        printf("%d.\n", i);
                        PrintPlaylistNode(songCurrent);
                        printf("\n");
                        songCurrent=GetNextPlaylistNode(songCurrent);
                        i++;
                    }
                }

            case 'q' :// to quit/exit of loop
                break;
            default :
                scanf(" %c", &menuOp);
                printf("\n");
        }
    }
    return;
}




