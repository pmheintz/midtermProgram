/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Employee pure virtual parent class
* March 8, 2017 */

#include "employee.h"

employee::employee(string theId)
{
	firstName = "";
	lastName = "";
	id = theId;
	wage = 0.0;
}

employee::~employee(void)
{
}

void employee::setWage(float hourlyWage)
{
	wage = hourlyWage;
}

float employee::getWage()
{
	return wage;
}

string employee::getFirstName()
{
	return firstName;
}

string employee::getLastName()
{
	return lastName;
}

string employee::getId()
{
	return id;
}

void employee::setFirstName(string first)
{
	firstName = first;
}

void employee::setLastName(string last)
{
	lastName = last;
}
