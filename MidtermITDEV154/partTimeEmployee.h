#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include "employee.h"
class partTimeEmployee :
	public employee
{
public:
	partTimeEmployee(int id = 2000);
	~partTimeEmployee();
	float calculatePay(int hours);
};

#endif