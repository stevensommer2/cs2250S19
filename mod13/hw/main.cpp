/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2019 08:38:58 AM
 *       Revision:  none
 *    Compiler(C):  gcc main.cpp -o main.out -lm
 *  Compiler(C++):  g++ main.cpp -o main.out -lm
            Usage:  ./main.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>
using namespace std;

#include "PlaylistNode.h"

// Constants and Globals

// Function Prototypes
void PrintMenu(const string playlistTitle);
void AddSong(PlaylistNode*& headNode, PlaylistNode*& tailNode);
void DeleteSong(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode);
void ChangeSongPosition(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode);
void OutputSongsBySpecificArtist(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode);
void OutputTotalTime(PlaylistNode*& headNode);
void OutputFullList(const string playlistTitle, PlaylistNode*& headNode);

// Main Function
int main() 
{
    string playlistTitle;
    
    PlaylistNode* prevNode = 0;
    PlaylistNode* headNode = 0;
    PlaylistNode* tailNode = 0;

    // Prompt user for playlist title
    cout << "Enter playlist's title:" << endl;
    getline(cin, playlistTitle);
    cout << endl;

    char menuOp = ' ';
    // Output menu option, prompt users for valid selection
    while(menuOp != 'q') 
    {
        menuOp = ' ';
        // Output play list menu options
        PrintMenu(playlistTitle);
        while (menuOp != 'a' && menuOp != 'd' && menuOp != 'c' &&
                menuOp != 's' && menuOp != 't' && menuOp != 'o' && 
                menuOp != 'q') 
        {
            cout << "Choose an option:" << endl;
            cin >> menuOp;
        }
        // Call corresponding menu action
        switch (menuOp) 
        {
            case 'a':
                AddSong(headNode, tailNode);
                break;

            case 'd':
                DeleteSong(headNode, tailNode, prevNode);
                break;

            case 'c':
                ChangeSongPosition(headNode, tailNode, prevNode);
                break;

            case 's':
                OutputSongsBySpecificArtist(headNode, tailNode, prevNode);
                break;

            case 't':
                OutputTotalTime(headNode);
                break;

            case 'o':
                OutputFullList(playlistTitle, headNode);
                break;
        } // end of switch
    } // end of while 

    return 0;
}

void PrintMenu(const string playlistTitle) 
{
    cout << playlistTitle << " PLAYLIST MENU" << endl;
    cout << "a - Add song" << endl;
    cout << "d - Remove song" << endl;
    cout << "c - Change position of song" << endl;
    cout << "s - Output songs by specific artist" << endl;
    cout << "t - Output total time of playlist (in seconds)" << endl;
    cout << "o - Output full playlist" << endl;
    cout << "q - Quit" << endl << endl;
    return;
}

void AddSong(PlaylistNode*& headNode, PlaylistNode*& tailNode)
{
    PlaylistNode* newSong = 0;
    string uniqueID;
    string songName;
    string artistName;
    int songLength = 0;
    // Prompt user for song information
    cout << "ADD SONG" << endl;
    cout << "Enter song's unique ID:" << endl;
    cin >> uniqueID;

    cin.ignore();
    cout << "Enter song's name:" << endl;
    getline(cin, songName);

    cout << "Enter artist's name:" << endl;
    getline(cin, artistName);

    cout << "Enter song's length (in seconds):" << endl;
    cin >> songLength;
newSong = new PlaylistNode(uniqueID, songName, artistName, songLength);

if( headNode==0)
{
headNode = newSong;
tailNode = newSong;
newSong = 0;
}
else
{
    tailNode->SetNext(newSong);
    tailNode = newSong;
    

}
    
    cout << endl;
    return;
}

void DeleteSong(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode)
{
    PlaylistNode* songNode = 0;
    PlaylistNode* prevNodePtr = 0;
    string uniqueID;
    // Output playlist messaging
    cout << "REMOVE SONG" << endl;
    cout << "Enter song's unique ID:" << endl;
    cin >> uniqueID;

    // Count number of nodes in list
    songNode = headNode;
    //prevNodePtr = headNode;
    int nodeNum;

    // songNode is the song to be removed
    while ((songNode != 0) && !(songNode->GetID() == uniqueID)) 
    {
        prevNodePtr = songNode;
        songNode = songNode->GetNext();
        
        nodeNum++;
    }
   
    if (songNode == 0 ) 
    {
        
    }
    else if(songNode==headNode)
    {
        songNode=headNode;
        headNode = headNode->GetNext();

        

    }
    else if(songNode->GetNext()==0)
    {
        tailNode = prevNodePtr;
        prevNodePtr->SetNext(0);
        //delete songNode;
        //return;



    }
    else 
    {
            prevNodePtr->SetNext(songNode->GetNext());
            
      
        
        cout << "\"" << songNode->GetSongName() << "\" removed." << endl << endl;
        delete songNode;
    }
    return;
}

