/* Paul Heintz heintzpm@gmatc.matc.edu
* ITDEV-154 Downtown
* Midterm Program
* March 8, 2017 */

#include "info.h"
#include "midTermUI.h"

void main()
{
	info myInfo("Paul Heintz", 4, "Midterm Program");
	myInfo.displayInfo();

	midTermUI theUI;
	theUI.mainMethod();
}