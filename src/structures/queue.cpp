#include "queue.h"

void Queue::pop()
{
    store->remove_at(0);
}

bool Queue::isEmpty()
{
    return store->isEmpty();
}

void Queue::reset_iterator()
{
    pointer = 0;
}

bool Queue::hasNext()
{
    return pointer != store->getSize();
}

Student *Queue::next()
{
    return store->get_at(pointer++);
}

void Queue::push(Student student)
{
    store->push_back(student);
}

Student *Queue::top()
{
    return store->get_at(0);
}
