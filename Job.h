#pragma once
#include "AllHeaders.h"
#include <iostream>
#include <string>
using namespace std;

class Job
{
	//friend int przypisz(Person, Person);
private:
	Date DateOfBeginning;
	string CompanyName="NoName";
public:
	Job();
	void SetJobDetails();
	void DisplayJob();			
};

