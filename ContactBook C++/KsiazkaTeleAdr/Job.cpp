#include "AllHeaders.h"

Job::Job()
{
	this->CompanyName = "NoName";
}

void Job::SetJobDetails()
{
	cout << "Type a company name: " << endl;
	cin >> this->CompanyName;
	cout << "Work since: " << endl;
	DateOfBeginning.SetDate();
	
}

void Job::DisplayJob()
{
	cout << "Works in: " << this->CompanyName
		<< " since: " << DateOfBeginning.getDay() <<"."<< DateOfBeginning.getMonth() 
		<<"."<< DateOfBeginning.getYear() << endl;
}

