/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Part time employee header
* March 8, 2017 */

#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include "employee.h"
class partTimeEmployee :
	public employee
{
public:
	float calculatePay(float hours);
	partTimeEmployee(string theId);
	~partTimeEmployee(void);
};

#endif