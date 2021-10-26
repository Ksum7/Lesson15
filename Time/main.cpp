#include <cassert>
#include "func.h"

int main()
{
	//task1
	assert(!IsLeapYear(1000));
	assert(IsLeapYear(2004));

	//task2
	assert(LaterInYear(1, 30, 3, 30) == 2);
	assert(LaterInYear(4, 26, 4, 25) == 1);

	//task3
	assert(DaysInYear(2002) == 365);
	assert(DaysInYear(2004) == 366);

	//task4
	assert(DaysInYearRange(2002, 2004) == 365 + 365 + 366);
	assert(DaysInYearRange(2003, 2004) == 365 + 366);
}