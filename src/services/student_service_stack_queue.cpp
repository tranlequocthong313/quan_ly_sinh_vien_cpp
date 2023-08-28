#include "student_service_stack_queue.h"
#include <iostream>
#include "../utils/io.h"

using namespace std;

StudentServiceStackQueue::StudentServiceStackQueue(Vector *ds)
{
    this->ds = ds;
}

void StudentServiceStackQueue::checkEmpty()
{
    if (ds->isEmpty())
    {
        cout << "+ Rong.\n";
    }
    else
    {
        cout << "+ Da co du lieu.\n";
    }
}

void StudentServiceStackQueue::print()
{
    cout << "\n\t\t\t THONG TIN SINH VIEN " << endl;
    ds->reset_iterator();
    int i = 0;
    while (ds->hasNext())
    {
        cout << "\n\t\t Thong tin sinh vien thu " << ++i << endl;
        print_student(ds->next());
    }
}

void StudentServiceStackQueue::insert()
{
    auto student = enter_student();
    ds->push(*student);
    cout << "+ Them thanh cong.\n";
}

void StudentServiceStackQueue::getFirst()
{
    cout << "- Thong tin sinh vien dau danh sach:" << endl;
    print_student(ds->top());
}

void StudentServiceStackQueue::getAndDeleteFirst()
{
    auto student = ds->top();
    ds->pop();
    cout << "- Thong tin sinh vien dau danh sach:" << endl;
    print_student(student);
    cout << "+ Xoa thanh cong sinh vien dau danh sach.\n";
}
