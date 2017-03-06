#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include "employee.h"
class fullTimeEmployee :
	public employee
{
public:
	fullTimeEmployee(int id = 1000);
	~fullTimeEmployee();
	float calculatePay(int hours);
};

#endif