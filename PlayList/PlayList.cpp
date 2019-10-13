#include"pch.h"
#include<iostream>
#include"song.h"
#include"PlayList.h"
#include <cstring>
using namespace std;
PlayList::PlayList()															//Default Constructor creates empty PlayList of size 2
{
	size = 2;
	SongList = new Song[size];
}
PlayList operator+(PlayList &s1, Song & s2)
{
	s1.AddSong(s2);
	return s1;
}

PlayList operator-(PlayList &s1, Song & s2)										//s1 PlayList will return as a seperate playList after deleting s2 from s1 
{
	s1.DeleteSong(s2);
	return s1;
}
void PlayList::AddSong(const Song & s)											//Will append song s in the playList
{
	Song null;
	int i = 0;
	while ((!(*(SongList + i) == null)) && (i < size))							//Finding where to append
	{
		i++;
	}
	if ((i>=size))																//Checking if PlayList is fully filled
	{
		doublesize();															//If fully filled then doubling the size of playList
	}
	*(SongList + i) = s;														//Appending Song in the PlayList
	cout << endl << s << " has been added successfully in the PlayList" << endl;
}
bool PlayList::DeleteSong(const Song & s)
{
	Song null;
	int i = 0;
	while (i != size)											
	{
		if (*(SongList + i) == s)												//Finding the specific song s in the playList
		{																		//If found then deleting it by over writing next songs to previous places
			int j = i + 1;
			while (j <= (size-1))
			{
				if (!(*(SongList + j) == null))
				{
					*(SongList + i) = *(SongList + j);
					i++;
					j++;
					if (j == size - 1)
					{
						*(SongList + j) = null;
						*(SongList + (j-1)) = null;
						cout << endl << s << " has been deleted successfully from the PlayList" << endl;
						return true;
					}
				}
				else
				{
					*(SongList + (j - 1)) = null;
					if (i < (size / 2))
					{
						halfsize();												//Reducing size of playList to half if half or more than half PlayList is empty
					}
					cout << endl << s << " has been deleted successfully from the PlayList" << endl;
					return true;
				}
			}
		}
		else
		{																		//Song is not found
			if ((*(SongList + i) == null) && (i < (size / 2)))
			{
				halfsize();														//Reducing size of playList to half if half or more than half PlayList is empty
			}
		}
		i++;
	}
	return false;
}
void PlayList::ShowAll() const
{
	int i = 0;
	Song null;
	cout << endl << "Songs in PlayList"<<endl;
	while ((i < size)&& (!(*(SongList + i) == null)))								//It will display songs of all the play List
	{
		cout << endl;
		cout << *(SongList + i);
		cout << endl;
		i++;
	}
	if (i == 0)
	{
		cout << endl;
		cout << "No SONGS";
		cout << endl;
	}
}
void PlayList::play(int num)
{
	int i = 0;
	cout << endl << "Song Playing" << endl;
	while (i!=num)									 							//It will continously play songs of play List in circular motion 
	{
		cout << endl;
		cout << *(SongList +index);
		cout << endl;
		index++;
		if (index == (size - 1))													//At the end of PlayList
		{
			index =0;															//It will again starts from one
		}
		i++;
	}
}
void PlayList::ShowStatus() const					
{
	cout << endl << "PlayList Status"<<endl;
	cout << "Size of PlayList is " << size << endl;								//It will display the size of Play List
	int i = 0;
	int counter = 0;
	Song null;
	while (i < size)															//Finding Number of songs in playList
	{
		if (!(*(SongList + i) == null))
		{
			counter++;
		}
		i++;
	}
	cout << "Number of songs in the PlayList is " << counter <<endl;			//Displaying Total number of songs in playList
	cout << "Current song index is " << index <<endl;							//Displaying index of current song in PlayList 
	cout << "Current Song is: " << endl << *(SongList + (index-1));
}
void PlayList::doublesize()														//Doubling the size of PlayList
{
	int new_size = size * 2;
	Song *temp = new Song[new_size];
	for (int f1 = 0; f1 < size; f1++)
	{
		*(temp + f1) = *(SongList + f1);
	}
	this->size = new_size;
	SongList = temp;
}
void PlayList::halfsize()														//Reducing the size of PlayList to half
{
	int new_size = size / 2;
	Song *temp = new Song[new_size];
	for (int f1 = 0; f1 < new_size; f1++)
	{
		*(temp + f1) = *(SongList + f1);									
	}
	this->size = new_size;
	SongList = temp;
}
PlayList::~PlayList()
{
	delete[]SongList;
}