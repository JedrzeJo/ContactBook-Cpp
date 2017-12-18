#pragma once
#include "AllHeaders.h"
#include "Contact.h"
#include "DateOfBirth.h"
#include "Job.h"


class Person : public Date, public Job, public Contact{
	//friend int przypisz(Person, Person);
private:
		string Name;
		string Surname;
		Date DateOfBirth;
		Job job;
		Contact businessCard;
public:
	Person();
	void setName();
	void setSurname();
	void displayNames();

};