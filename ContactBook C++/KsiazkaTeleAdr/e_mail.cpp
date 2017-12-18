#include "AllHeaders.h"



e_mail::e_mail()
{
	this->beforeMonkey = "anonymous";
	this->afterMonkey = "gmail.com";
}

void e_mail::setEmail()
{
	cout << "Type what's before @: ";
	cin >> this->beforeMonkey;
	cout << "Type what's after @: ";
	cin >> this->afterMonkey;
}

void e_mail::displayEmail()
{
	cout << "E_mail adress: "
		<< this->beforeMonkey << "@" << this->afterMonkey << endl;
}
