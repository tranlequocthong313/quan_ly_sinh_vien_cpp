#include "formatter.h"
#include <sstream>

bool Formatter::isValidDate(int day, int month, int year)
{
    return day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 0;
}

string Formatter::formatDate(int day, int month, int year)
{
    if (!isValidDate(day, month, year))
    {
        throw "Invalid date";
    }
    stringstream ss;
    if (day < 10)
    {
        ss << "0" << day << "/";
    }
    else
    {
        ss << day << "/";
    }
    if (month < 10)
    {
        ss << "0" << month << "/";
    }
    else
    {
        ss << month << "/";
    }
    ss << year;
    return ss.str();
}
