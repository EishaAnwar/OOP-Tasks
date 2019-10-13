#include "pch.h"
#include <iostream>
class Date2019							//Class for Date and Days of week Calculator
{
private:
	int d;
	int m;
public:
	//Constructors

	Date2019();
	Date2019(int dd);
	Date2019(int dd, int mm);

	//Member Functions

	void setdate(int dd, int mm);
	void print();
	void plusday(int days);

};

