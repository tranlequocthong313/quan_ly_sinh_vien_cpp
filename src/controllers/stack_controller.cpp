#include "stack_controller.h"
#include "../utils/io.h"

StackController::StackController()
{
    store = new Stack;
    read_from_file("src\\data\\sinh_vien.txt", store);
    service = new StudentServiceStackQueue(store);
}

StackController::~StackController()
{
    delete store;
    delete service;
}

void StackController::print()
{
    service->print();
}

void StackController::push()
{
    service->insert();
}

void StackController::getFirst()
{
    service->getFirst();
}

void StackController::getFirstAndRemove()
{
    service->getAndDeleteFirst();
}
void StackController::checkEmpty()
{
    service->checkEmpty();
}
