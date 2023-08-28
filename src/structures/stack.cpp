#include "stack.h"

Stack::Stack()
{
    store = new Array;
}

Stack::~Stack()
{
    delete store;
}

void Stack::pop()
{
    if (store->isEmpty())
    {
        throw "Stack is empty!";
    }
    store->remove_at(store->getSize() - 1);
    pointer = store->getSize();
}

bool Stack::isEmpty()
{
    return store->isEmpty();
}

void Stack::reset_iterator()
{
    pointer = store->getSize() - 1;
}

bool Stack::hasNext()
{
    return pointer >= 0;
}

Student *Stack::next()
{
    return store->get_at(pointer--);
}

void Stack::push(Student student)
{
    store->push_back(student);
    pointer = store->getSize();
}

Student *Stack::top()
{
    if (store->isEmpty())
    {
        throw "Stack is empty!";
    }
    return store->get_at(store->getSize() - 1);
}
