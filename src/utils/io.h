#ifndef IO_HEADER
#define IO_HEADER

#include "../models/student.h"
#include "../structures/list.h"
#include <string>

void print_student(Student *student);

Student *enter_student();

Student *read_from_file(string filename, List *structure);

int get_option(
    int min,
    int max,
    string title = "Nhap vao chuc nang ban muon su dung",
    string invalidMessage = "Nhap khong hop le! Moi nhap lai.");

#endif
