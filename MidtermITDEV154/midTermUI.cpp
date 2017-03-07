/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Employee user interface
* March 8, 2017 */

#include "midTermUI.h"

midTermUI::midTermUI()
{
}


midTermUI::~midTermUI()
{
}

void midTermUI::enterInput(vector<employee*> employees, int index)
{
	string fName, lName;
	float hWage;
	cout << endl << "Enter first name for employee " << employees[index]->getId() << ": ";
	cin >> fName;
	employees[index]->setFirstName(fName);
	cout << "Enter last name for employee " << employees[index]->getId() << ": ";
	cin >> lName;
	employees[index]->setLastName(lName);
	cout << "Enter hourly wage: ";
	cin >> hWage;
	employees[index]->setWage(hWage);
}

void midTermUI::calculateEmployeePay(vector<employee*> employees, int index)
{
	if (dynamic_cast<fullTimeEmployee*>(employees[index]))
	{
		float hours;
		fullTimeEmployee *temp;
		temp = static_cast<fullTimeEmployee*>(employees[index]);
		cout << endl << "Enter weekly hours for full time employee " << temp->getId() << ": ";
		cin >> hours;
		cout << temp->getFirstName() << " " << temp->getLastName() << "'s weekly pay is $";
		cout << fixed << setprecision(2) << temp->calculatePay(hours);
	}
	else
	{
		float hours;
		partTimeEmployee *temp;
		temp = static_cast<partTimeEmployee*>(employees[index]);
		cout << endl << "Enter weekly hours for part time employee " << temp->getId() << ": ";
		cin >> hours;
		cout << temp->getFirstName() << " " << temp->getLastName() << "'s weekly pay is $";
		cout << fixed << setprecision(2) << temp->calculatePay(hours);
	}
}

void midTermUI::mainMethod()
{
	vector<employee*> employees;
	fullTimeEmployee ft10000("10000");
	fullTimeEmployee ft10001("10001");
	fullTimeEmployee ft10002("10002");
	partTimeEmployee pt20000("20000");
	partTimeEmployee pt20001("20001");
	employees.push_back(&ft10000);
	employees.push_back(&ft10001);
	employees.push_back(&ft10002);
	employees.push_back(&pt20000);
	employees.push_back(&pt20001);

	cout << endl << "*** Gathering Employee Info ***" << endl;

	for (int i = 0; i < employees.size(); i++)
	{
		enterInput(employees, i);
	}

	for (int i = 0; i < employees.size(); i++)
	{
		calculateEmployeePay(employees, i);
	}
}
