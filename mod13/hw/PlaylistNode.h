/*
 * =====================================================================================
 *
 *       Filename:  PlaylistNode.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2019 08:38:58 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PLAYLISTNODE__INC__
#define  PLAYLISTNODE__INC__

#include <string>
using namespace std;

class PlaylistNode 
{
    private:
        string uniqueID;
        string songName;
        string artistName;
        int songLength;
        PlaylistNode* nextNodePtr;
    public:
        // Default Constructors
        PlaylistNode();
        // Constructors with parameters
        PlaylistNode(string initID, string initSongName, string initArtistName,
                int initSongLength, PlaylistNode* nextLoc = 0);
        // Getters
        string GetID() const;
        string GetSongName() const;
        string GetArtistName() const;
        int GetSongLength() const;
        // Other Methods
        void InsertAfter(PlaylistNode* nodePtr);
        void SetNext(PlaylistNode* nodePtr);
        PlaylistNode* GetNext();
        void PrintPlaylistNode();
};

#endif /* ----- #ifndef PLAYLISTNODE__INC__ ----- */


