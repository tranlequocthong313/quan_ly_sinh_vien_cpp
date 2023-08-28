#ifndef IO_HEADER
#define IO_HEADER

#include "../models/student.h"
#include <string>
#include "../structures/pushable.h"

void print_student(Student *student);

void print_students(Student *student, int size);

Student *enter_student();

Student *read_from_file(string filename, Pushable *structure);

int get_option(
    int min,
    int max,
    string title = "Nhap vao chuc nang ban muon su dung",
    string invalidMessage = "Nhap khong hop le! Moi nhap lai.");

#endif
