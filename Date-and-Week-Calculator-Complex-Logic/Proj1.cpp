#include "pch.h"
#include <iostream>
#include"Proj1.h"
#include<string>
using namespace std;
const string month[12]= { "January", "February", "March", "April", "May", "June", "July"," August", "September"," October"," November", "December" };
const int daysinmonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };					//Range of day of each month
int flag = 0;
Date2019::Date2019()																	//default contructor intialize the date to the first date of year
{
	d = 1;
	m = 1;
}
Date2019::Date2019(int dd)																//constructor to initialize the date in date and month
{
	if ((dd >= 1) && (dd <= 365))
	{
		int mm=1;
		while ((dd >= 1) && (dd > daysinmonth[mm-1]) && (mm >= 1) && (mm <= 12))		//checking month in range and date in grater than the range of previous month
		{
			dd = dd - daysinmonth[mm - 1];												//To make date in range of the month
			mm++;
		}
		d = dd;
		m = mm;
	}
	else
	{
		d = -1;
		m = -1;
	}
}
Date2019::Date2019(int dd, int mm)
{
	flag = 0;
	if ((mm >= 1) && (mm <= 12))														//To check month in range or not ,month valid or not
	{
		if ((dd >= 1) && (dd <= daysinmonth[mm-1]))										//To check date in range or not ,date valid or not
		{
			d = dd;
			m = mm;
		}
		else
		{
			flag = -1;
		}
	}
	else
	{
		flag = -1;
	}
}
void Date2019::setdate(int dd, int mm)
{
	flag = 0;
	if ((mm >= 1) && (mm <= 12))														//To check month in range or not ,month valid or not
	{
		if ((dd >= 1) && (dd <= daysinmonth[mm-1]))										//To check date in range or not ,date valid or not
		{
			d = dd;
			m = mm;
		}
		else
		{
			flag = -1;
		}
	}
	else
	{
		flag = -1;
	}
}
void Date2019::print()
{
	if ((d == -1) && (m == -1))
	{
		cout << "A Date Not in 2019";
	}
	else if (flag == -1)
	{
		cout << "Invalid Date ";
	}
	else
	{
		string Day[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
		int mm = 1;
		int dd = d;
		while (mm != m)																	//loop to add days per month
		{
			dd = dd + daysinmonth[mm-1];
			mm++;
		}
		int index = dd % 7;																//to find day of week in year
		cout << Day[index] << ","<<month[mm-1]<<" " << d << ",2019";
	}
}
void Date2019::plusday(int days)
{
	if (flag == -1)
	{
		cout << "Invalid Date ";
	}
	else
	{
		int Date = d;
		int mm = 1;
		while (mm != m)																	//loop to add days per month
		{
			Date = Date + daysinmonth[mm - 1];
			mm++;
		}
		Date = Date + days;																//To add days given in date days
		Date2019 AfterDate(Date);														//Using New object Constructor using date to convert it in dd-mm
		cout << days << " days after ";
		print();																		//Printing Calling Object date
		cout << " is ";
		AfterDate.print();																//Printing Calulated Date stored in new object
		cout << \n;
	}
}