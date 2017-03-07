/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Full time employee header
* March 8, 2017 */

#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include "employee.h"
class fullTimeEmployee :
	public employee
{
public:
	float calculatePay(float hours);
	fullTimeEmployee(string theId);
	~fullTimeEmployee(void);
};

#endif