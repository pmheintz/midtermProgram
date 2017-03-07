/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* User interface header
* March 8, 2017 */

#ifndef MIDTERMUI_H
#define MIDTERMUI_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "employee.h"
#include "fullTimeEmployee.h"
#include "partTimeEmployee.h"
using namespace std;

class midTermUI
{
	private:
		void enterInput(vector<employee*> employees, int index);
		void calculateEmployeePay(vector<employee*> employees, int index);

	public:
		void mainMethod();
		midTermUI(void);
		~midTermUI(void);
};

#endif