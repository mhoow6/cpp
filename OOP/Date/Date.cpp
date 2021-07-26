#include "Date.h"

Date::Date(int year, int month, int day)
{
	SetDate(year, month, day);
}

void Date::SetDate(int year, int month, int day)
{
	m_Month = month;
	m_Day = day;
	m_Year = year;
}