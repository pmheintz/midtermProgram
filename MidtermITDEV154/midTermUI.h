#ifndef MIDTERMUI_H
#define MIDTERMUI_H

#include <iostream>
#include <string>
#include <vector>
#include "employee.h"
using namespace std;

class midTermUI
{
private:
	void enterInput(vector<employee*> employees);
	void calculateEmployeePay(vector<employee*> employees);
public:
	midTermUI();
	~midTermUI();
	void mainMethod();
};

#endif