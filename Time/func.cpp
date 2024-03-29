#include "func.h"
#include <cassert>

bool IsLeapYear(int y)
{
	if (y % 400 == 0)
		return true;
	return ((y % 4 == 0) && (y % 100 != 0));
}

int LaterInYear(int m1, int d1, int m2, int d2)
{
	assert((m1 < 12) && (m1 > 0));
	assert((m2 < 12) && (m2 > 0));
	assert((d1 < 32) && (d1 > 0));
	assert((d2 < 32) && (d2 > 0));
	if (m1 > m2) return 1;
	if (m1 < m2) return 2;
	if (d1 == d2) return 0;
	if (d1 > d2) return 1;
	return 2;
}

int DaysInYear(int y)
{
	if (IsLeapYear(y))
		return 366;
	return 365;
}

int DaysInYearRange(int y1, int y2)
{
	int res = 0;
	for (int i = y1; i <= y2; i++)
		res += DaysInYear(i);
	return res;
}

int SeconsInHours(int h)
{
	return h * 60 * 60;
}