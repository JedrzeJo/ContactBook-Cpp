#include "AllHeaders.h"



Adress::Adress()
{
	this->city = "None";
	this->street = "None";
	this->houseNo = 0;
}

void Adress::setAdress()
{
	cout << "City: ";
	cin >> this->city;
	cout << "Street: ";
	cin >> this->street;
	cout << "St. number: ";
	cin >> this->houseNo;
}

void Adress::displayAdress()
{
	cout << "" << this->city << " city, " << this->street << " street, st.No: " << this->houseNo;
}
