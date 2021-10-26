#include "func.h"

bool IsLeapYear(int y)
{
	if (y % 400 == 0)
		return true;
	return ((y % 4 == 0) && (y % 100 != 0));
}