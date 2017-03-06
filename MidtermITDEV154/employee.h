#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class employee
{
private:
	string firstName;
	string lastName;
	int id;
	float wage;

public:
	employee(int id = 1000);
	~employee();
	virtual float calculatePay(int hours) = 0;
	string getFirstName();
	void setFirstName(string fName);
	string getLastName();
	void setLastName(string lName);
	int getId();
	float getWage();
	void setWage(float hourlyWage);
};

#endif