void ChangeSongPosition(PlaylistNode*& headNode, PlaylistNode*& tailNode, PlaylistNode*& prevNode)
{
    PlaylistNode* songNode = 0;
    PlaylistNode* insertPosNode = 0;
    PlaylistNode* prev =0;
    int songPosition = 0;
    int newPosition = 0;
    int numNodes = 0;
    // Prompt user to new song location
    cout << "CHANGE POSITION OF SONG" << endl;
    cout << "Enter song's current position:" << endl;
    cin >> songPosition;

    cout << "Enter new position for song:" << endl;
    cin >> newPosition;

    // Count number of nodes in list
    songNode = headNode;

    // songNode is the song to be moved
    // ...
    while ((songNode != 0) && (numNodes < (songPosition - 1))) 
    {
        ++numNodes;
        prev = songNode;
        songNode = songNode->GetNext();
    }
            cout << "\"" << songNode->GetSongName() << "\" moved to position " << newPosition << endl << endl;
    numNodes=0;

    if (songNode == 0 ) 
    {
        // IF songPosition provided by user is invalid
        // ERROR: Do nothing
    }
    else 
    {
        PlaylistNode* temp = 0;

        temp=songNode;

        
        if(songPosition==1)
        {
            headNode=headNode->GetNext();
        }
        else
        {
        prev->SetNext(songNode->GetNext());
        }
    songNode=headNode;
    while ((songNode != 0) && (numNodes < (newPosition - 1))) 
    {
        ++numNodes;
        prev = songNode;
        songNode = songNode->GetNext();
    }

       
       if (newPosition <= 1) 
        {
            temp->SetNext(headNode);
            headNode=temp;
            

           
        }
        else 
        {
            prev->SetNext(temp);
            temp->SetNext(songNode);

        }
    }
    
    return;
}


void OutputSongsBySpecificArtist(PlaylistNode*& headNode, PlaylistNode*& tailNode, 
        PlaylistNode*& prevNode)
{
    PlaylistNode* currNode = 0;
    string artistName;
    // Consume newline and prompt user for output criteria
    cin.ignore();
    cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
    cout << "Enter artist's name:" << endl;
    getline(cin, artistName);
    cout << endl;

    // Search list for matching artists
    int numNodes = 1;
    currNode = headNode;

    // Cycle through the list
    while (currNode != 0) 
    {
        // Output songs with matching artist name
        if (currNode->GetArtistName() == artistName) 
        {
            cout << numNodes << "." << endl;
            // Print playlist information
            currNode->PrintPlaylistNode();
            cout << endl;
        }
        // Get next node
        currNode= currNode->GetNext();
        ++numNodes;
    }
    return;
}


void OutputTotalTime(PlaylistNode*& headNode)
{
    PlaylistNode* currNode = 0;
    // Output playlist messaging
    cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;

    // Total song times for each song in the list
    currNode = headNode;
    int totalTime = 0;
    while(currNode!=0)
    {
        totalTime= totalTime+currNode->GetSongLength();
        currNode = currNode->GetNext();
    }

    // Over List and add up the totalTime
    
    cout << "Total time: " << totalTime << " seconds" << endl << endl;
    return;
}



void OutputFullList(const string playlistTitle, PlaylistNode*& headNode)
{
    PlaylistNode* currPrintNode = 0;
    // Output playlist messaging
    cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;

    // Iterate through each song in list
    int numNodes = 1;
    currPrintNode = headNode;

    // If list is empty, output error message
    if (headNode == 0) 
    {
        cout << "Playlist is empty" << endl << endl;
    }
    // Otherwise call print function for each node in list
    else 
    {
        while (currPrintNode != 0) 
        {
            cout << numNodes << "." << endl;
                currPrintNode->PrintPlaylistNode();
                currPrintNode = currPrintNode->GetNext();

            // cycle through the playlist
            // ...

              cout << endl;
            ++numNodes;
        }
    }
    return;
}
