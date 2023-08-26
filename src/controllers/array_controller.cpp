#include "../structures/array.h"
#include "../structures/linked_list.h"
#include <iostream>
#include "../utils/io.h"
#include "array_controller.h"
#include "../utils/sort_student_by_point.h"

#define NUM_OF_ALPHABET 26
#define START_OF_ALPHABET_IN_ASCII 97

using namespace std;

ArrayController::ArrayController()
{
    store = new Array;
    read_from_file("src\\data\\sinh_vien.txt", store);
    service = new StudentService(store);
}

ArrayController::~ArrayController()
{
    delete store;
    delete service;
}

void ArrayController::print()
{
    service->print();
}

void ArrayController::insert()
{
    service->insert();
}

void ArrayController::remove()
{
    service->remove_at();
}

void ArrayController::find()
{
    List *result = new Array;
    service->findByCharInName(result);
    delete result;
}

void ArrayController::update()
{
    service->update();
}

void ArrayController::sort()
{
    auto sortByPoint = new SortStudentByPoint;
    service->sort(sortByPoint);
    delete sortByPoint;
}

void ArrayController::min_point()
{
    service->min_point();
}

void ArrayController::max_point()
{
    service->max_point();
}
