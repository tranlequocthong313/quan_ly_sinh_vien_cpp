#include "router.h"

Router::Router()
{
    listController = new LinkedListController;
    arrayController = new ArrayController;
    doublyListController = new DoublyListController;
    stackController = new StackController;
    queueController = new QueueController;
    treeController = new TreeController;
}

Router::~Router()
{
    delete listController;
    delete arrayController;
    delete doublyListController;
    delete stackController;
    delete queueController;
    delete treeController;
}
