#pragma once
#include "AllHeaders.h"

class Date {
	//friend int przypisz(Person, Person);
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int, int, int);
	void SetDate();
	void DisplayDate();
	int getDay();
	int getMonth();
	int getYear();

};