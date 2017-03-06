#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include "employee.h"
class fullTimeEmployee :
	public employee
{
public:
	fullTimeEmployee();
	~fullTimeEmployee();
	double calculatePay();
};

#endif