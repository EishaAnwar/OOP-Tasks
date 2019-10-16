// Date and Day of week calculator 
//2018-CS-37

#include "pch.h"
#include <iostream>
#include"Proj1.h"
#include<string>
#include<fstream>
using namespace std;
int main()
{
	cout<<"-----Now starting the program-----"<<endl;
	int m = 0, dd = 0, plus = 0;
	ifstream input;
	input.open("Project.txt");
	Date2019 date;
	if (input.is_open())
	{
		while (!(input.eof()))
		{
			input >> m >> dd >> plus;
			date.setdate(dd, m);
			date.plusday(plus);
			cout << endl;
		} 
		input.close();
	}
	/*Date2019 d;
	d.print();
	cout << endl;
	Date2019 d1(70);
	d1.print();
	cout << endl;
	Date2019 d2(25, 12);
	d2.print();
	cout << endl;
	d.setdate(15, 15);
	d.print();
	cout << endl;
	d.plusday(70);
	cout << endl;
	int m = 0, dd = 0, plus = 0;
	cout << "Enter the date in format (Month Day daysToBeAdded ): ";
	cin >> m >> dd >> plus;
	Date2019 date(dd,m);
	date.plusday(plus);*/
}
