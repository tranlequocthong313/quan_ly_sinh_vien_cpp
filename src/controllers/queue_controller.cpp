#include "queue_controller.h"
#include "../utils/io.h"

QueueController::QueueController()
{
    store = new Queue;
    read_from_file("src\\data\\sinh_vien.txt", store);
    service = new StudentServiceStackQueue(store);
}

QueueController::~QueueController()
{
    delete store;
    delete service;
}

void QueueController::print()
{
    service->print();
}

void QueueController::push()
{
    service->insert();
}

void QueueController::getFirst()
{
    service->getFirst();
}

void QueueController::getFirstAndRemove()
{
    service->getAndDeleteFirst();
}
void QueueController::checkEmpty()
{
    service->checkEmpty();
}
