#include "AllHeaders.h"
#include "Contact.h"



Contact::Contact()
{
}

void Contact::setContact()
{
	this->setAdress();
	this->setMobile();
	this->setEmail();
}

void Contact::displayContact()
{
	this->displayAdress(); cout << endl;
	this->displayMobile(); cout << endl;
	this->displayEmail(); cout << endl;
}
