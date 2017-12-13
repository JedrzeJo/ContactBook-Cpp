#include "AllHeaders.h"

Date::Date()
{
	this->day = 31;
	this->month = 12;
	this->year = 1900;
}

Date::Date(int a, int b, int c)
{
	this->day = a; this->month = b; this->year = c;
}

void Date::SetDate()
{
	int a, b, c;
	cout << "Day: "; cin >> a;
	cout << "Month: "; cin >> b;
	cout << "Year: "; cin >> c;
	this->day = a; this->month = b; this->year = c;
}
void Date::DisplayDate()
{
	cout << "Was born: " << this->day << "." << this->month << "." << this->year 
		<<" "<< endl;
}

int Date::getDay()
{
	return this->day;
}

int Date::getMonth()
{
	return this->month;
}

int Date::getYear()
{
	return this->year;
}
