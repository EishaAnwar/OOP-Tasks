/// Date and Day of week calculator 
//2018-CS-37

#include "pch.h"
#include <iostream>
#include"Project.h"
#include<string>
using namespace std;
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

Date2019::Date2019()								//default contructor intialize the date to the first date of year
{
	d = 1;
	m = 1;
}
Date2019::Date2019(int dd)							//constructor to initialize the date in date and month
{
	if ((dd >= 1) && (dd <= 365))
	{
		if ((dd >= 1) && (dd <= 31))										//Range of days of Month January
		{
			d = dd;
			m = 1;
		}
		else if ((dd > 31) && (dd <= 59))									//Range of days of Month February
		{
			d = dd - 31;
			m = 2;
		}
		else if ((dd > 59) && (dd <= 90))									//Range of days of Month March
		{
			d = dd - 59;
			m = 3;
		}
		else if ((dd > 90) && (dd <= 120))									//Range of days of Month April
		{
			d = dd - 90;
			m = 4;
		}
		else if ((dd > 120) && (dd <= 151))									//Range of days of Month May
		{
			d = dd - 20;
			m = 5;
		}
		else if ((dd > 151) && (dd <= 181))									//Range of days of Month June
		{
			d = dd - 151;
			m = 6;
		}
		else if ((dd > 181) && (dd <= 212))									//Range of days of Month July
		{
			d = dd - 181;
			m = 7;
		}
		else if ((dd > 212) && (dd <= 243))									//Range of days of Month August
		{
			d = dd - 212;
			m = 8;
		}
		else if ((dd > 243) && (dd <= 273))									//Range of days of Month September
		{
			d = dd - 243;
			m = 9;
		}
		else if ((dd > 273) && (dd <= 304))									//Range of days of Month October
		{
			d = dd - 273;
			m = 10;
		}
		else if ((dd > 304) && (dd <= 334))									//Range of days of Month November
		{
			d = dd - 304;
			m = 11;
		}
		else if ((dd > 334) && (dd <= 365))									//Range of days of Month December
		{
			d = dd - 334;
			m = 12;
		}
	}
	else
	{
		d = -1;
		m = -1;
	}
}
Date2019::Date2019(int dd, int mm)
{
	switch (mm)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:			//Months Having 31 days
	{
		if ((dd >= 1) && (dd <= 31))
		{
			d = dd;
			m = mm;
		}
		else
		{
			cout << "Invalid Date";
		}
		break;
	}
	case 2:
	{
		if ((dd >= 1) && (dd <= 28))									//Months Having 28 days
		{
			d = dd;
			m = mm;
		}
		else
		{
			cout << "Invalid Date";
		}
		break;
	}
	case 4: case 6: case 9: case 11:									//Months Having 30 days
	{
		if ((dd >= 1) && (dd <= 30))
		{
			d = dd;
			m = mm;
		}
		else
		{
			cout << "Invalid Date";
		}
		break;
	}
	default:
	{
		cout << "Invalid Date";
	}
	}
}
void Date2019::setdate(int dd, int mm)
{
	switch (mm)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:			//Months Having 31 days
	{
		if ((dd >= 1) && (dd <= 31))
		{
			d = dd;
			m = mm;
		}
		else
		{
			cout << "Invalid Date";
		}
		break;
	}
	case 2:
	{
		if ((dd >= 1) && (dd <= 28))									//Months Having 28 days
		{
			d = dd;
			m = mm;
		}
		else
		{
			cout << "Invalid Date";
		}
		break;
	}
	case 4: case 6: case 9: case 11:									//Months Having 30 days
	{
		if ((dd >= 1) && (dd <= 30))
		{
			d = dd;
			m = mm;
		}
		else
		{
			cout << "Invalid Date";
		}
		break;
	}
	default:
	{
		cout << "Invalid Date";
	}
	}
}
void Date2019::print()
{
	if ((d == -1) && (m == -1))
	{
		cout << "Not in 2019";
	}
	else
	{
		string Day[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
		switch (m)
		{
		case 1:
		{
			int index = d % 7;
			cout << Day[index] << ",January " << d << ",2019";
			break;
		}
		case 2:
		{
			int index = (d + 31) % 7;
			cout << Day[index] << ",February " << d << ",2019";
			break;
		}
		case 3:
		{
			int index = (d + 59) % 7;
			cout << Day[index] << ",March " << d << ",2019";
			break;
		}
		case 4:
		{
			int index = (d + 90) % 7;
			cout << Day[index] << ",April " << d << ",2019";
			break;
		}
		case 5:
		{
			int index = (d + 120) % 7;
			cout << Day[index] << ",May " << d << ",2019";
			break;
		}
		case 6:
		{
			int index = (d + 151) % 7;
			cout << Day[index] << ",June " << d << ",2019";
			break;
		}
		case 7:
		{
			int index = (d + 181) % 7;
			cout << Day[index] << ",July " << d << ",2019";
			break;
		}
		case 8:
		{
			int index = (d + 212) % 7;
			cout << Day[index] << ",August " << d << ",2019";
			break;
		}
		case 9:
		{
			int index = (d + 243) % 7;
			cout << Day[index] << ",September " << d << ",2019";
			break;
		}
		case 10:
		{
			int index = (d + 273) % 7;
			cout << Day[index] << ",October " << d << ",2019";
			break;
		}
		case 11:
		{
			int index = (d + 304) % 7;
			cout << Day[index] << ",November " << d << ",2019";
			break;
		}
		case 12:
		{
			int index = (d + 334) % 7;
			cout << Day[index] << ",December " << d << ",2019";
			break;
		}
		}
	}
}
void Date2019::plusday(int days)
{
	int Date = 0;
	switch (m)																	//Switch to convert date of format dd-mm into dd
	{
	case 1:
	{
		Date = d + days;
		break;
	}
	case 2:
	{
		Date = d + days + 31;
		break;
	}
	case 3:
	{
		Date = d + days + 59;
		break;
	}
	case 4:
	{
		Date = d + days + 90;
		break;
	}
	case 5:
	{
		Date = d + days + 120;
		break;
	}
	case 6:
	{
		Date = d + days + 151;
		break;
	}
	case 7:
	{
		Date = d + days + 181;
		break;
	}
	case 8:
	{
		Date = d + days + 212;
		break;
	}
	case 9:
	{
		Date = d + days + 243;
		break;
	}
	case 10:
	{
		Date = d + days + 273;
		break;
	}
	case 11:
	{
		Date = d + days + 304;
		break;
	}
	case 12:
	{
		Date = d + days + 334;
		break;
	}
	}
	Date2019 AfterDate(Date);													//Using New object Constructor using date to convert it in dd-mm
	cout << days << " days after ";
	print();																	//Printing Calling Object date
	cout << " is ";
	AfterDate.print();															//Printing Calulated Date stored in new object
}
int main()
{
	Date2019 d;
	d.print();
	cout << endl;
	Date2019 d1(70);
	d1.print();
	cout << endl;
	Date2019 d2(25, 1);
	d2.print();
	cout << endl;
	d.setdate(31, 1);
	d.print();
	cout << endl;
	d.plusday(70);

}

