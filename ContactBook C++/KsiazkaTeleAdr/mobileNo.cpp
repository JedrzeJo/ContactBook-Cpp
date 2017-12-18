#include "AllHeaders.h"


mobileNo::mobileNo()
{
	this->number[0] = "999 999 999";
}

void mobileNo::setMobile()
{
	cout << "Enter a mobile number: ";
	cin >> this->number[0];
}

void mobileNo::displayMobile()
{
	cout << "Current mobile number: " << this->number;
}


