#include "AllHeaders.h"


Person::Person()
{
	this->Name="Anon";
	this->Surname="Anonymous";
}

void Person::setName()
{
	cout << "Set name:" << endl;
	cin >> this->Name;
}
void Person::setSurname()
{
	cout << "Set surname:" << endl;
	cin >> this->Surname;
}
void Person::displayNames()
{
	cout << "Contact: " << this->Name << " " << this->Surname << endl;
}


