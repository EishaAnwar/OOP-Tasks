//This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
class shape
{
protected:
	double area;
	double volume;
public:
	virtual double cal_area()=0;											//abstract area function of base class
	virtual double cal_vol()=0;												//abstract vol function of base class
};
class point:public shape													//derive concrete point class
{
protected:
	int x;
	int y;
public:
	point();												
	point(int x1, int y1);
	double cal_area()
	{
		cout << "\narea of point called";
		cout << "\nPoint x position=" << x;
		cout << "\nPoint y position=" << y;
		return area;
	}
	double cal_vol()
	{
		cout << "\nvolume of point called";
		cout << "\nPoint x position=" << x;
		cout << "\nPoint y position=" << y;
		return volume;
	}
};
point::point()
{
	x = 0;
	y = 0;
}
point::point(int x1, int y1)
{
	x = x1;
	y = y1;
}
class circle :public point
{
protected:
	int radius;
public:
	circle() 
	{
		radius = 0;
	}
	circle(int r, int x1, int y1):point(x1,y1)
	{
		radius = r;
	}
	double cal_area()
	{
		cout << "\narea of circle called";
		area = 3.14*radius*radius;
		cout <<"\narea of circle is "<< area;
		return area;
	}
	double cal_vol()
	{
		cout << "\nvolume of circle called";
		volume = (4 * 3.14*radius*radius*radius) / 3;
		cout << "\nvolume of circle is " << volume;
		return volume;
	}
};
class cylinder :public circle
{
protected:
	int height;
public:
	cylinder()
	{
		height = 0;
	}
	cylinder(int h, int r, int x1, int y1) :circle(r, x1, y1)
	{
		height = h;
	}
	double cal_area()
	{
		cout << "\narea of cylinder called";
		area = 3.14*radius*radius*height;
		cout << "\narea of cylinder is " << area;
		return area;
	}
	double cal_vol()
	{
		cout << "\nvolume of cylinder called";
		volume = 3.14*radius*radius*height;
		cout << "\nvolume of circle is " << volume;
		return volume;
	}
};
int main()
{
    shape *c=new point(1,0);
	c->cal_area();
	c->cal_vol();
	point b(1, 1);
	b.cal_area();
	b.cal_vol();
	circle d(1,2, 1);
	d.cal_area();
	d.cal_vol();
	cylinder e(1, 1, 1, 1);
	e.cal_area();
	e.cal_vol();

}