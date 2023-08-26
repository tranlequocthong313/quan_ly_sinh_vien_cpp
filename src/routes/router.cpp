#include "router.h"

Router::Router()
{
    listController = new LinkedListController;
    arrayController = new ArrayController;
    doublyListController = new DoublyListController;
}

Router::~Router()
{
    delete listController;
    delete arrayController;
    delete doublyListController;
}
