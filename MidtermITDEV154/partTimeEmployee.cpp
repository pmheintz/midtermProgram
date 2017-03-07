/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Part time employee child class
* March 8, 2017 */

#include "partTimeEmployee.h"

float partTimeEmployee::calculatePay(float hours)
{
	float weeklyPay;
	weeklyPay = getWage() * hours;
	return weeklyPay;
}

partTimeEmployee::partTimeEmployee(string theId) : employee(theId)
{
}

partTimeEmployee::~partTimeEmployee(void)
{
}
