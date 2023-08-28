#ifndef QUEUE_HEADER
#define QUEUE_HEADER

#include "linked_list.h"
#include "vector.h"

class Queue : public Vector
{
private:
    int pointer = 0;
    LinkedList *store = new LinkedList;

public:
    void pop();
    bool isEmpty();
    void push(Student student);
    Student *top();
    bool hasNext();
    Student *next();
    void reset_iterator();
};

#endif
