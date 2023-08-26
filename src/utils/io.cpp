#include "io.h"
#include "formatter.h"
#include <iostream>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

void print_student(Student *student)
{
    if (!student)
    {
        return;
    }
    cout << "MSSV: " << student->getId() << endl;
    cout << "Ho ten: " << student->getName() << endl;
    cout << "Ngay sinh: " << Formatter::formatDate(student->getDay(), student->getMonth(), student->getYear()) << endl;
    cout << "Diem: " << student->getPoint() << endl;
}

Student *enter_student()
{
    cout << "- Nhap vao thong tin sinh vien ma ban muon them." << endl;

    string name, id;
    int day, month, year;
    double point;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "+ Nhap ho ten: ";
    getline(cin, name);
    cout << "+ Nhap MSSV: ";
    cin >> id;
    cout << "+ Nhap ngay, thang, nam sinh: ";
    cin >> day >> month >> year;
    cout << "+ Nhap diem: ";
    cin >> point;

    return new Student(id, name, day, month, year, point);
}

Student *read_from_file(string filename, List *structure)
{
    ifstream fileIn(filename);
    char id[20], name[30];
    int day, month, year;
    double point;

    if (fileIn.is_open())
    {
        int size;
        fileIn >> size;

        for (auto i = 0; i < size; i++)
        {
            fileIn.ignore();
            fileIn.getline(name, 30, ',');
            fileIn.getline(id, 20, ',');
            fileIn >> day;
            fileIn.ignore(1, '/');
            fileIn >> month;
            fileIn.ignore(1, '/');
            fileIn >> year;
            fileIn.ignore(1, '/');
            fileIn >> point;

            Student s(id, name, day, month, year, point);
            structure->push_back(s);
        }
        fileIn.close();
    }
    else
    {
        cout << "+ Mo file that bai.\n";
    }
}

int get_option(
    int min,
    int max,
    string title,
    string invalidMessage)
{
    int result;
    do
    {
        cout << "- " << title << ": ";
        cin >> result;
        if (result < min || result > max)
            cout << invalidMessage << endl;
    } while (result < min || result > max);

    return result;
}
