#include "tree_controller.h"
#include "../utils/io.h"

TreeController::TreeController()
{
    store = new Tree;
    read_from_file("src\\data\\sinh_vien.txt", store);
    service = new StudentServiceTree(store);
}

TreeController::~TreeController()
{
    delete store;
    delete service;
}

void TreeController::print()
{
    service->print();
}

void TreeController::inorder()
{
    service->inorder();
}

void TreeController::preorder()
{
    service->preorder();
}

void TreeController::postorder()
{
    service->postorder();
}

void TreeController::insert()
{
    service->add();
}

void TreeController::remove()
{
    service->remove();
}

void TreeController::find()
{
    service->find();
}
