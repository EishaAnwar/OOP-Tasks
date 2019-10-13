#include "pch.h"
#include <iostream>
#include"PlayList.h"
using namespace std;

int main()
{
	PlayList s;
	s.ShowStatus();
	s.ShowAll();
	Song s1("u can't stop me loving myself", "BTS");
	Song s2("i m the one i should love", "jin");
	Song s3("tera yaar hoon main", "haan ji haan ji");
	s.AddSong(s1);
	s.ShowStatus();
	s.ShowAll();
	s.AddSong(s2);
	s.ShowStatus();
	s.ShowAll();
	s.AddSong(s3);
	s.ShowStatus();
	s.ShowAll();
	s.play(5);
	//s.DeleteSong(s2);
	//s.DeleteSong(s3);
	//s.ShowAll();
	PlayList S1 = s - s2;
	S1.ShowAll();
	s.ShowStatus();
}