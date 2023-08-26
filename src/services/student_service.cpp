#include "student_service.h"
#include "../utils/io.h"
#include <iostream>

using namespace std;

StudentService::StudentService(List *ds)
{
    this->ds = ds;
}

StudentService::~StudentService()
{
    delete this->ds;
}

void StudentService::print()
{
    cout << "\n\t\t\t THONG TIN SINH VIEN " << endl;
    print(ds);
}

void StudentService::print(List *_ds)
{
    _ds->reset_iterator();
    int i = 0;
    while (_ds->hasNext())
    {
        cout << "\n\t\t Thong tin sinh vien thu " << ++i << endl;
        print_student(_ds->next());
    }
}

void StudentService::min_point()
{
    ds->reset_iterator();
    Student *result = nullptr;
    while (ds->hasNext())
    {
        if (!result)
        {
            result = ds->next();
        }
        else
        {
            auto student = ds->next();
            if (result->getPoint() > student->getPoint())
            {
                result = student;
            }
        }
    }
    cout << "\n\t\t Thong tin sinh vien cao diem nhat." << endl;
    print_student(result);
}

void StudentService::max_point()
{
    ds->reset_iterator();
    Student *result = nullptr;
    while (ds->hasNext())
    {
        if (!result)
        {
            result = ds->next();
        }
        else
        {
            auto student = ds->next();
            if (result->getPoint() < student->getPoint())
            {
                result = student;
            }
        }
    }
    cout << "\n\t\t Thong tin sinh vien cao diem nhat." << endl;
    print_student(result);
}

void StudentService::findByCharInName(List *result)
{
    cout << "=== BAN MUON TIM KIEM THEO CACH NAO ===.\n"
         << "1) Nhap mot ky tu.\n"
         << "2) Random mot ky tu.\n"
         << "== MOI BAN LUA CHON ==.\n";
    int choose = get_option(1, 2, "Nhap vao lua chon", "Nhap khong hop le! Moi nhap laij.");

    char c;
    if (choose == 1)
    {
        cout << "- Nhap ki tu: ";
        cin >> c;
    }
    else
    {
        c = (rand() % NUM_OF_ALPHABET) + START_OF_ALPHABET_IN_ASCII;
    }
    ds->reset_iterator();
    while (ds->hasNext())
    {
        auto student = ds->next();
        if (student->getName().find(tolower(c)) != string::npos || student->getName().find(toupper(c)) != string::npos)
        {
            result->push_back(*student);
        }
    }
    if (result->isEmpty())
    {
        cout << "+ Khong co sinh vien nao co ky tu '" << c << "' trong ten.\n";
    }
    else
    {
        cout << "\n\t\t\t Thong tin cac sinh vien co ky tu '" << c << "' trong ten la:" << endl;
        print(result);
    }
}

void StudentService::sort(Comparator<Student> *comparator)
{
    ds->sort(comparator);
    cout << "+ Sap xep thanh cong.\n";
}

void StudentService::remove_at()
{
    int position;
    cout << "+ Ban muon xoa sinh vien thu may: ";
    cin >> position;
    if (position < 1 && position > ds->getSize())
        cout << "+ Khong tim thay sinh vien muon xoa." << endl;
    else
    {
        ds->remove_at(position - 1);
        cout << "+ Xoa thanh cong.\n";
    };
}

void StudentService::insert()
{
    auto student = enter_student();
    int position = get_option(1, ds->getSize(), "Nhap vao vi tri ban muon them", "Vi tri khong hop le! Moi nhap lai.");
    ds->insert_at(position - 1, *student);
}

void StudentService::update()
{
    int position = get_option(1, ds->getSize(), "Ban muon sua sinh vien thu may", "Thu tu khong hop le! Vui long nhap lai.") - 1;
    int chooseUpdate;
    Student student = ds->get_at(position);
    string name, id;
    int day, month, year;
    double point;
    do
    {
        cout << "=== UPDATE ===.\n"
             << "1) Ho ten.\n"
             << "2) Ma so sinh vien.\n"
             << "3) Ngay thang nam sinh.\n"
             << "4) Diem so.\n"
             << "5) Sua toan bo.\n"
             << "6) Thoat.\n"
             << "== MOI LUA CHON ==.\n";
        chooseUpdate = get_option(1, 6, "Chon thong tin ban muon sua", "Khong hop le! Vui long chon lai");
        if (chooseUpdate > 0 && chooseUpdate < 6)
        {
            if (chooseUpdate == 1)
            {
                cin.ignore();
                cout << "+ Sua lai ho ten: ";
                getline(cin, name);
                student.setName(name);
            }
            else if (chooseUpdate == 2)
            {
                cin.ignore();
                cout << "+ Sua lai MSSV: ";
                getline(cin, id);
                student.setId(id);
            }
            else if (chooseUpdate == 3)
            {
                cout << "+ Sua lai ngay thang nam sinh: ";
                cin >> day >> month >> year;
                student.setDay(day);
                student.setMonth(month);
                student.setYear(year);
            }
            else if (chooseUpdate == 4)
            {
                cout << "+ Sua lai diem so: ";
                cin >> point;
                student.setPoint(point);
            }
            else if (chooseUpdate == 5)
            {
                cout << "- Nhap vao cac thong tin muon sua." << endl;
                cin.ignore();
                cout << "+ Nhap ho ten: ";
                getline(cin, name);
                cout << "+ Nhap MSSV: ";
                getline(cin, id);
                cout << "+ Nhap ngay thang nam sinh: ";
                cin >> day >> month >> year;
                cout << "+ Nhap vao diem: ";
                cin >> point;
                student.setName(name);
                student.setId(id);
                student.setDay(day);
                student.setMonth(month);
                student.setYear(year);
                student.setPoint(point);
            }
            ds->update_at(position, student);
            cout << "+ Sua thanh cong.\n";
        }
    } while (chooseUpdate > 0 && chooseUpdate < 6);
}
