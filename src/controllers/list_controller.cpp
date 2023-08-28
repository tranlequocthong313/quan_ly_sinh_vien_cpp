#include "../utils/io.h"
#include "list_controller.h"
#include "../utils/sort_student_by_point.h"
LinkedListController::LinkedListController()
{
    store = new LinkedList;
    read_from_file("src\\data\\sinh_vien.txt", store);
    service = new StudentServiceList(store);
}

LinkedListController::~LinkedListController()
{
    delete store;
    delete service;
}

void LinkedListController::print()
{
    service->print();
}

void LinkedListController::insert()
{
    service->insert();
}

void LinkedListController::remove()
{
    service->remove_at();
}

void LinkedListController::find()
{
    List *result = new LinkedList;
    service->findByCharInName(result);
    delete result;
}

void LinkedListController::update()
{
    service->update();
}

void LinkedListController::sort()
{
    auto sortByPoint = new SortStudentByPoint;
    service->sort(sortByPoint);
    delete sortByPoint;
}

void LinkedListController::min_point()
{
    service->min_point();
}

void LinkedListController::max_point()
{
    service->max_point();
}
