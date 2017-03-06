#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include "employee.h"
class partTimeEmployee :
	public employee
{
public:
	partTimeEmployee();
	~partTimeEmployee();
	double calculatePay();
};

#endif