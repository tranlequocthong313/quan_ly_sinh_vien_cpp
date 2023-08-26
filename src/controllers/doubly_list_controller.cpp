#include "../structures/array.h"
#include "../structures/doubly_linked_list.h"
#include <iostream>
#include "../utils/io.h"
#include "doubly_list_controller.h"
#include "../utils/sort_student_by_point.h"

#define NUM_OF_ALPHABET 26
#define START_OF_ALPHABET_IN_ASCII 97

using namespace std;

DoublyListController::DoublyListController()
{
    store = new DoublyLinkedList;
    read_from_file("src\\data\\sinh_vien.txt", store);
    service = new StudentService(store);
}

DoublyListController::~DoublyListController()
{
    delete store;
    delete service;
}

void DoublyListController::print()
{
    service->print();
}

void DoublyListController::insert()
{
    service->insert();
}

void DoublyListController::remove()
{
    service->remove_at();
}

void DoublyListController::find()
{
    List *result = new DoublyLinkedList;
    service->findByCharInName(result);
    delete result;
}

void DoublyListController::update()
{
    service->update();
}

void DoublyListController::sort()
{
    auto sortByPoint = new SortStudentByPoint;
    service->sort(sortByPoint);
    delete sortByPoint;
}

void DoublyListController::min_point()
{
    service->min_point();
}

void DoublyListController::max_point()
{
    service->max_point();
}
