#ifndef STUDENT
#define STUDENT

#include <string>

using namespace std;

class Student
{
private:
    string id;
    string name;
    int day, month, year;
    double point;

public:
    Student();
    Student(string id, string name, int day, int month, int year, double point);

    void setId(string id);
    void setName(string name);
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    void setPoint(double point);

    string getName();
    string getId();
    int getDay();
    int getMonth();
    int getYear();
    double getPoint();

    string toString();
};

#endif
