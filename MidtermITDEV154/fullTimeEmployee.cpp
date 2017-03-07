/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Full time employee child class
* March 8, 2017 */

#include "fullTimeEmployee.h"

float fullTimeEmployee::calculatePay(float hours)
{
	float overtime, weeklyPay;
	if (hours > 40)
	{
		weeklyPay = 40 * getWage();  //base
		overtime = (hours - (float)40) * (getWage() * (float)1.5);
		weeklyPay += overtime;
	}

	else
	{
		weeklyPay = hours * getWage();
	}

	return weeklyPay;
}

fullTimeEmployee::fullTimeEmployee(string theId) : employee(theId)
{
}

fullTimeEmployee::~fullTimeEmployee(void)
{
}
