#include <iostream>
#include "pch.h"
using namespace std;
class Fraction
{
public:
	int Numenator;
	int Denominator;
public:
	Fraction()
	{
		Numenator = 0;
		Denominator = 1;
	}
	Fraction(int numenator, int denominator)
	{
		Numenator = numenator;
		Denominator = denominator;
	}
	friend bool operator > (Fraction F1, Fraction F2);
	friend bool operator < (Fraction F1, Fraction F2);
	friend bool operator >= (Fraction F1, Fraction F2);
	friend bool operator <= (Fraction F1, Fraction F2);
	friend bool operator == (Fraction F1, Fraction F2);
	friend bool operator != (Fraction F1, Fraction F2);
	friend Fraction operator / (Fraction F1, Fraction F2);
	friend Fraction operator + (Fraction F1, Fraction F2);
	friend Fraction operator - (Fraction F1, Fraction F2);
	friend Fraction operator * (Fraction F1, Fraction F2);
	friend istream &operator >> (istream &input, Fraction &F1);
	friend ostream &operator << (ostream &output, Fraction &F1);
};
bool operator > (Fraction F1, Fraction F2)//Operator overloading function for greater than
{
	bool x = (F1.Numenator*F2.Denominator > F1.Denominator * F2.Numenator);
	return x;
}
bool operator < (Fraction F1, Fraction F2)//Operator overloading function for less than
{
	bool x = (F1.Numenator*F2.Denominator < F1.Denominator * F2.Numenator);
	return x;
}
bool operator >= (Fraction F1, Fraction F2)//Operator overloading function for greater than or equality
{
	bool x = (F1.Numenator*F2.Denominator >= F1.Denominator * F2.Numenator);
	return x;
}
bool operator <= (Fraction F1, Fraction F2)//Operator overloading function for less than or equality
{
	bool x = (F1.Numenator*F2.Denominator <= F1.Denominator * F2.Numenator);
	return x;
}
bool operator == (Fraction F1, Fraction F2)//Operator overloading function for equality
{
	bool x = (F1.Numenator*F2.Denominator == F1.Denominator * F2.Numenator);
	return x;
}
bool operator != (Fraction F1, Fraction F2)//Operator overloading function for disequality
{
	bool x = (F1.Numenator*F2.Denominator != F1.Denominator * F2.Numenator);
	return x;
}
Fraction operator / (Fraction F1, Fraction F2)//Operator overloading function for division
{
	Fraction F3;
	F3.Numenator = F1.Numenator * F2.Denominator;
	F3.Denominator = F1.Denominator * F2.Numenator;
	return F3;
}
Fraction operator + (Fraction F1, Fraction F2)// Operator overloading function for addition
{
	Fraction F3;
	F3.Numenator = F1.Numenator * F2.Denominator + F2.Numenator*F1.Denominator;
	F3.Denominator = F1.Denominator * F2.Denominator;
	return F3;
}
Fraction operator - (Fraction F1, Fraction F2)//Operator overloading function for subtraction
{
	Fraction F3;
	F3.Numenator = F1.Numenator * F2.Denominator - F2.Numenator*F1.Denominator;
	F3.Denominator = F1.Denominator * F2.Denominator;
	return F3;
}
Fraction operator * (Fraction F1, Fraction F2)//Operator overloading function for multiplication
{
	Fraction F3;
	F3.Numenator = F1.Numenator * F2.Numenator;
	F3.Denominator = F1.Denominator * F2.Denominator;
	return F3;
}
istream &operator >> (istream &input, Fraction &F1)//Operator overloading function for input i.e cin
{
	char slash;
	input >> F1.Numenator >> slash >> F1.Denominator;
	return input;
}
ostream &operator << (ostream &output, Fraction &F1)//Operator overloading function for output i.e cout
{
	output << F1.Numenator << "/" << F1.Denominator;
	return output;
}
int main()
{
	Fraction f1;
	Fraction f2(45, 95);
	cout << "Enter fraction: ";
	cin >> f1;
	cout << f1;
	bool x = (f1 == f2);
	cout << endl;
	cout << x;
}
