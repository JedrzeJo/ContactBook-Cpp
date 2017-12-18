#pragma once
#include "AllHeaders.h"
#include "e_mail.h"
#include "mobileNo.h"
#include "Adress.h"

class Contact :
	public mobileNo, public Adress, public e_mail /*bo sobie bedziemy z metod 
		//klas bazowych korzystac na rzecz persona */
{
	//friend int przypisz(Person, Person);
	mobileNo PhoneNumber;
	Adress adress;
	e_mail e_mailAdress;
public:
	Contact();
	void setContact();
	void displayContact();
};

