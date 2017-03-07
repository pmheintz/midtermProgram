/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Employee header
* March 8, 2017 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class employee
{
	private:
		string id;
		string firstName;
		string lastName;
		float wage;

	public:
		virtual float calculatePay(float hours) = 0;
		void setWage(float hourlyWage);
		float getWage();
		string getFirstName();
		string getLastName();
		string getId();
		void setFirstName(string first);
		void setLastName(string last);
		employee(string theId);
		~employee(void);
	};

#endif