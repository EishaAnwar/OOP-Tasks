#include<iostream>
#include"song.h"
using namespace std;
class PlayList
{
private:
	Song *SongList;
	int size;
	int index;
public:
	PlayList();												//Default constructor creates an empty PlayList of two songs
	~PlayList();											//Desconstructor
	void halfsize();										//It will reduce playList size to half
	void doublesize();										//It will double the playList size
	void ShowAll() const;									//Show name of title and artist of all the songs in the playList
	void play(int num = 1);									//Infinite loop of playing songs in circular mot 
	void ShowStatus() const;								//Show the current status of playList i.e size,#of songs
	void AddSong(const Song &s);							// Append the song in the array
	bool DeleteSong(const Song &s);							//Delete the specific song from playList
	friend PlayList operator+(PlayList &s1, Song& s2);		//Append the song in the array
	friend PlayList operator-(PlayList &s1, Song& s2);		//Delete the specific song from playList
};

