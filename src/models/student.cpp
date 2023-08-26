#include "student.h"
#include <iostream>
#include "../utils/formatter.h"
#include <sstream>

Student::Student() {}

Student::Student(string id, string name, int day, int month, int year, double point)
{
    this->id = id;
    this->name = name;
    this->day = day;
    this->month = month;
    this->year = year;
    this->point = point;
}

void Student::setId(string id)
{
    this->id = id;
}

void Student::setName(string name)
{
    this->name = name;
}

void Student::setDay(int day)
{
    this->day = day;
}

void Student::setMonth(int month)
{
    this->month = month;
}

void Student::setYear(int year)
{
    this->year = year;
}

void Student::setPoint(double point)
{
    this->point = point;
}

string Student::getName()
{
    return name;
}

string Student::getId()
{
    return id;
}

int Student::getDay()
{
    return day;
}

int Student::getMonth()
{
    return month;
}

int Student::getYear()
{
    return year;
}

double Student::getPoint()
{
    return point;
}

string Student::toString()
{
    stringstream ss;
    ss << "[Id]: " << id << ", ";
    ss << "[Name]: " << name << ", ";
    ss << "[Day]: " << day << ", ";
    ss << "[Month]: " << month << ", ";
    ss << "[Year]: " << year << ", ";
    ss << "[Point]: " << point << ", ";
    return ss.str();
}
