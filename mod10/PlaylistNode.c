/*
 * =====================================================================================
 *
 *       Filename:  Playlist.c
 *
 *    Description:  Implementation playlist library
 *
 *        Version:  1.0
 *        Created:  03/26/2019 09:47:43 AM
 *       Revision:  none
 *       Compiler:  gcc Playlist.c -o Playlist.out -lm
            Usage:  ./Playlist.out
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


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CreatePlaylistNode
 *  Description:  Initializing all of the values
 * =====================================================================================
 */
void CreatePlayListNode(PlaylistNode* thisNode, char idInit[], 
        char songNameInit[], char artistNameInit[],
        int songLengthInit, PlaylistNode* nextLoc)
{
    //1) Set all your strings in thisNode to the input parameters
    //2) Set all your integers in thisNode to the input parameters
    //3) Set the nextNodePtr to nextLoc

    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InsertPlaylistNodeAfter
 *  Description:  Linking your PlaylistNodes
 * =====================================================================================
 */
void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode)
{
    PlaylistNode* tempNext = NULL;
    //1) set temp to thisNode->nextPointer
    //2) update thisNode->NextPointer to newNode
    //3) set newNode->nextPointer to tempNext
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetNextPlaylist
 *  Description:  Linking your Playlist Nodes
 * =====================================================================================
 */
void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode)
{
    //1) set the thisNode->nextNodePtr to newNode
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNextPlayListNode
 *  Description:  Retrn the next node in the list
 * =====================================================================================
 */
PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode)
{
    //1) Return the next member in the list
    return thisNode->nextNodePtr;


}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintlistNode
 *  Description:  Print the list node descriptions
 * =====================================================================================
 */
void PrintlistNode(PlaylistNode* thisNode)
{
    //1) Print each member of the PlaylistNode
    return;
}

// Function Definitions


