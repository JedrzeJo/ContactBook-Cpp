#pragma once
#include "AllHeaders.h"

class Adress
{
	//friend int przypisz(Person, Person);
	string city;
	string street;
	int houseNo;

public:
	Adress();
	void setAdress();
	void displayAdress();

};

