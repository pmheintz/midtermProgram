#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class employee
{
protected:
	string firstName;
	string lastName;
	int id;
	double wage;

public:
	employee();
	~employee();
	virtual double calculatePay() = 0;
	string getFirstName();
	void setFirstName(string fName);
	string getLastName();
	void setLastName(string lName);
	int getId();
	double getWage();
	void setWage(double theWage);
};

#endif